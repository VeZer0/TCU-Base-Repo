//TCU DOME Dome Karts

class TCU_DOME_MRM_IND: B_Soldier_base_F
{
	side = 2;
	faction = "TCU_DOME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_C_Driver_3";
    author = "VeZer0";
    _generalMacro = "TCU_DOME_MRM_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Dome Karts (Rifleman)";
	vehicleClass = "TCU_DOME_MAR_IND";

	weapons[] = {
						"arifle_AKS_F",
                        "hgun_ACPC2_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_AKS_F",
                        "hgun_ACPC2_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_545x39_Mag_Tracer_F),
						mag_3(9Rnd_45ACP_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_545x39_Mag_Tracer_F),
						mag_3(9Rnd_45ACP_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_HarnessO_brn",
                        "H_RacingHelmet_3_F",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_HarnessO_brn",
                        "H_RacingHelmet_3_F",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_DOME_MSMG_IND: B_Soldier_base_F
{
	side = 2;
	faction = "TCU_DOME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_C_Driver_2";
    author = "VeZer0";
    _generalMacro = "TCU_DOME_MSMG_IND";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Dome Karts (SMG)";
	vehicleClass = "TCU_DOME_MAR_IND";

	weapons[] = {
						"hgun_PDW2000_F",
                        "hgun_ACPC2_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hgun_PDW2000_F",
                        "hgun_ACPC2_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_9x21_Red_Mag),
						mag_3(9Rnd_45ACP_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_9x21_Red_Mag),
						mag_3(9Rnd_45ACP_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_HarnessO_brn",
                        "H_RacingHelmet_2_F",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_HarnessO_brn",
                        "H_RacingHelmet_2_F",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };

class TCU_DOME_MSA_IND: B_Soldier_base_F
{
	side = 2;
	faction = "TCU_DOME_IND";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_C_Driver_1_black";
    author = "VeZer0";
    _generalMacro = "TCU_DOME_MSA_IND";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Dome Karts (Sidearm)";
	vehicleClass = "TCU_DOME_MAR_IND";

	weapons[] = {
                        "hgun_ACPC2_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hgun_ACPC2_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
						mag_6(9Rnd_45ACP_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
						mag_6(9Rnd_45ACP_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_HarnessO_brn",
                        "H_RacingHelmet_1_black_F",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_HarnessO_brn",
                        "H_RacingHelmet_1_black_F",
						"G_Shades_Black",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
