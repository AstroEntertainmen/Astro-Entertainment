// -- Weapon related perks
class perk_gunsspecialist_lessRecoil_1 {
	displayName = "Recoil Compensation";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-5% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_2 {
	displayName = "Recoil Compensation 2";
	requiredPerkPoints = 6;
	requiredLevel = 16;
	requiredPerk = "perk_gunsspecialist_lessRecoil_1";
	subtitle = "Level 16 Required, 6 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-10% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_3 {
	displayName = "Recoil Compensation 3";
	requiredPerkPoints = 7;
	requiredLevel = 21;
	requiredPerk = "perk_gunsspecialist_lessRecoil_2";
	subtitle = "Level 21 Required, 7 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-20% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_4 {
	displayName = "Recoil Compensation 4";
	requiredPerkPoints = 9;
	requiredLevel = 30;
	requiredPerk = "perk_gunsspecialist_lessRecoil_3";
	subtitle = "Level 30 Required, 9 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-35% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gunsspecialist_lessRecoil_5 {
	displayName = "Recoil Compensation 5";
	requiredPerkPoints = 12;
	requiredLevel = 40;
	requiredPerk = "perk_gunsspecialist_lessRecoil_4";
	subtitle = "Level 40 Required, 12 Perk Points";
	description = "Learn to control weapons better and lower the noticable recoil<br/><br/><t color='#10FF45'>-50% less recoil</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_recoilCompensation_5.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_1 {
	displayName = "Weapon Sway Control";
	requiredPerkPoints = 5;
	requiredLevel = 5;
	requiredPerk = "";
	subtitle = "Level 5 Required, 5 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-15% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_2 {
	displayName = "Weapon Sway Control 2";
	requiredPerkPoints = 6;
	requiredLevel = 12;
	requiredPerk = "perk_weaponSway_1";
	subtitle = "Level 12 Required, 6 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-25% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_3 {
	displayName = "Weapon Sway Control 3";
	requiredPerkPoints = 7;
	requiredLevel = 20;
	requiredPerk = "perk_weaponSway_2";
	subtitle = "Level 20 Required, 7 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-40% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_weaponSway_4 {
	displayName = "Weapon Sway Control 4";
	requiredPerkPoints = 10;
	requiredLevel = 35;
	requiredPerk = "perk_weaponSway_3";
	subtitle = "Level 35 Required, 10 Perk Points";
	description = "Learn to control weapons better with lower overall weapon sway<br/><br/><t color='#10FF45'>-55% less weapon sway</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_weaponSway_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

//Rebel perks
class rebel_1 {
	displayName = "Rebel Access";
	requiredPerkPoints = 10;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 10 Perk Points";
	description = "Unlock Access to Level 1 Rebel Weapons, Clothing, and Market";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class rebel_2 {
	displayName = "Rebel Apprentice";
	requiredPerkPoints = 10;
	requiredLevel = 8;
	requiredPerk = "rebel_1";
	subtitle = "Level 8 Required, 10 Perk Points";
	description = "Unlock Access to Level 2 Rebel Weapons, Clothing, and Market";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class rebel_3 {
	displayName = "Rebel Adept";
	requiredPerkPoints = 10;
	requiredLevel = 15;
	requiredPerk = "rebel_2";
	subtitle = "Level 15 Required, 10 Perk Points";
	description = "Unlock Access to Level 3 Rebel Weapons, Clothing, and Market";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class rebel_4 {
	displayName = "Rebel Expert";
	requiredPerkPoints = 15;
	requiredLevel = 25;
	requiredPerk = "rebel_3";
	subtitle = "Level 25 Required, 15 Perk Points";
	description = "Unlock Access to Level 4 Rebel Weapons, Clothing, and Market";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class rebel_5 {
	displayName = "Rebel Master/Black Market";
	requiredPerkPoints = 20;
	requiredLevel = 35;
	requiredPerk = "rebel_4";
	subtitle = "Level 35 Required, 20 Perk Points";
	description = "Unlock Access to Level 5 Rebel Weapons, Clothing, Market, and Black Market";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_rebel_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Paycheck
class perk_paycheck_1 {
	displayName = "Paycheck";
	requiredPerkPoints = 2;
	requiredLevel = 2;
	requiredPerk = "";
	subtitle = "Level 2 Required, 2 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+20% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_2 {
	displayName = "Paycheck 2";
	requiredPerkPoints = 3;
	requiredLevel = 8;
	requiredPerk = "perk_paycheck_1";
	subtitle = "Level 8 Required, 3 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+35% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_3 {
	displayName = "Paycheck 3";
	requiredPerkPoints = 6;
	requiredLevel = 20;
	requiredPerk = "perk_paycheck_2";
	subtitle = "Level 20 Required, 6 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+75% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_3.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_paycheck_4 {
	displayName = "Paycheck 4";
	requiredPerkPoints = 12;
	requiredLevel = 33;
	requiredPerk = "perk_paycheck_3";
	subtitle = "Level 33 Required, 12 Perk Points";
	description = "Receive more money on a paycheck<br/><br/><t color='#10FF45'>+100% more money per paycheck</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_paycheckIncrease_4.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

// -- Faster processing
class perk_processing_1 {
	displayName = "Processing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 4;
	requiredPerk = "";
	subtitle = "Level 4 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+10% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_2 {
	displayName = "Processing Speed 2";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "perk_processing_1";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+15% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_3 {
	displayName = "Processing Speed 3";
	requiredPerkPoints = 4;
	requiredLevel = 13;
	requiredPerk = "perk_processing_2";
	subtitle = "Level 13 Required, 4 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+25% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_4 {
	displayName = "Processing Speed 4";
	requiredPerkPoints = 5;
	requiredLevel = 17;
	requiredPerk = "perk_processing_3";
	subtitle = "Level 17 Required, 5 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+40% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_5 {
	displayName = "Processing Speed 5";
	requiredPerkPoints = 7;
	requiredLevel = 24;
	requiredPerk = "perk_processing_4";
	subtitle = "Level 17 Required, 7 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+55% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_processing_6 {
	displayName = "Processing Speed 6";
	requiredPerkPoints = 12;
	requiredLevel = 35;
	requiredPerk = "perk_processing_5";
	subtitle = "Level 17 Required, 12 Perk Points";
	description = "Learn to process materials more efficiently<br/><br/><t color='#10FF45'>+75% faster processing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_processSpeed_6.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

// -- Faster lockpicking
class perk_locksmith_1 {
	displayName = "Locksmith";
	requiredPerkPoints = 3;
	requiredLevel = 7;
	requiredPerk = "";
	subtitle = "Level 7 Required, 3 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+10% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_2 {
	displayName = "Locksmith 2";
	requiredPerkPoints = 5;
	requiredLevel = 16;
	requiredPerk = "perk_locksmith_1";
	subtitle = "Level 16 Required, 5 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+15% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_2.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_3 {
	displayName = "Locksmith 3";
	requiredPerkPoints = 7;
	requiredLevel = 23;
	requiredPerk = "perk_locksmith_2";
	subtitle = "Level 23 Required, 7 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+25% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_3.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_4 {
	displayName = "Locksmith 4";
	requiredPerkPoints = 9;
	requiredLevel = 29;
	requiredPerk = "perk_locksmith_3";
	subtitle = "Level 28 Required, 9 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+45% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_4.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_locksmith_5 {
	displayName = "Locksmith 5";
	requiredPerkPoints = 12;
	requiredLevel = 36;
	requiredPerk = "perk_locksmith_4";
	subtitle = "Level 36 Required, 12 Perk Points";
	description = "Learn to pick locks more efficiently and reduce lockpicking times on vehicles<br/><br/><t color='#10FF45'>+75% faster lockpicking</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lockpickSpeed_5.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};
//Faster Impounding
class functions_impoundSpeed_1 {
	displayName = "Impounding";
	requiredPerkPoints = 3;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3 Required, 3 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>50% faster impounding</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_impoundSpeed_1.sqf";
	limitToSides[] = {"WEST","INDEPENDENT"};
	color[] = {1,1,1,1};
};

class functions_impoundSpeed_2 {
	displayName = "Impounding 2";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "functions_impoundSpeed_1";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "You can impound vehicles more efficiently<br/><br/><t color='#10FF45'>100% faster impounding</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_impoundSpeed_2.sqf";
	limitToSides[] = {"WEST","INDEPENDENT"};
	color[] = {1,1,1,1};
};
//Repair Speed
class functions_repairSpeed_1 {
	displayName = "Repairing Speed";
	requiredPerkPoints = 3;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3 Required, 3 Perk Points";
	description = "You can repair vehicles more efficiently<br/><br/><t color='#10FF45'>40% faster repairing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_repairSpeed_2 {
	displayName = "Repairing Speed 2";
	requiredPerkPoints = 4;
	requiredLevel = 6;
	requiredPerk = "functions_repairSpeed_1";
	subtitle = "Level 6 Required, 4 Perk Points";
	description = "You can repair vehicles more efficiently<br/><br/><t color='#10FF45'>75% faster repairing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairSpeed_2.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class functions_repairInfinite_1 {
	displayName = "Infinite Toolkits";
	requiredPerkPoints = 6;
	requiredLevel = 10;
	requiredPerk = "functions_repairSpeed_2";
	subtitle = "Level 10 Required, 6 Perk Points";
	description = "Learn to repair vehicles without losing your repair kit";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_repairInfinite_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};
//Perks
class perk_lsd_1 {
	displayName = "LSD Gathering";
	requiredPerkPoints = 3;
	requiredLevel = 6;
	requiredPerk = "";
	subtitle = "Level 6 Required, 3 Perk Points";
	description = "Learn to gather mushrooms to make LSD<br/><br/><t color='#10FF45'>Estimated at 15% more profit than cocaine</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_lsd_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class perk_uranium_1 {
	displayName = "Uranium Gathering";
	requiredPerkPoints = 8;
	requiredLevel = 20;
	requiredPerk = "perk_lsd_1";
	subtitle = "Level 20 Required, 8 Perk Points";
	description = "Learn to gather uranium to process and sell for major profit<br/><br/><t color='#10FF45'>Estimated at 45% more profit than cocaine</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_uranium_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_air_1 {
	displayName = "Aviation Training";
	requiredPerkPoints = 2;
	requiredLevel = 3;
	requiredPerk = "";
	subtitle = "Level 3 Required, 2 Perk Points";
	description = "Gain access to the air shops to buy aircraft";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_air_1.sqf";
	limitToSides[] = {};
	color[] = {1,1,1,1};
};

class perk_gasrobbery_1 {
	displayName = "Armed Robbery";
	requiredPerkPoints = 6;
	requiredLevel = 8;
	requiredPerk = "";
	subtitle = "Level 8 Required, 6 Perk Points";
	description = "Learn to intimidate gas station clerks and banks more efficiently<br/><br/><t color='#10FF45'>+50% faster robbing</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_gasrobbery_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_home_1 {
	displayName = "Home Ownership";
	requiredPerkPoints = 5;
	requiredLevel = 10;
	requiredPerk = "";
	subtitle = "Level 10 Required, 5 Perk Points";
	description = "Gain the ability to own your own house";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_home_1.sqf";
	limitToSides[] = {"CIV"};
	color[] = {1,1,1,1};
};

class functions_relicReward {
	displayName = "Quest: Collecting Relics";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "";
	subtitle = "Collecting Hidden Relics";
	description = "Bring all the hidden relics around the map (4) to the archeologist <br/><br/><t color='#10FF45'>Reward: 1375 xp</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward.sqf";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};

class functions_relicReward2 {
	displayName = "Quest: Collecting Relics 2";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_relicReward";
	subtitle = "Gold Transport Relic";
	description = "Intercept the gold transport and gather the relic inside the main transport vehicle, bring it to the archeologist <br/><br/><t color='#10FF45'>Reward: 1900 xp</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward2.sqf";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};

class functions_relicReward3 {
	displayName = "Quest: Collecting Relics 3";
	requiredPerkPoints = 9999;
	requiredLevel = 1;
	requiredPerk = "functions_relicReward2";
	subtitle = "Federal Reserve Relic";
	description = "Rob the federal reserve, gather the relic from the reward and bring it to the archeologist <br/><br/><t color='#10FF45'>Reward: 2300 xp and the ability to loot oil rig cargo</t>";
	initScript = "maverick\talent-tree-modular\modules\maverick_perkset_1\functions\functions_relicReward3.sqf";
	limitToSides[] = {};
	color[] = {0,0.46,0.76,1};
};