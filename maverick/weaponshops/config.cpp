/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_firstHealth";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgEmptyShop = 						"Nothing Found...";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase completed for %1%2";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items. You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class gun {
			title = "Gun Shop"; //--- Title of Shop
			condition = "side player == civilian"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_Rook40_F", 5000, "license_civ_gun1", ""},
				{"hgun_Pistol_heavy_02_F", 7500, "license_civ_gun1", ""},
				{"hgun_ACPC2_F", 15000, "license_civ_gun1", ""},
				{"hgun_PDW2000_F", 20000, "license_civ_gun2", ""},
				{"SMG_05_F", 25000, "license_civ_gun2", ""},
				{"SMG_01_F", 30000, "license_civ_gun2", ""},
				{"arifle_TRG21_F", 45000, "license_civ_gun3", ""},
				{"arifle_Mk20_F", 45000, "license_civ_gun3", ""},
				{"arifle_SPAR_01_blk_F", 140000, "license_civ_gun3", ""}
			};

			magazines[] = {
				{"30Rnd_9x21_Mag", 100, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 100, "true", ""},
				{"6Rnd_45ACP_Cylinder", 100, "true", ""},
				{"9Rnd_45ACP_Mag", 100, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 100, "true", ""},
				{"30Rnd_556x45_Stanag", 100, "true", ""},
				{"30Rnd_556x45_Stanag", 100, "true", ""},
				{"30Rnd_556x45_Stanag", 100, "true", ""}
			};

			attachments[] = {
				{"optic_Arco", 2500, "true", ""},
				{"optic_Arco_blk_F", 2500, "true", ""},
				{"optic_ERCO_blk_F", 2500, "true", ""},
				{"optic_Holosight_blk_F", 2500, "true", ""},
				{"optic_Holosight_smg_blk_F", 2500, "true", ""},
				{"optic_MRCO", 2500, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				{"acc_flashlight", 2500, "true", ""},
				{"acc_flashlight_pistol", 2500, "true", ""},
				{"bipod_01_F_blk", 2500, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""}			
			
			};
		};

		class gang {
			title = "Gang Shop"; //--- Title of Shop
			condition = "side player == civilian"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_Rook40_F", 5000, "true", ""},
				{"hgun_Pistol_heavy_02_F", 7500, "true", ""},
				{"hgun_ACPC2_F", 12000, "true", ""},
				{"hgun_PDW2000_F", 18000, "true", ""},
				{"SMG_05_F", 18000, "true", ""},
				{"SMG_01_F", 20000, "true", ""},
				{"arifle_TRG21_F", 25000, "true", ""},
				{"arifle_Mk20_F", 25000, "true", ""},
				{"arifle_SPAR_01_blk_F", 60000, "true", ""},
				{"arifle_Katiba_F", 70000, "true", ""},
				{"arifle_AKM_F", 100000, "true", ""}
			};

			magazines[] = {
				{"20Rnd_556x45_UW_mag", 100, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 100, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 100, "true", ""},
				{"30Rnd_9x21_Mag", 100, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 100, "true", ""},
				{"6Rnd_45ACP_Cylinder", 100, "true", ""},
				{"9Rnd_45ACP_Mag", 100, "true", ""},
				{"30Rnd_65x39_caseless_green", 100, "true", ""},
				{"30Rnd_556x45_Stanag", 100, "true", ""},
				{"20Rnd_556x45_UW_mag", 100, "true", ""},
				{"30Rnd_580x42_Mag_F", 100, "true", ""},
				{"30Rnd_65x39_caseless_mag", 100, "true", ""},
				{"10Rnd_50BW_Mag_F", 50000, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 100, "true", ""},
				{"200Rnd_556x45_Box_F", 100, "true", ""},
				{"100Rnd_580x42_Mag_F", 100, "true", ""},
				{"30Rnd_762x39_Mag_F", 100, "true", ""},
				{"10Rnd_762x54_Mag", 100, "true", ""},
				{"20Rnd_762x51_Mag", 100, "true", ""},
				{"200Rnd_65x39_cased_Box", 100, "true", ""},
				{"100Rnd_65x39_caseless_mag", 100, "true", ""},
				{"10Rnd_93x64_DMR_05_Mag", 100, "true", ""},
				{"10Rnd_338_Mag", 100, "true", ""},
				{"150Rnd_762x54_Box", 100, "true", ""}
			};

			attachments[] = {
				{"optic_Arco", 2500, "true", ""},
				{"optic_Arco_blk_F", 2500, "true", ""},
				{"optic_ERCO_blk_F", 2500, "true", ""},
				{"optic_Holosight_blk_F", 2500, "true", ""},
				{"optic_Holosight_smg_blk_F", 2500, "true", ""},
				{"optic_MRCO", 2500, "true", ""},
				{"optic_DMS", 10000, "true", ""},
				{"acc_flashlight", 2500, "true", ""},
				{"acc_flashlight_pistol", 2500, "true", ""},
				{"bipod_01_F_blk", 2500, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""},		
				{"B_AssaultPack_khk", 7500, "true", ""},
				{"B_Carryall_oli", 2000, "true", ""}	
			
			};
		};

		class rebel {
			title = "Rebel Shop"; //--- Title of Shop
			condition = "side player == civilian || mav_ttm_var_rebel > 0"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_Rook40_F", 5000, "mav_ttm_var_rebel > 0", ""},
				{"hgun_Pistol_heavy_02_F", 7500, "mav_ttm_var_rebel > 0", ""},
				{"hgun_ACPC2_F", 15000, "mav_ttm_var_rebel > 0", ""},
				{"hgun_PDW2000_F", 20000, "mav_ttm_var_rebel > 0", ""},
				{"SMG_05_F", 25000, "mav_ttm_var_rebel > 0", ""},
				{"SMG_01_F", 30000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_TRG21_F", 45000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_Mk20_F", 45000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_SPAR_01_blk_F", 45000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_Mk20_F", 40000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_TRG21_F", 35000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_SDAR_F", 30000, "mav_ttm_var_rebel > 0", ""},
				{"arifle_MXC_khk_F", 55000, "mav_ttm_var_rebel >= 2", ""},
				{"arifle_MX_F", 65000, "mav_ttm_var_rebel >= 2", ""},
				{"arifle_CTAR_blk_F", 60000, "mav_ttm_var_rebel >= 2", ""},
				{"arifle_Katiba_F", 70000, "mav_ttm_var_rebel >= 2", ""},
				{"srifle_DMR_07_blk_F", 80000, "mav_ttm_var_rebel >= 2", ""},
				{"arifle_ARX_blk_F", 120000, "mav_ttm_var_rebel >= 3", ""},
				{"LMG_03_F", 150000, "mav_ttm_var_rebel >= 3", ""},
				{"arifle_AKM_F", 100000, "mav_ttm_var_rebel >= 3", ""},
				{"srifle_DMR_01_F", 150000, "mav_ttm_var_rebel >= 3", ""},
				{"arifle_MXM_F", 90000, "mav_ttm_var_rebel >= 4", ""},
				{"srifle_DMR_03_F", 200000, "mav_ttm_var_rebel >= 4", ""},
				{"srifle_DMR_06_olive_F", 170000, "mav_ttm_var_rebel >= 4", ""},
				{"arifle_SPAR_03_blk_F", 175000, "mav_ttm_var_rebel >= 4", ""},
				{"arifle_CTARS_blk_F", 150000, "mav_ttm_var_rebel >= 4", ""},
				{"arifle_AK12_F", 175000, "mav_ttm_var_rebel >= 4", ""},
				{"LMG_Mk200_F", 250000, "mav_ttm_var_rebel >= 4", ""},
				{"arifle_MX_SW_F", 190000, "mav_ttm_var_rebel >= 4", ""},
				{"srifle_EBR_F", 180000, "mav_ttm_var_rebel >= 5", ""},
				{"srifle_DMR_05_tan_F", 550000, "mav_ttm_var_rebel >= 5", ""},
				{"srifle_DMR_02_sniper_F", 500000, "mav_ttm_var_rebel >= 5", ""},
				{"LMG_Zafir_F", 700000, "mav_ttm_var_rebel >= 5", ""}
			};

			magazines[] = {
				{"20Rnd_556x45_UW_mag", 100, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 100, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 100, "true", ""},
				{"30Rnd_9x21_Mag", 100, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 100, "true", ""},
				{"6Rnd_45ACP_Cylinder", 100, "true", ""},
				{"9Rnd_45ACP_Mag", 100, "true", ""},
				{"30Rnd_556x45_Stanag", 100, "true", ""},
				{"30Rnd_65x39_caseless_green", 100, "true", ""},
				{"20Rnd_556x45_UW_mag", 100, "true", ""},
				{"30Rnd_580x42_Mag_F", 100, "true", ""},
				{"30Rnd_65x39_caseless_mag", 100, "true", ""},
				{"10Rnd_50BW_Mag_F", 50000, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 100, "true", ""},
				{"200Rnd_556x45_Box_F", 100, "true", ""},
				{"100Rnd_580x42_Mag_F", 100, "true", ""},
				{"30Rnd_762x39_Mag_F", 100, "true", ""},
				{"10Rnd_762x54_Mag", 100, "true", ""},
				{"20Rnd_762x51_Mag", 100, "true", ""},
				{"200Rnd_65x39_cased_Box", 100, "true", ""},
				{"100Rnd_65x39_caseless_mag", 100, "true", ""},
				{"10Rnd_93x64_DMR_05_Mag", 100, "true", ""},
				{"10Rnd_338_Mag", 100, "true", ""},
				{"150Rnd_762x54_Box", 100, "true", ""}
			};

			attachments[] = {
				{"optic_ACO_grn_smg", 1500, "true", ""},
				{"optic_Arco", 1500, "true", ""},
				{"optic_Arco_blk_F", 1500, "true", ""},
				{"optic_ERCO_blk_F", 1500, "true", ""},
				{"optic_Holosight_blk_F", 1500, "true", ""},
				{"optic_Holosight_smg_blk_F", 1500, "true", ""},
				{"optic_MRCO", 1500, "true", ""},
				{"optic_Hamr", 1500, "true", ""},
				{"optic_DMS", 3000, "true", ""},
				{"acc_flashlight", 750, "true", ""},
				{"bipod_01_F_blk", 2000, "true", ""},
				{"optic_AMS_snd", 70000, "mav_ttm_var_rebel >= 5", ""},
				{"optic_LRPS_tna_F", 80000, "mav_ttm_var_rebel >= 5", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""},
				{"ItemGPS", 50, "true", ""}			
			
			};
		};

		class black {
			title = "Black Market Shop"; //--- Title of Shop
			condition = "side player == civilian"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"MMG_01_tan_F", 1000000, "mav_ttm_var_rebel >= 5", ""},
				{"MMG_02_sand_F", 1200000, "mav_ttm_var_rebel >= 5", ""},
				{"launch_RPG7_F", 650000, "mav_ttm_var_rebel >= 5", ""}
			};

			magazines[] = {
				{"150Rnd_93x64_Mag", 25000, "true", ""},
				{"130Rnd_338_Mag", 25000, "true", ""},
				{"RPG7_F", 250000, "true", ""}
			};

			attachments[] = {
				{"optic_ACO_grn_smg", 1500, "true", ""},
				{"optic_Arco", 1500, "true", ""},
				{"optic_Arco_blk_F", 1500, "true", ""},
				{"optic_ERCO_blk_F", 1500, "true", ""},
				{"optic_Holosight_blk_F", 1500, "true", ""},
				{"optic_Holosight_smg_blk_F", 1500, "true", ""},
				{"optic_MRCO", 1500, "true", ""},
				{"optic_Hamr", 1500, "true", ""},
				{"optic_DMS", 3000, "true", ""},
				{"acc_flashlight", 750, "true", ""},
				{"bipod_01_F_blk", 2000, "true", ""},
				{"optic_AMS_snd", 70000, "mav_ttm_var_rebel >= 5", ""},
				{"muzzle_snds_H", 1000, "true", ""},
				{"muzzle_snds_L", 1000, "true", ""},
				{"muzzle_snds_M", 1000, "true", ""},
				{"muzzle_snds_B", 1000, "true", ""},
				{"muzzle_snds_H_MG", 1000, "true", ""},
				{"muzzle_snds_338_sand", 1000, "true", ""},
				{"muzzle_snds_58_blk_F", 1000, "true", ""},
				{"muzzle_snds_65_TI_blk_F", 1000, "true", ""},
				{"muzzle_snds_93mmg_tan", 1000, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""},
				{"ItemGPS", 50, "true", ""}			
			
			};
		};

