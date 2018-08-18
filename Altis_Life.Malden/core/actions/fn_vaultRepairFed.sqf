#include "..\..\script_macros.hpp"
/*
    File: life_fnc_vaultRepairFed.sqf
    Author: Fury

    Description:
    For resetting the Fed once robbed
*/
private["_robber","_shop","_kassa","_ui","_progress","_pgText","_cP","_rip","_Pos","_rndmrk","_mrkstring","_vault"];


_shop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param; //The object that has the action attached to it is _this. ,0, is the index of object, ObjNull is the default should there be nothing in the parameter or it's broken
_robber = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param; //Can you guess? Alright, it's the player, or the "caller". The object is 0, the person activating the object is 1
_action = [_this,2] call BIS_fnc_param;//Action name
if (_robber distance _shop > 20) exitWith { ["You need to be within 5 meters to rob this shop!",false,"slow"] call life_fnc_notificationSystem; };
if (vehicle player != _robber) exitWith { ["Get out of your car!",false,"slow"] call life_fnc_notificationSystem; };

if !(alive _robber) exitWith {};

_nul = [_shop, _action] remoteExec ["removeAction", 0, true];
//_shop switchMove "AmovPercMstpSsurWnonDnon";
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Calling for repairs, stay within 5 meters (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.01;
_rndmrk = random(1000);
_mrkstring = format ["wrgMarker_%1", _rndmrk];
_Pos = position player;

while{true} do
{
    uiSleep 0.05;
    _cP = _cP + (0.01 * (missionNamespace getVariable ["mav_ttm_var_robbingMultiplier", 1]));
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format["Calling for repairs, stay within 5 meters (%1%2)...",round(_cP * 100),"%"];

    if (_cP >= 1 OR !alive _robber) exitWith {};
    if (_robber distance _shop > 5.1) exitWith {};
    if ((_robber getVariable["restrained",false])) exitWith {};
    if (life_istazed) exitWith {};
    if (life_interrupted) exitWith {};
};


    if!(alive _robber) exitWith {  life_rip = false;call life_fnc_hudUpdate; };
    if (_robber distance _shop > 5.1) exitWith {  ["You are too far away, Repair Failed",false,"slow"] call life_fnc_notificationSystem; 5 cutText ["","PLAIN"]; life_rip = false; call life_fnc_hudUpdate;};
    if (_robber getVariable "restrained") exitWith {  life_rip = false; ["You have been arrested!",false,"slow"] call life_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call life_fnc_hudUpdate;};
    if (life_istazed) exitWith {  life_rip = false; ["You have been downed!",false,"slow"] call life_fnc_notificationSystem; 5 cutText ["","PLAIN"]; call life_fnc_hudUpdate;};

    5 cutText ["","PLAIN"];
    [] call life_fnc_hudSetup;
    [0] call SOCK_fnc_updatePartial;

    _rip = false;
    if!(alive _robber) exitWith {};
    [0,format["Police News: Repairs have begun on the Federal Reserve Vault eta 1 hour.", call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",0];

uiSleep 5; //3600
_action = _shop addAction["Rob The Federal Reserve",life_fnc_robFed,"",0,false,false,"",'playerSide == civilian && vehicle player == player && player distance _target < 4'];
//_shop switchMove "";
