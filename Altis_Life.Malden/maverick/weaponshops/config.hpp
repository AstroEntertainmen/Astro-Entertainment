/*--------------------------------------------------------------------------
    Author:        Maverick Applications
    Website:    https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

    cashVar = "life_cash";                                //--- Cash Variable
    cashSymbol = "$";                                     //--- Currency Symbol
    rotationSpeed = 2;                                     //--- Rotation speed for item in preview (1 - 10)
    saveFunction = "[] call SOCK_fnc_updateRequest";     //--- Function to save gear etc. once items are purchased

    class localization {
        //--- localization for hints etc.
        msgParamEmpty =                        "Shop Parameter is empty!";
        msgInVehicle =                        "You cannot be in a Vehicle!";
        msgShopExists =                        "Shop doesn't Exist!";
        msgCondition =                        "Not permitted to access this Shop!";
        msgCashOnHand =                        "Cash on Hand - %1%2";
        msgCartTotal =                        "Your Cart - %1%2";
        msgInfoTooltip =                    "--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
        msgInfoTooltip2 =                     "--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
        msgEmptyShop =                         "Nothing Found...";
        msgInfoText    =                        "<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
        msgCartFull    =                        "Cart is Full";
        msgCartEmpty =                        "Cart is Empty";
        msgNotEnoughCash =                    "Not enough Cash for this Transaction";
        msgOverrideAlert =                    "Use the override feature to override gear!";
        msgTransactionComplete =            "Purchase completed for %1%2";
        msgNotEnoughSpace =                     "You didn't have enough space for all the items. You however only paid for those you had space for!";
        msgClear =                            "Clear";
        msgSearch =                            "Search";

        //--- localization for dialogs
        #define dialogTabWeapon                "Weapon"
        #define dialogTabMagazines            "Magazines"
        #define dialogTabAttachments        "Attachments"
        #define dialogTabOther                "Other"
        #define dialogAddBtn                "Add"
        #define dialogOverrideTooltip        "Override Gear"
        #define dialogCompleteBtn            "Complete"
        #define dialogCloseBtn                 "Close"
    };

    class shops {
        class example_shop {
            title = "Example Shop"; //--- Title of Shop
            condition = "true";     //--- Condition to meet to access shop
            simple = 0;             //--- Type of GUI 0-Weapon View 1-No Weapon View
            maxCart = 20;             //--- Max Amount of Items in Shopping Cart

            weapons[] = {
                //--- item classname, price, condition, custom display name
                {"srifle_DMR_01_F", 500, "true", "Test"},
                {"srifle_EBR_F", 600, "true", "EBR"},
                {"launch_RPG32_F", 500, "true", ""},
                {"srifle_LRR_F", 600, "true", ""},
                {"hgun_Pistol_heavy_01_MRD_F", 1300, "true", ""}
            };

            magazines[] = {
                {"10Rnd_762x54_Mag", 10, "true", "Test Mag"},
                {"20Rnd_762x51_Mag", 20, "true", "EBR Mag"}
            };

            attachments[] = {
                {"optic_SOS", 50, "true", "Test Scope"},
                {"muzzle_snds_B", 1500, "true", ""}
            };
            
            items[] = {
                {"Binocular", 50, "true", ""},
                {"NVGoggles", 100, "true", ""}, //--- NV goggles won't be shown on preview
                {"U_O_GhillieSuit", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
            };
        };

        class rebel {
        title = "Rebel Weapon Shop";
        conditions = "side player == civilian || license_civ_rebel > 0";
        simple = 0;
        maxCart = 50;

        weapons[] = {
            { "arifle_TRG20_F", "", 25000, "license_civ_rebel > 0", "" },
            { "arifle_Katiba_F", "", 30000 "license_civ_rebel > 0", "" },
            { "srifle_DMR_01_F", "", 50000, "license_civ_rebel > 0", "" },
            { "arifle_SDAR_F", "", 20000, "license_civ_rebel > 0", "" },
            { "arifle_AK12_F", "", 22000, "license_civ_rebel > 0", "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, "license_civ_rebel > 0", "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, "license_civ_rebel > 0", "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, "license_civ_rebel > 0", "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, "license_civ_rebel > 0", "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, "license_civ_rebel > 0", "" } //Apex DLC
        };
        magazines[] = {
            { "30Rnd_556x45_Stanag", "", 300, "license_civ_rebel > 0", "" },
            { "30Rnd_762x39_Mag_F", "", 300, "license_civ_rebel > 0", "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, "license_civ_rebel > 0", "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, "license_civ_rebel > 0", "" },
            { "10Rnd_762x54_Mag", "", 500, "license_civ_rebel > 0", "" },
            { "20Rnd_556x45_UW_mag", "", 125, "license_civ_rebel > 0", "" },
            { "30Rnd_580x42_Mag_F", "", 125, "license_civ_rebel > 0", "" } //Apex DLC
        };
        attachments[] = {
            { "optic_ACO_grn", "", 3500, "license_civ_rebel > 0", "" },
            { "optic_Holosight", "", 3600, "license_civ_rebel > 0", "" },
            { "optic_Hamr", "", 7500, "license_civ_rebel > 0", "" },
            { "acc_flashlight", "", 1000, "license_civ_rebel > 0", "" }
        };
        items[] = {
                {"Binocular", 50, "license_civ_rebel > 0", ""},
                {"NVGoggles", 100, "license_civ_rebel > 0", ""}
            };
        };
    };
};

#include "gui\weapon_gui_master.cpp"