///////////////////////////////////////////////////
//                    Cop Shops
///////////////////////////////////////////////////

		class cop_basic {
			title = "Malden Cop Shop"; //--- Title of Shop
			condition = "side player == west"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_Pistol_heavy_01_F", 3000, "call life_coplevel >= 1", "$STR_W_items_StunPistol"},
				{"SMG_02_F", 3000, "call life_coplevel >= 1", "Sting Tazer"},
				{"arifle_SDAR_F", 3000, "call life_coplevel >= 1", ""},
				{"arifle_SPAR_01_blk_F", 3000, "call life_coplevel >= 2", ""},
				{"arifle_MXC_Black_F", 3000, "call life_coplevel >= 2", ""},
				{"arifle_MX_Black_F", 3000, "call life_coplevel >= 3", ""},
				{"arifle_CTAR_blk_F", 3000, "call life_coplevel >= 3", ""},
				{"arifle_MXM_Black_F", 3000, "call life_coplevel >= 4", ""},
				{"SMG_01_F", 3000, "call life_coplevel >= 4", ""},
				{"arifle_MX_SW_Black_F", 3000, "call life_coplevel >= 8", ""},
				{"srifle_DMR_07_blk_F", 3000, "call life_coplevel >= 4", ""},
				{"arifle_SPAR_03_blk_F", 3000, "call life_coplevel >= 5", ""},
				{"arifle_AK12_F", 3000, "call life_coplevel >= 5", ""},
				{"srifle_DMR_02_F", 3000, "call life_coplevel >= 6", ""},
				{"srifle_DMR_03_F", 3000, "call life_coplevel >= 6", ""}
			};

			magazines[] = {
				{"11Rnd_45ACP_Mag", 20, "true", "Rubber Bullets"},
				{"30Rnd_65x39_caseless_mag_Tracer", 20, "true", "Rubber Bullets"},
				{"30Rnd_9x21_Mag_SMG_02", 20, "true", "Rubber Bullets"},
				{"20Rnd_556x45_UW_mag", 20, "true", ""},
				{"30Rnd_556x45_Stanag", 20, "true", ""},
				{"30Rnd_580x42_Mag_F", 20, "true", ""},
				{"30Rnd_65x39_caseless_mag", 20, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 20, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01", 20, "true", ""},
				{"100Rnd_65x39_caseless_mag", 20, "true", ""},
				{"20Rnd_762x51_Mag", 20, "true", ""},
				{"10Rnd_338_Mag", 20, "true", ""},
				{"30Rnd_762x39_Mag_F", 20, "true", ""}
			};

			attachments[] = {
				{"muzzle_snds_acp", 750, "true", ""},
				{"optic_MRD", 750, "true", ""},
				{"acc_flashlight", 750, "true", ""},
				{"acc_flashlight_pistol", 750, "true", ""},
				{"optic_ACO_grn_smg", 750, "true", ""},
				{"optic_Arco", 750, "true", ""},
				{"optic_Arco_blk_F", 1500750, "true", ""},
				{"optic_ERCO_blk_F", 750, "true", ""},
				{"optic_AMS", 750, "call life_coplevel >= 8", ""},
				{"optic_Holosight_blk_F", 750, "true", ""},
				{"optic_Holosight_smg_blk_F", 750, "true", ""},
				{"optic_MRCO", 750, "true", ""},
				{"optic_Hamr", 750, "true", ""},
				{"optic_DMS", 750, "true", ""},
				{"bipod_01_F_blk", 750, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""},
				{"ItemGPS", 50, "true", ""},
				{"SmokeShellGreen", 50, "call life_coplevel >= 5", "Tear Gas"}			
			
			};
		};

		class cop_swat {
			title = "Malden Marshal Shop"; //--- Title of Shop
			condition = "license_cop_swat"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"arifle_SPAR_01_blk_F", 500, "true", ""},
				{"arifle_SPAR_01_khk_F", 500, "true", ""},
				{"arifle_SPAR_01_snd_F", 500, "true", ""},
				{"arifle_SPAR_01_GL_snd_F", 500, "true", ""},
				{"arifle_SPAR_01_GL_khk_F", 500, "true", ""},
				{"arifle_SPAR_01_GL_blk_F", 500, "true", ""},
				{"arifle_SPAR_02_blk_F", 500, "true", ""},
				{"arifle_SPAR_02_khk_F", 500, "true", ""},
				{"arifle_SPAR_02_snd_F", 500, "true", ""},
				{"arifle_SPAR_03_blk_F", 500, "true", ""},
				{"arifle_SPAR_03_khk_F", 500, "true", ""},
				{"arifle_SPAR_03_snd_F", 500, "true", ""},
				{"arifle_CTAR_blk_F", 500, "true", ""},
				{"arifle_CTAR_hex_F", 500, "true", ""},
				{"arifle_CTAR_ghex_F", 500, "true", ""},
				{"arifle_AKM_F", 500, "true", ""},
				{"arifle_AKS_F", 500, "true", ""},
				{"arifle_AK12_F", 500, "true", ""},
				{"arifle_AK12_GL_F", 500, "true", ""},
				{"arifle_MXC_F", 500, "true", ""},
				{"arifle_MX_Black_F", 500, "true", ""},
				{"arifle_MXC_Black_F", 500, "true", ""},
				{"arifle_MX_SW_Black_F", 500, "true", ""},
				{"arifle_MXM_Black_F", 500, "true", ""},
				{"srifle_EBR_F", 500, "true", ""},
				{"arifle_ARX_blk_F", 500, "true", ""},
				{"arifle_ARX_ghex_F", 500, "true", ""},
				{"arifle_ARX_hex_F", 500, "true", ""},
				{"srifle_DMR_07_blk_F", 500, "true", ""},
				{"srifle_DMR_07_ghex_F", 500, "true", ""},
				{"srifle_DMR_07_hex_F", 500, "true", ""},
				{"LMG_03_F", 500, "true", ""},
				{"srifle_DMR_02_F", 500, "true", ""},
				{"srifle_DMR_02_camo_F", 500, "true", ""},
				{"srifle_DMR_02_sniper_F", 500, "true", ""},
				{"srifle_DMR_03_F", 500, "true", ""},
				{"srifle_DMR_03_khaki_F", 500, "true", ""},
				{"srifle_DMR_03_tan_F", 500, "", "true"},
				{"srifle_DMR_03_multicam_F", 500, "true", ""},
				{"srifle_DMR_03_woodland_F", 500, "true", ""},
				{"srifle_DMR_04_F", 500, "true", ""},
				{"srifle_DMR_04_Tan_F", 500, "true", ""},
				{"srifle_DMR_05_blk_F", 500, "true", ""},
				{"srifle_DMR_05_hex_F", 500, "true", ""},
				{"srifle_DMR_05_tan_f", 500, "true", ""},
				{"srifle_DMR_06_camo_F", 500, "true", ""},
				{"srifle_DMR_06_olive_F", 500, "true", ""},
				{"LMG_Mk200_F", 500, "true", ""},
				{"LMG_Zafir_F", 500, "true", ""},
				{"MMG_01_hex_F", 500, "true", ""},
				{"MMG_01_tan_F", 500, "true", ""},
				{"MMG_02_camo_F", 500, "true", ""},
				{"MMG_02_black_F", 500, "true", ""},
				{"MMG_02_sand_F", 500, "true", ""},
				{"srifle_LRR_F", 500, "true", ""},
				{"srifle_LRR_camo_F", 500, "true", ""},
				{"launch_MRAWS_sand_F", 500, "true", ""}
			};

			magazines[] = {
				{"30Rnd_9x21_Mag", 20, "true", ""},
				{"6Rnd_45ACP_Cylinder", 20, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01_tracer_green", 20, "true", ""},
				{"30Rnd_556x45_Stanag", 20, "true", ""},
				{"100Rnd_580x42_Mag_F", 20, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 20, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 20, "true", ""},
				{"10Rnd_762x54_Mag", 20, "true", ""},
				{"200Rnd_556x45_Box_F", 20, "true", ""},
				{"200Rnd_556x45_Box_Red_F", 20, "true", ""},
				{"200Rnd_556x45_Box_Tracer_F", 20, "true", ""},
				{"200Rnd_556x45_Box_Tracer_Red_F", 20, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 20, "true", ""},
				{"30Rnd_545x39_Mag_F", 20, "true", ""},
				{"30Rnd_580x42_Mag_F", 20, "true", ""},
				{"30Rnd_65x39_caseless_green", 20, "true", ""},
				{"30Rnd_65x39_caseless_mag", 20, "true", ""},
				{"30Rnd_762x39_Mag_F", 20, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 20, "true", ""},
				{"30Rnd_65x39_caseless_mag_Tracer", 20, "true", ""},
				{"200Rnd_65x39_cased_Box", 20, "true", ""},
				{"20Rnd_762x51_Mag", 20, "true", ""},
				{"150Rnd_762x54_Box", 20, "true", ""},
				{"130Rnd_338_Mag", 20, "true", ""},
				{"10Rnd_93x64_DMR_05_Mag", 20, "true", ""},
				{"150Rnd_93x64_Mag", 20, "true", ""},
				{"7Rnd_408_Mag", 20, "true", ""},
				{"10Rnd_127x54_Mag", 20, "true", ""},
				{"5Rnd_127x108_Mag", 20, "true", ""},
				{"5Rnd_127x108_APDS_Mag", 20, "true", ""},
				{"10Rnd_50BW_Mag_F", 20, "true", ""},
				{"11Rnd_45ACP_Mag", 20, "true", ""},
				{"MRAWS_HE_F", 20, "true", ""},
				{"MRAWS_HEAT_F", 20, "true", ""}
			};

			attachments[] = {
				{"optic_Arco", 25, "true", ""},
				{"optic_Nightstalker", 25, "true", ""},
				{"optic_Hamr", 25, "true", ""},
				{"optic_Aco", 25, "true", ""},
				{"optic_ACO_grn", 25, "true", ""},
				{"optic_Aco_smg", 25, "true", ""},
				{"optic_ACO_grn_smg", 25, "true", ""},
				{"optic_Holosight", 25, "true", ""},
				{"optic_Holosight_blk_F", 25, "true", ""},
				{"optic_Holosight_smg", 25, "true", ""},
				{"optic_SOS", 25, "true", ""},
				{"acc_flashlight", 25, "true", ""},
				{"acc_pointer_IR", 25, "true", ""},
				{"optic_MRCO", 25, "true", ""},
				{"muzzle_snds_acp", 25, "true", ""},
				{"optic_DMS", 25, "true", ""},
				{"optic_Yorris", 25, "true", ""},
				{"optic_MRD", 25, "true", ""},
				{"optic_LRPS_ghex_F", 25, "true", ""},
				{"optic_LRPS_tna_F", 25, "true", ""},
				{"optic_SOS_khk_F", 25, "true", ""},
				{"muzzle_snds_H", 25, "true", ""},
				{"muzzle_snds_B", 25, "true", ""},
				{"muzzle_snds_338_black", 25, "true", ""},
				{"muzzle_snds_338_green", 25, "true", ""},
				{"muzzle_snds_338_sand", 25, "true", ""},
				{"muzzle_snds_93mmg", 25, "true", ""},
				{"muzzle_snds_93mmg_tan", 25, "true", ""},
				{"muzzle_snds_65_TI_blk_F", 25, "true", ""},
				{"muzzle_snds_58_wdm_F", 25, "true", ""},
				{"muzzle_snds_B_khk_F", 25, "true", ""},
				{"muzzle_snds_B_snd_F", 25, "true", ""},
				{"muzzle_snds_H_MG_khk_F", 25, "true", ""},
				{"muzzle_snds_H_MG_blk_F", 25, "true", ""},
				{"muzzle_snds_65_TI_ghex_F", 25, "true", ""},
				{"muzzle_snds_65_TI_hex_F", 25, "true", ""},
				{"optic_AMS", 25, "true", ""},
				{"optic_KHS_blk", 25, "true", ""},
				{"optic_KHS_hex", 25, "true", ""},
				{"optic_KHS_old", 25, "true", ""},
				{"optic_KHS_tan", 25, "true", ""},
				{"bipod_01_F_snd", 25, "true", ""},
				{"bipod_01_F_blk", 25, "true", ""},
				{"bipod_01_F_mtp", 25, "true", ""},
				{"bipod_02_F_blk", 25, "true", ""},
				{"bipod_02_F_tan", 25, "true", ""},
				{"bipod_02_F_hex", 25, "true", ""},
				{"bipod_01_F_khk", 25, "true", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""},
				{"Rangefinder", 50, "true", ""},
				{"ItemGPS", 50, "true", ""},
				{"ItemMap", 50, "true", ""},
				{"ItemCompass", 50, "true", ""},
				{"ItemWatch", 50, "true", ""},
				{"FirstAidKit", 50, "true", ""},
				{"SmokeShellGreen", 50, "call life_coplevel >= 5", "Tear Gas"}			
			
			};
		};

		class cop_ucu {
			title = "Malden UCU Shop"; //--- Title of Shop
			condition = "call life_coplevel >= 1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 50; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"hgun_PDW2000_F", 500, "true", ""},
				{"SMG_05_F", 500, "true", ""},
				{"SMG_01_F", 500, "true", ""},
				{"arifle_TRG21_F", 500, "true", ""},
				{"arifle_Mk20_F", 500, "true", ""},
				{"arifle_SPAR_01_blk_F", 500, "true", ""},
				{"arifle_MXC_khk_F", 500, "true", ""},
				{"arifle_MX_F", 500, "true", ""},
				{"srifle_DMR_07_blk_F", 500, "true", ""},
				{"arifle_Katiba_F", 500, "true", ""},
				{"arifle_AKM_F", 500, "true", ""},
				{"srifle_DMR_01_F", 500, "true", ""}
			};

			magazines[] = {
				{"30Rnd_9x21_Mag", 20, "true", ""},
				{"6Rnd_45ACP_Cylinder", 20, "true", ""},
				{"30Rnd_45ACP_Mag_SMG_01_tracer_green", 20, "true", ""},
				{"30Rnd_556x45_Stanag", 20, "true", ""},
				{"100Rnd_580x42_Mag_F", 20, "true", ""},
				{"100Rnd_580x42_Mag_Tracer_F", 20, "true", ""},
				{"150Rnd_556x45_Drum_Mag_F", 20, "true", ""},
				{"200Rnd_556x45_Box_F", 20, "true", ""},
				{"200Rnd_556x45_Box_Red_F", 20, "true", ""},
				{"200Rnd_556x45_Box_Tracer_F", 20, "true", ""},
				{"200Rnd_556x45_Box_Tracer_Red_F", 20, "true", ""},
				{"20Rnd_650x39_Cased_Mag_F", 20, "true", ""},
				{"30Rnd_545x39_Mag_F", 20, "true", ""},
				{"30Rnd_580x42_Mag_F", 20, "true", ""},
				{"30Rnd_65x39_caseless_green", 20, "true", ""},
				{"30Rnd_65x39_caseless_mag", 20, "true", ""},
				{"30Rnd_762x39_Mag_F", 20, "true", ""},
				{"30Rnd_9x21_Mag_SMG_02", 20, "true", ""},
				{"10Rnd_762x54_Mag", 20, "true", ""},
				{"30Rnd_65x39_caseless_mag_Tracer", 20, "true", ""},
				{"200Rnd_65x39_cased_Box", 20, "true", ""},
				{"20Rnd_762x51_Mag", 20, "true", ""},
				{"150Rnd_762x54_Box", 20, "true", ""},
				{"130Rnd_338_Mag", 20, "true", ""},
				{"10Rnd_93x64_DMR_05_Mag", 20, "true", ""},
				{"150Rnd_93x64_Mag", 20, "true", ""},
				{"7Rnd_408_Mag", 20, "true", ""},
				{"10Rnd_127x54_Mag", 20, "true", ""},
				{"5Rnd_127x108_Mag", 20, "true", ""},
				{"5Rnd_127x108_APDS_Mag", 20, "true", ""},
				{"10Rnd_50BW_Mag_F", 20, "true", ""},
				{"11Rnd_45ACP_Mag", 20, "true", ""},
				{"MRAWS_HE_F", 20, "true", ""},
				{"MRAWS_HEAT_F", 20, "true", ""}
			};

			attachments[] = {
				{"optic_ACO_grn_smg", 750, "true", ""},
				{"optic_Arco", 750, "true", ""},
				{"optic_Arco_blk_F", 750, "true", ""},
				{"optic_ERCO_blk_F", 750, "true", ""},
				{"optic_Holosight_blk_F", 750, "true", ""},
				{"optic_Holosight_smg_blk_F", 750, "true", ""},
				{"optic_MRCO", 750, "true", ""},
				{"optic_Hamr", 750, "true", ""},
				{"optic_DMS", 750, "true", ""},
				{"acc_flashlight", 750, "true", ""},
				{"bipod_01_F_blk", 750, "true", ""},
				{"optic_AMS_snd", 750, "", ""},
				{"optic_LRPS_tna_F", 750, "", ""}
			};
			
			items[] = {
				{"Binocular", 50, "true", ""},
				{"NVGoggles_OPFOR", 100, "true", ""},
				{"Rangefinder", 50, "true", ""},
				{"ItemGPS", 50, "true", ""},
				{"SmokeShellGreen", 50, "call life_coplevel >= 5", "Tear Gas"}			
			
			};
		};
	};
};

#include "gui\weapon_gui_master.cpp"
