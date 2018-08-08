scriptName "functions_rebel_2";
#define __filename "functions_rebel_2.sqf"

_ownsDependency1 = [life_currentExpPerks, "rebel_1"] call mav_ttm_fnc_hasPerk;
_ownsDependency2 = [life_currentExpPerks, "rebel_2"] call mav_ttm_fnc_hasPerk;
_ownsDependency3 = [life_currentExpPerks, "rebel_3"] call mav_ttm_fnc_hasPerk;
_ownsDependency4 = [life_currentExpPerks, "rebel_4"] call mav_ttm_fnc_hasPerk;
_ownsDependency5 = [life_currentExpPerks, "rebel_5"] call mav_ttm_fnc_hasPerk;

if (_ownsDependency1 && _ownsDependency2 && !_ownsDependency3 && !_ownsDependency4 && !_ownsDependency5) then {
    mav_ttm_var_rebel = 2;
};