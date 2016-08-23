//TCU AQUA Aqua Simul

class TCU_AQUA_MRM_BLU: C_man_sport_1_F
{
	side = 1;
	faction = "TCU_AQUA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_C_man_sport_1_F";
    author = "VeZer0";
    _generalMacro = "TCU_AQUA_MRM_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Aqua Simul (Rifleman)";
	vehicleClass = "TCU_AQUA_MAR_BLU";

	weapons[] = {
						"arifle_SDAR_F",
                        "hgun_Pistol_01_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_SDAR_F",
                        "hgun_Pistol_01_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						mag_3(10Rnd_9x21_Mag),
						mag_2(Chemlight_yellow),
						mag_2(ACE_HandFlare_Yellow),
						mag_2(MiniGrenade),
						mag_2(SmokeShellYellow),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						mag_3(10Rnd_9x21_Mag),
						mag_2(Chemlight_yellow),
						mag_2(ACE_HandFlare_Yellow),
						mag_2(MiniGrenade),
						mag_2(SmokeShellYellow),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_Chestrig_blk",
                        "H_Bandanna_surfer_grn",
						"G_Sport_Greenblack",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_Chestrig_blk",
                        "H_Bandanna_surfer_grn",
						"G_Sport_Greenblack",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_AQUA_MSMG_BLU: C_man_sport_3_F
{
	side = 1;
	faction = "TCU_AQUA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_C_man_sport_3_F";
    author = "VeZer0";
    _generalMacro = "TCU_AQUA_MSMG_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Aqua Simul (SMG)";
	vehicleClass = "TCU_AQUA_MAR_BLU";

	weapons[] = {
						"SMG_01_F",
                        "hgun_Pistol_01_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_01_F",
                        "hgun_Pistol_01_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_45ACP_Mag_SMG_01_Tracer_Green),
						mag_3(10Rnd_9x21_Mag),
						mag_2(Chemlight_yellow),
						mag_2(ACE_HandFlare_Yellow),
						mag_2(MiniGrenade),
						mag_2(SmokeShellYellow),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_45ACP_Mag_SMG_01_Tracer_Green),
						mag_3(10Rnd_9x21_Mag),
						mag_2(Chemlight_yellow),
						mag_2(ACE_HandFlare_Yellow),
						mag_2(MiniGrenade),
						mag_2(SmokeShellYellow),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_Chestrig_blk",
                        "H_Bandanna_surfer",
						"G_Sport_Blackred",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_Chestrig_blk",
                        "H_Bandanna_surfer",
						"G_Sport_Blackred",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };

class TCU_AQUA_MSA_BLU: C_man_sport_2_F
{
	side = 1;
	faction = "TCU_AQUA_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_C_man_sport_2_F";
    author = "VeZer0";
    _generalMacro = "TCU_AQUA_MSA_BLU";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Aqua Simul (Sidearm)";
	vehicleClass = "TCU_AQUA_MAR_BLU";

	weapons[] = {
                        "hgun_Pistol_01_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hgun_Pistol_01_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
						mag_6(10Rnd_9x21_Mag),
						mag_2(Chemlight_yellow),
						mag_2(ACE_HandFlare_Yellow),
						mag_2(MiniGrenade),
						mag_2(SmokeShellYellow),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
						mag_6(10Rnd_9x21_Mag),
						mag_2(Chemlight_yellow),
						mag_2(ACE_HandFlare_Yellow),
						mag_2(MiniGrenade),
						mag_2(SmokeShellYellow),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_Chestrig_blk",
                        "H_Bandanna_surfer_blk",
						"G_Sport_Checkered",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_Chestrig_blk",
                        "H_Bandanna_surfer_blk",
						"G_Sport_Checkered",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
