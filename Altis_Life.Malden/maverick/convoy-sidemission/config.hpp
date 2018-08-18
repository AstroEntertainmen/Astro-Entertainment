/*
    Author: Maverick Applications
    Convoy sidemission for Altis Life servers
*/

class Maverick_ConvoySidemission
{
    class Config
    {
        ConfigPool[]                             = {"GoldBarTransport"};
        ForceConfigAtIndex                         = 1;
        SleepTime                                = 4500; 
        MakePlayersHostileFor                    = 300;
        TimeoutBetweenMarkers                    = 600;
        SidesNotAttackable[]                    = {"west","independent"};
        AIDifficulty[] = {
                                                {"aimingAccuracy", .5},
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
        /*********************** EXAMPLE TRANSPORT FOR VIRTUAL ITEMS ***********************/
        class GoldBarTransport
        {
            class MapConfiguration
            {
                showMapMarker                    = 1;
                text                            = "Gold Transport";
            };

            class AIUnits
            {
                gear[] = {
                                                "H_MilCap_gen_F", // Headgear
                                                "", // Glasses
                                                "U_B_GEN_Soldier_F", // Uniform
                                                "V_TacVest_gen_F", // Vest
                                                "", // Backpack
                                                {"arifle_SPAR_01_blk_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
                                                {"", "", 5} // Secondary weapon, ammo and how many magazines
                };
            };

            class Messages
            {
                // Enable messages?
                enabled                            = 1;

                // Mission started announcement
                startAnnouncementHeader            = "Gold Transport";
                startAnnouncementDescription    = "The Federal Reserve's Guarded Transporter is Currently Moving A Large Amounts of Gold From the Bank to the Federal Reserve.";

                // Mission objective completed
                stoppedAnnouncementHeader        = "Gold Transporter disabled";
                stoppedAnnouncementDescription    = "The Gold Transporter Has Been Disabled.";

                // Mission completed announcement
                endAnnouncementHeader            = "Gold Transport ended";
                endAnnouncementDescription      = "The Gold Transport Has Been Recovered By the Police.";
            };

            class Vehicles
            {
                // Vehicle configuration
                vehiclesInOrder[]                = {"O_T_LSV_02_armed_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
                vehiclesSpawnMarkersInOrder[]    = {"mav_convoy_spawn1","mav_convoy_spawn2","mav_convoy_spawn3"};
                vehiclesInheritDirection        = 1;
                mainVehicleAtIndex                = 1;
                maxSpeed                        = 50;
                removeVehiclesAfterSeconds        = 1500;
                additionalUnitsAmount            = 10;
            };

            class Route
            {
                // Route configuration
                markers[]                         = {"mav_convoy_waypoint_1","mav_convoy_waypoint_2","mav_convoy_waypoint_3","mav_convoy_waypoint_4","mav_convoy_waypoint_5","mav_convoy_waypoint_6",
                "mav_convoy_waypoint_7","mav_convoy_waypoint_8","mav_convoy_waypoint_9","mav_convoy_waypoint_10","mav_convoy_waypoint_11","mav_convoy_waypoint_12","mav_convoy_waypoint_13","mav_convoy_waypoint_14",
                "mav_convoy_waypoint_15","mav_convoy_waypoint_16","mav_convoy_waypoint_17","mav_convoy_waypoint_18","mav_convoy_waypoint_19","mav_convoy_waypoint_20","mav_convoy_waypoint_21","mav_convoy_waypoint_22",
                "mav_convoy_waypoint_23","mav_convoy_waypoint_24","mav_convoy_waypoint_25","mav_convoy_waypoint_26","mav_convoy_waypoint_27","mav_convoy_waypoint_28","mav_convoy_waypoint_29"};
            };

            class Loot
            {
                type                             = "virtual";
                container                        = "Land_CargoBox_V1_F";
                data[] = {
                                                {"goldbar", 10}
                };
            };
        };


        /*********************** EXAMPLE TRANSPORT FOR REAL ITEMS ***********************/
        class WeaponTransport
        {
          class MapConfiguration
          {
              showMapMarker                    = 1;
              text                            = "Gold Transport";
          };

          class AIUnits
          {
              gear[] = {
                                              "H_MilCap_gen_F", // Headgear
                                              "", // Glasses
                                              "U_B_GEN_Soldier_F", // Uniform
                                              "V_TacVest_gen_F", // Vest
                                              "", // Backpack
                                              {"arifle_SPAR_01_blk_F", "30Rnd_556x45_Stanag", 5}, // Primary weapon, ammo and how many magazines
                                              {"", "", 5} // Secondary weapon, ammo and how many magazines
              };
          };

          class Messages
          {
              // Enable messages?
              enabled                            = 1;

              // Mission started announcement
              startAnnouncementHeader            = "Gold Transport";
              startAnnouncementDescription    = "The Federal Reserve's Guarded Transporter is Currently Moving A Large Amounts of Gold From the Bank to the Federal Reserve.";

              // Mission objective completed
              stoppedAnnouncementHeader        = "Gold Transporter disabled";
              stoppedAnnouncementDescription    = "The Gold Transporter Has Been Disabled.";

              // Mission completed announcement
              endAnnouncementHeader            = "Gold Transport ended";
              endAnnouncementDescription      = "The Gold Transport Has Been Recovered By the Police.";
          };

          class Vehicles
          {
              // Vehicle configuration
              vehiclesInOrder[]                = {"O_T_LSV_02_armed_F","O_T_Truck_03_ammo_ghex_F","O_T_LSV_02_unarmed_F"};
              vehiclesSpawnMarkersInOrder[]    = {"mav_convoy_spawn1","mav_convoy_spawn2","mav_convoy_spawn3"};
              vehiclesInheritDirection        = 1;
              mainVehicleAtIndex                = 1;
              maxSpeed                        = 50;
              removeVehiclesAfterSeconds        = 1500;
              additionalUnitsAmount            = 10;
          };

          class Route
          {
              // Route configuration
              markers[]                         = {"mav_wconvoy_waypoint_1","mav_wconvoy_waypoint_2","mav_wconvoy_waypoint_3","mav_wconvoy_waypoint_4","mav_wconvoy_waypoint_5","mav_wconvoy_waypoint_6",
              "mav_wconvoy_waypoint_7","mav_wconvoy_waypoint_8","mav_wconvoy_waypoint_9","mav_wconvoy_waypoint_10","mav_wconvoy_waypoint_11","mav_wconvoy_waypoint_12","mav_wconvoy_waypoint_13","mav_wconvoy_waypoint_14",
              "mav_wconvoy_waypoint_15","mav_wconvoy_waypoint_16","mav_wconvoy_waypoint_17","mav_wconvoy_waypoint_18","mav_wconvoy_waypoint_19","mav_wconvoy_waypoint_20","mav_wconvoy_waypoint_21","mav_wconvoy_waypoint_22",
              "mav_wconvoy_waypoint_23","mav_wconvoy_waypoint_24","mav_wconvoy_waypoint_25","mav_wconvoy_waypoint_26","mav_wconvoy_waypoint_27","mav_wconvoy_waypoint_28","mav_wconvoy_waypoint_29"};
          };

          class Loot
          {
              type                             = "virtual";
              container                        = "Land_CargoBox_V1_F";
              data[] = {
                                              {"goldbar", 10}
              };
          };
        };
    };
};
