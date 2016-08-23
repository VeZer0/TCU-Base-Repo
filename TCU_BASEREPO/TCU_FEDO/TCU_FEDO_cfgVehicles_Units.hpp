//TCU FEDO Fedora Syndicate

class TCU_FEDO_MRM_OPF: B_Soldier_base_F
{
	side = 0;
	faction = "TCU_FEDO_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_NikosBody";
    author = "VeZer0";
    _generalMacro = "TCU_FEDO_MRM_OPF";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Fedora Syndicate (Rifleman)";
	vehicleClass = "TCU_FEDO_MAR_OPF";

	weapons[] = {
						"arifle_SPAR_01_blk_F",
                        "hgun_P07_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "arifle_SPAR_01_blk_F",
                        "hgun_P07_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_556x45_Stanag_Tracer_Yellow),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_BandollierB_cbr",
                        "H_Hat_brown",
						"G_Lady_Blue",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_BandollierB_cbr",
                        "H_Hat_brown",
						"G_Lady_Blue",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
class TCU_FEDO_MSMG_OPF: B_Soldier_base_F
{
	side = 0;
	faction = "TCU_FEDO_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_NikosBody";
    author = "VeZer0";
    _generalMacro = "TCU_FEDO_MSMG_OPF";
    icon = "iconManLeader";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Fedora Syndicate (SMG)";
	vehicleClass = "TCU_FEDO_MAR_OPF";

	weapons[] = {
						"SMG_05_F",
                        "hgun_P07_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "SMG_05_F",
                        "hgun_P07_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
                        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
                        mag_6(30Rnd_9x21_Mag_SMG_02_Tracer_Green),
						mag_3(16Rnd_9x21_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_BandollierB_cbr",
                        "H_Hat_tan",
						"G_Lady_Blue",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_BandollierB_cbr",
                        "H_Hat_tan",
						"G_Lady_Blue",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };

class TCU_FEDO_MSA_OPF: B_Soldier_base_F
{
	side = 0;
	faction = "TCU_FEDO_OPF";
	nakedUniform = "U_BasicBody";
	uniformClass = "U_NikosBody";
    author = "VeZer0";
    _generalMacro = "TCU_FEDO_MSA_OPF";
	icon = "iconManOfficer";
    scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    canDeactivateMines = false;
    engineer = false;
    attendant = 0;
    displayName = "Fedora Syndicate (Sidearm)";
	vehicleClass = "TCU_FEDO_MAR_OPF";

	weapons[] = {
                        "hgun_P07_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        respawnWeapons[] = {
                        "hgun_P07_F",
                        "Binocular",
                        "Throw",
                        "Put"
                    };

        magazines[] = {
						mag_6(16Rnd_9x21_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };

        respawnMagazines[] = {
						mag_6(16Rnd_9x21_Mag),
						mag_2(Chemlight_red),
						mag_2(ACE_HandFlare_red),
						mag_2(MiniGrenade),
						mag_2(SmokeShellred),
						mag_2(ACE_M84)
                    };
        linkedItems[] = {
                        "V_BandollierB_cbr",
                        "H_Hat_brown",
						"G_Lady_Blue",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };
        respawnLinkedItems[] = {
                        "V_BandollierB_cbr",
                        "H_Hat_brown",
						"G_Lady_Blue",
                        "ItemMap",
                        "ItemCompass",
                        "ItemWatch",
                        "itemRadio",
						"ItemGPS"
                    };


    };
	
