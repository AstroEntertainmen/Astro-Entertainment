/*
	Author: Maverick Applications
	Convoy sidemission for Altis Life servers
*/

class Maverick_ConvoySidemission
{
	class Config
	{
		ConfigPool[] 							= {"goldenbarz3Transport","WeaponTransport"};
		ForceConfigAtIndex 						= 1;
		SleepTime								= 5000;
		MakePlayersHostileFor					= 300;
		TimeoutBetweenMarkers					= 300;
		SidesNotAttackable[]					= {"west","independent"};
		AIDifficulty[] = {
												{"aimingAccuracy", 0.6},
												{"aimingShake", 1},
												{"aimingSpeed", 1},
												{"endurance", 1},
												{"spotDistance", 1},
												{"spotTime", 1},
												{"courage", 1},
												{"reloadSpeed", 1},
												{"commanding", 1},
												{"general", 1}
		};
	};
	
	class ConvoyConfigurationsPool
	{	

		/*********************** EXAMPLE TRANSPORT FOR REAL ITEMS ***********************/
		
		class WeaponTransport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Weapon Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"U_B_GEN_Soldier_F", // Uniform
												"V_TacVest_gen_F", // Vest
												"B_AssaultPack_blk", // Backpack
												{"arifle_SPAR_01_khk_F", "30Rnd_556x45_Stanag", 6}, // Primary weapon, ammo and how many magazines
												{"", "", 5}, // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Weapon Transport";
				startAnnouncementDescription	= "The local army is currently transporting larger amounts of rare high caliber weapons through Malden with ground vehicles.";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Weapon Transporter disabled";
				stoppedAnnouncementDescription	= "The Weapon transporter has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Weapon Transport ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"B_G_Offroad_01_armed_F","B_T_MRAP_01_F","O_T_Truck_03_ammo_ghex_F","B_G_Offroad_01_armed_F","B_G_Offroad_01_AT_F"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_wconvoy_spawn1","mav_wconvoy_spawn2","mav_wconvoy_spawn3","mav_wconvoy_spawn4","mav_wconvoy_spawn5"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 1;
				maxSpeed						= 60;
				removeVehiclesAfterSeconds		= 900;
				additionalUnitsAmount			= 12;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"mav_wconvoy_waypoint_1","mav_wconvoy_waypoint_2","mav_wconvoy_waypoint_3","mav_wconvoy_waypoint_4","mav_wconvoy_waypoint_5","mav_wconvoy_waypoint_6",
				"mav_wconvoy_waypoint_7","mav_wconvoy_waypoint_8","mav_wconvoy_waypoint_9","mav_wconvoy_waypoint_10","mav_wconvoy_waypoint_11","mav_wconvoy_waypoint_12","mav_wconvoy_waypoint_13","mav_wconvoy_waypoint_14",
				"mav_wconvoy_waypoint_15","mav_wconvoy_waypoint_16"};
			};

			class Loot
			{
				type 							= "real";
				container						= "B_CargoNet_01_ammo_F";
				data[] = {						
												{"optic_AMS", 1, "ITEM"},

												{"srifle_EBR_F", 1, "WEAPON"},											
												{"20Rnd_762x51_Mag", 3, "MAGAZINE"},

												{"arifle_MXM_F", 1, "WEAPON"},

												{"arifle_MX_SW_F", 1, "WEAPON"},

												{"arifle_SPAR_02_blk_F", 1, "WEAPON"},
												
												{"RPG7_F", 1, "MAGAZINE"}
				};
			};
		};
		/*********************** EXAMPLE TRANSPORT FOR VIRTUAL ITEMS ***********************/

		class goldenbarz3Transport
		{
			class MapConfiguration
			{
				showMapMarker					= 1;
				text							= "Gold Transport";
			};

			class AIUnits
			{
				gear[] = {
												"H_MilCap_gen_F", // Headgear
												"", // Glasses
												"U_B_GEN_Soldier_F", // Uniform
												"V_TacVest_gen_F", // Vest
												"B_AssaultPack_blk", // Backpack
												{"arifle_SPAR_01_khk_F", "30Rnd_556x45_Stanag", 6}, // Primary weapon, ammo and how many magazines
												{"", "", 5}, // Secondary weapon, ammo and how many magazines
				};
			};

			class Messages
			{
				// Enable messages?
				enabled							= 1;

				// Mission started announcement
				startAnnouncementHeader			= "Malden Bank Transport";
				startAnnouncementDescription	= "The Federal Reserve's guarded transport is currently moving gold and other valuables to the Malden bank!";

				// Mission objective completed
				stoppedAnnouncementHeader		= "Malden Bank Transport Disabled";
				stoppedAnnouncementDescription	= "The Malden Bank Transport has been disabled.";

				// Mission completed announcement
				endAnnouncementHeader			= "Malden Bank Transport has ended";
				endAnnouncementDescription  	= "The mission has ended.";
			};

			class Vehicles
			{
				// Vehicle configuration
				vehiclesInOrder[]				= {"O_T_LSV_02_armed_F","O_T_Truck_03_ammo_ghex_F","I_MRAP_03_F"};
				vehiclesSpawnMarkersInOrder[]	= {"mav_convoy_spawn1","mav_convoy_spawn2","mav_convoy_spawn3"};
				vehiclesInheritDirection		= 1;
				mainVehicleAtIndex				= 1;
				maxSpeed						= 60;
				removeVehiclesAfterSeconds		= 900;
				additionalUnitsAmount			= 10;
			};

			class Route
			{
				// Route configuration
				markers[] 						= {"mav_convoy_waypoint_1","mav_convoy_waypoint_2","mav_convoy_waypoint_3","mav_convoy_waypoint_4","mav_convoy_waypoint_5","mav_convoy_waypoint_6",
				"mav_convoy_waypoint_7","mav_convoy_waypoint_8","mav_convoy_waypoint_9","mav_convoy_waypoint_10","mav_convoy_waypoint_11","mav_convoy_waypoint_12","mav_convoy_waypoint_13","mav_convoy_waypoint_14",
				"mav_convoy_waypoint_15","mav_convoy_waypoint_16"};
			};

			class Loot
			{
				type 							= "virtual";
				container						= "Land_CargoBox_V1_F";
				data[] = {
												{"goldenbarz3", 3},
												{"relicTransport", 2},
												{"morphine", 5},
												{"barrel", 22},
												{"butt", 19},
												{"codeCracker", 1},
												{"BPowder", 22},
												{"BTip", 19},
												{"BShell", 11},
												{"BPrimer", 17},
												{"sight", 21},
												{"trigger", 23},
												{"C4", 6},
												{"storagebig", 2}
				};
			};
		};
	};
};