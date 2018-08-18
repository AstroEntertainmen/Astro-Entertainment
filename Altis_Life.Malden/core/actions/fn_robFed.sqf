#include "..\..\script_macros.hpp"
/*
    File: life_fnc_robFed.sqf
    Author: its_leigham

    Description:
    Robs fed then starts a timer to prevent it from being robbed again.
*/
params [
	["_shop", objNull, [objNull]],
	["_robber", objNull, [objNull]]
];


life_fnc_notificationSystem = {
	params [
		["_text", "OH FUCK", [""]]
	];
	hint format ["%1", _text];
};


//first we need to find some vars.
private _minCops = 7;
private _timer = 3600;
private _randomGold = 10;
private _minGold = 10;
private _gold = life_inv_goldbar;

//some math and random vars.
private _currentCops = (west countSide playableUnits);
private _payout = _minGold + round(random _randomGold);

//has the Federal Reserve been robbed recently ?
if (_shop getVariable ["fedResetTimer", false]) exitWith {
        hint "You cannot rob the Federal Reserve as someone has recently.";
        closeDialog 0;
};


//exit checks ?
if (_currentCops < _minCops) exitWith {[format ["You cannot rob this shop, %1 or more police need to be on", _minCops],false,"slow"] call life_fnc_notificationSystem;};
if ((_robber distance _shop) > 25) exitWith { ["You need to be within 25 meters to rob this shop!",false,"slow"] call life_fnc_notificationSystem; };
if ((vehicle player) != _robber) exitWith { ["Get out of your car!",false,"slow"] call life_fnc_notificationSystem; };
if(!([false,"blastingcharge",1] call life_fnc_handleInv)) exitWith { ["You dont have a blasting charge",false,"slow"] call life_fnc_notificationSystem; };
if !(alive _robber) exitWith {};


//now we know the exit checks are false, we want to set the _shop so it cant be robbed again till the timer is up
_shop setVariable ["fedResetTimer", true, true];

//setting up the progress bar.
disableSerialization;
5 cutRsc ["life_progress","PLAIN"];
private _ui = uiNameSpace getVariable "life_progress";
private _progress = _ui displayCtrl 38201;
private _pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbing the Federal Reserve, stay within 5 meters (1%1)...","%"];
_progress progressSetPosition 0.01;
private _cP = 0.01;
private _rndmrk = random(1000);
private _mrkstring = format ["wrgMarker_%1", _rndmrk];
private _pos = position player;

["The Federal Reserve is being robbed!", false,"slow"] remoteExec ["life_fnc_notificationSystem", -2];

//Loop for the progress bar.
for "_i" from 0 to 1 step 0 do {
	uiSleep 0.05;

	_cP = _cP + (0.01 * (missionNamespace getVariable ["mav_ttm_var_robbingMultiplier", 1]));
	_progress progressSetPosition _cP;
    _pgText ctrlSetText format["Robbing the Federal Reserve, stay within 5 meters (%1%2)...",round(_cP * 100),"%"];

	if (_cP >= 1 OR !alive _robber) exitWith {};
    if (_robber distance _shop > 5.1) exitWith {};
    if ((_robber getVariable["restrained",false])) exitWith {};
    if (life_istazed) exitWith {};
    if (life_interrupted) exitWith {};
};

// more exit checks.
if!(alive _robber) exitWith {call life_fnc_hudUpdate; };
if (_robber distance _shop > 5.1) exitWith {  ["You are too far away, robbery failed!",false,"slow"] call life_fnc_notificationSystem; 5 cutText ["","PLAIN"];[] call life_fnc_hudUpdate;};
if (_robber getVariable "restrained") exitWith {["You have been arrested!",false,"slow"] call life_fnc_notificationSystem; 5 cutText ["","PLAIN"]; [] call life_fnc_hudUpdate;};
if (life_istazed) exitWith {["You have been downed!",false,"slow"] call life_fnc_notificationSystem; 5 cutText ["","PLAIN"]; [] call life_fnc_hudUpdate;};

[format["You have stolen $%1 from the Federal Reserve, Run!!",[_payout] call life_fnc_numberText],false,"slow"] call life_fnc_notificationSystem;

5 cutText ["","PLAIN"];

_gold = _gold + _payout;
["robshop"] spawn mav_ttm_fnc_addExp;
[] call life_fnc_hudSetup;
[0] call SOCK_fnc_updatePartial;

[0,format["Police News: The Federal Reserve has just been robbed, the stolen amount of gold bars was %1!",name _robber, _shop, [_payout] call life_fnc_numberText]] remoteExec ["life_fnc_broadcast",civilian];
[getPlayerUID _robber,name _robber,"19"] remoteExec ["life_fnc_wantedAdd",2];

// now the timer untill it can be robbed again
private _timeNow = diag_tickTime;

private _timeNow = diag_tickTime;

waitUntil {
    uiSleep 0.1;
    (diag_tickTime >= (_timeNow + _timer));
};

_shop setVariable ["fedResetTimer", false, true];
