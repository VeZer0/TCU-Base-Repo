// TCU AQUA Aqua Simul Ammoboxes

	class TCU_AQUA_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Aqua Simul Supply Crate";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop.p3d";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow {
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
				count = 30;
			};
			
			class _xx_30Rnd_45ACP_Mag_SMG_01_Tracer_Green {
				magazine = "30Rnd_45ACP_Mag_SMG_01_Tracer_Green";
				count = 30;
			};

			class _xx_10Rnd_9x21_Mag {
				magazine = "10Rnd_9x21_Mag";
				count = 15;
			};
						
			class _xx_SmokeShellYellow {
				magazine = "SmokeShellYellow";
				count = 2;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 2;
			};

			class _xx_Chemlight_yellow {
				magazine = "Chemlight_yellow";
				count = 5;
			};

			class _xx_ACE_HandFlare_Yellow {
				magazine = "ACE_HandFlare_Yellow";
				count = 2;
			};
			
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
				count = 2;
			};

		};
		
		class TransportItems {

			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 20;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 10;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 10;
			};

			class _xx_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 5;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 10;
			};
			
			class _xx_acc_flashlight {
				name = "acc_flashlight";
				count = 16;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_B_AssaultPack_blk_AQUA_STD {
				backpack = "B_AssaultPack_blk_AQUA_STD";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_AQUA_LSTD {
				backpack = "B_AssaultPack_blk_AQUA_LSTD";
				count = 2;
			};
		};
	};
	
	class TCU_AQUA_MAREQP_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Aqua Simul Equipment Supply Crate";
		model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class Transportbackpacks {
			
			class _xx_B_AssaultPack_blk_AQUA_STD {
				backpack = "B_AssaultPack_blk_AQUA_STD";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_AQUA_LSTD {
				backpack = "B_AssaultPack_blk_AQUA_LSTD";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_AQUA_MRK {
				backpack = "B_AssaultPack_blk_AQUA_MRK";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_AQUA_MMD {
				backpack = "B_AssaultPack_blk_AQUA_MMD";
				count = 2;
			};
			class _xx_B_TacticalPack_blk_AQUA_DMK {
				backpack = "B_TacticalPack_blk_AQUA_DMK";
				count = 2;
			};
		};
	};
	
	class TCU_AQUA_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Aqua Simul Special Weapons Crate";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_10Rnd_127x54_Mag {
				magazine = "10Rnd_127x54_Mag";
				count = 20;
			};
			
			class _xx_100Rnd_65x39_caseless_mag_Tracer {
				magazine = "100Rnd_65x39_caseless_mag_Tracer";
				count = 6;
			};
			
			class _xx_RPG7_F {
				magazine = "RPG7_F";
				count = 2;
			};

		};
		
		class TransportItems {

			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 1;
			};
		};
		
		class Transportweapons {
			
			class _xx_srifle_DMR_04_F {
				weapon = "srifle_DMR_04_F";
				count = 1;
			};
			
			class _xx_arifle_MX_SW_Black_F {
				weapon = "arifle_MX_SW_Black_F";
				count = 1;
			};
			
			class _xx_launch_RPG7_F {
				weapon = "launch_RPG7_F";
				count = 2;
			};
		};
	};
	
	class TCU_AQUA_MAR_container: B_Slingload_01_Cargo_F
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Aqua Simul Cargo Container";
		model = "\A3\Supplies_F_Heli\Slingload\Slingload_01_Cargo_F.p3d";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
		
		class TransportMagazines {

			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow {
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
				count = 60;
			};
			
			class _xx_30Rnd_45ACP_Mag_SMG_01_Tracer_Green {
				magazine = "30Rnd_45ACP_Mag_SMG_01_Tracer_Green";
				count = 60;
			};

			class _xx_10Rnd_9x21_Mag {
				magazine = "10Rnd_9x21_Mag";
				count = 30;
			};
						
			class _xx_SmokeShellYellow {
				magazine = "SmokeShellYellow";
				count = 4;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 4;
			};

			class _xx_Chemlight_yellow {
				magazine = "Chemlight_yellow";
				count = 10;
			};

			class _xx_ACE_HandFlare_Yellow {
				magazine = "ACE_HandFlare_Yellow";
				count = 4;
			};
			
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
				count = 4;
			};
			
			class _xx_10Rnd_127x54_Mag {
				magazine = "10Rnd_127x54_Mag";
				count = 40;
			};
			
			class _xx_100Rnd_65x39_caseless_mag_Tracer {
				magazine = "100Rnd_65x39_caseless_mag_Tracer";
				count = 12;
			};
			
			class _xx_RPG7_F {
				magazine = "RPG7_F";
				count = 4;
			};

		};
		
		class TransportItems {

			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 40;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 20;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 20;
			};

			class _xx_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 10;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 20;
			};
			
			class _xx_acc_flashlight {
				name = "acc_flashlight";
				count = 32;
			};
			
			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_B_AssaultPack_blk_AQUA_STD {
				backpack = "B_AssaultPack_blk_AQUA_STD";
				count = 6;
			};
			class _xx_B_AssaultPack_blk_AQUA_LSTD {
				backpack = "B_AssaultPack_blk_AQUA_LSTD";
				count = 6;
			};
			class _xx_B_AssaultPack_blk_AQUA_MRK {
				backpack = "B_AssaultPack_blk_AQUA_MRK";
				count = 4;
			};
			class _xx_B_AssaultPack_blk_AQUA_MMD {
				backpack = "B_AssaultPack_blk_AQUA_MMD";
				count = 4;
			};
			class _xx_B_TacticalPack_blk_AQUA_DMK {
				backpack = "B_TacticalPack_blk_AQUA_DMK";
				count = 4;
			};
		};
		
		class Transportweapons {
			
			class _xx_srifle_DMR_04_F {
				weapon = "srifle_DMR_04_F";
				count = 2;
			};
			
			class _xx_arifle_MX_SW_Black_F {
				weapon = "arifle_MX_SW_Black_F";
				count = 2;
			};
			
			class _xx_launch_RPG7_F {
				weapon = "launch_RPG7_F";
				count = 4;
			};
		};
	};
	
	