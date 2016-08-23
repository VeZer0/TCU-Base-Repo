//TCU Police Special Duties Unit

class TCU_POLI_MRM_BLU: B_Soldier_base_F
{
	side = 1;
	faction = "TCU_POLI_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_B_GEN_Soldier_F";
    author = "VeZer0";
    _generalMacro = "TCU_POLI_MRM_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SDU (Rifleman)";
	vehicleClass = "TCU_POLI_MAR_BLU";

	weapons[] = {
						"arifle_TRG20_F",
                        "hgun_Rook40_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_TRG20_F",
                        "hgun_Rook40_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_White),
						mag_2(MiniGrenade),
						mag_2(SmokeShellBlue),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Green),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_White),
						mag_2(MiniGrenade),
						mag_2(SmokeShellBlue),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "H_Cap_police",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "H_Cap_police",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_POLI_MSMG_BLU: B_Soldier_base_F
{
	side = 1;
	faction = "TCU_POLI_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_B_GEN_Soldier_F";
    author = "VeZer0";
    _generalMacro = "TCU_POLI_MSMG_BLU";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SDU (SMG)";
	vehicleClass = "TCU_POLI_MAR_BLU";

	weapons[] = {
						"SMG_02_F",
                        "hgun_Rook40_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_02_F",
                        "hgun_Rook40_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Yellow),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_White),
						mag_2(MiniGrenade),
						mag_2(SmokeShellBlue),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Yellow),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_White),
						mag_2(MiniGrenade),
						mag_2(SmokeShellBlue),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "H_Cap_police",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "H_Cap_police",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };

class TCU_POLI_MSA_BLU: B_Soldier_base_F
{
	side = 1;
	faction = "TCU_POLI_BLU";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_B_GEN_Soldier_F";
    author = "VeZer0";
    _generalMacro = "TCU_POLI_MSA_BLU";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "SDU (Sidearm)";
	vehicleClass = "TCU_POLI_MAR_BLU";

	weapons[] = {
                        "hgun_Rook40_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hgun_Rook40_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
						mag_6(16Rnd_9x21_Mag),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_White),
						mag_2(MiniGrenade),
						mag_2(SmokeShellBlue),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
						mag_6(16Rnd_9x21_Mag),
						mag_2(Chemlight_blue),
						mag_2(ACE_HandFlare_White),
						mag_2(MiniGrenade),
						mag_2(SmokeShellBlue),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "H_Cap_police",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_TacVest_blk_POLICE",
                        "H_Cap_police",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
