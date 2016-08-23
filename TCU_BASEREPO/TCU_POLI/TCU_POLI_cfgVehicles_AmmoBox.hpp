// TCU Police Special Duties Unit Ammoboxes

	class TCU_POLI_MAR_ammobox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Police SDU Supply Crate";
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

			class _xx_30Rnd_556x45_Stanag_Tracer_Green {
				magazine = "30Rnd_556x45_Stanag_Tracer_Green";
				count = 30;
			};
			
			class _xx_30Rnd_9x21_Mag_SMG_02_Tracer_Yellow{
				magazine = "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow";
				count = 30;
			};

			class _xx_16Rnd_9x21_Mag {
				magazine = "16Rnd_9x21_Mag";
				count = 15;
			};
						
			class _xx_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 2;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 2;
			};

			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 5;
			};

			class _xx_ACE_HandFlare_White {
				magazine = "ACE_HandFlare_White";
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
			
			class _xx_B_AssaultPack_blk_POLI_STD {
				backpack = "B_AssaultPack_blk_POLI_STD";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_POLI_LSTD {
				backpack = "B_AssaultPack_blk_POLI_LSTD";
				count = 2;
			};
		};
	};
	
	class TCU_POLI_MAREQP_box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Police Equipment Supply Crate";
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
			
			class _xx_B_AssaultPack_blk_POLI_STD {
				backpack = "B_AssaultPack_blk_POLI_STD";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_POLI_LSTD {
				backpack = "B_AssaultPack_blk_POLI_LSTD";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_POLI_MRK {
				backpack = "B_AssaultPack_blk_POLI_MRK";
				count = 2;
			};
			class _xx_B_AssaultPack_blk_POLI_MMD {
				backpack = "B_AssaultPack_blk_POLI_MMD";
				count = 2;
			};
			class _xx_B_TacticalPack_blk_POLI_DMK {
				backpack = "B_TacticalPack_blk_POLI_DMK";
				count = 2;
			};
		};
	};
	
	class TCU_POLI_MAR_wbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Police SDU Special Weapons Crate";
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

			class _xx_ACE_20Rnd_762x51_Mag_Tracer {
				magazine = "ACE_20Rnd_762x51_Mag_Tracer";
				count = 20;
			};
			
			class _xx_100Rnd_580x42_Mag_Tracer_F {
				magazine = "100Rnd_580x42_Mag_Tracer_F";
				count = 6;
			};

		};
		
		class TransportItems {

			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 1;
			};
		};
		
		class Transportweapons {
			
			class _xx_srifle_DMR_03_khaki_F {
				weapon = "srifle_DMR_03_khaki_F";
				count = 1;
			};
			
			class _xx_arifle_CTARS_blk_F {
				weapon = "arifle_CTARS_blk_F";
				count = 1;
			};
			
			class _xx_launch_NLAW_F {
				weapon = "launch_NLAW_F";
				count = 2;
			};
		};
	};
	
	class TCU_POLI_MAR_container: B_Slingload_01_Cargo_F
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Police Cargo Container";
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

			class _xx_30Rnd_556x45_Stanag_Tracer_Green {
				magazine = "30Rnd_556x45_Stanag_Tracer_Green";
				count = 60;
			};
			
			class _xx_30Rnd_9x21_Mag_SMG_02_Tracer_Yellow{
				magazine = "30Rnd_9x21_Mag_SMG_02_Tracer_Yellow";
				count = 60;
			};
			
			class _xx_ACE_20Rnd_762x51_Mag_Tracer {
				magazine = "ACE_20Rnd_762x51_Mag_Tracer";
				count = 40;
			};
			
			class _xx_100Rnd_580x42_Mag_Tracer_F {
				magazine = "100Rnd_580x42_Mag_Tracer_F";
				count = 12;
			};

			class _xx_16Rnd_9x21_Mag {
				magazine = "16Rnd_9x21_Mag";
				count = 30;
			};
						
			class _xx_SmokeShellBlue {
				magazine = "SmokeShellBlue";
				count = 4;
			};
			
			class _xx_ACE_M84 {
				magazine = "ACE_M84";
				count = 4;
			};

			class _xx_Chemlight_blue {
				magazine = "Chemlight_blue";
				count = 10;
			};

			class _xx_ACE_HandFlare_White {
				magazine = "ACE_HandFlare_White";
				count = 4;
			};
			
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
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
				count = 16;
			};
			
			class _xx_optic_LRPS {
				name = "optic_LRPS";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_B_AssaultPack_blk_POLI_STD {
				backpack = "B_AssaultPack_blk_POLI_STD";
				count = 6;
			};
			class _xx_B_AssaultPack_blk_POLI_LSTD {
				backpack = "B_AssaultPack_blk_POLI_LSTD";
				count = 6;
			};
			class _xx_B_AssaultPack_blk_POLI_MRK {
				backpack = "B_AssaultPack_blk_POLI_MRK";
				count = 4;
			};
			class _xx_B_AssaultPack_blk_POLI_MMD {
				backpack = "B_AssaultPack_blk_POLI_MMD";
				count = 4;
			};
			class _xx_B_TacticalPack_blk_POLI_DMK {
				backpack = "B_TacticalPack_blk_POLI_DMK";
				count = 4;
			};
		};
		
		class Transportweapons {
			
			class _xx_srifle_DMR_03_khaki_F {
				weapon = "srifle_DMR_03_khaki_F";
				count = 4;
			};
			
			class _xx_arifle_CTARS_blk_F {
				weapon = "arifle_CTARS_blk_F";
				count = 4;
			};
			
			class _xx_launch_NLAW_F {
				weapon = "launch_NLAW_F";
				count = 4;
			};
		};
	};
	
	class TCU_GEN_MAR_AceMedbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] ACE [Basic] Medical Supply Crate";
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
				
		class TransportItems {

			class _xx_ACE_fieldDressing {
				name = "ACE_fieldDressing";
				count = 120;
			};

			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 60;
			};

			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 60;
			};

			class _xx_bloodIV_250 {
				name = "ACE_bloodIV_250";
				count = 30;
			};
			
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 20;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_OGA_G_Backpack_Kitbag {
				backpack = "OGA_G_Backpack_Kitbag";
				count = 10;
			};
		};
	};
	
	class TCU_GEN_MAR_BANbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] Banana Supply Crate";
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
				
		class TransportItems {

			class _xx_ACE_Banana1 {
				name = "ACE_Banana";
				count = 100;
			};
			class _xx_ACE_Banana2 {
				name = "ACE_Banana";
				count = 100;
			};
			class _xx_ACE_Banana3 {
				name = "ACE_Banana";
				count = 100;
			};
			class _xx_ACE_Banana4 {
				name = "ACE_Banana";
				count = 100;
			};
			class _xx_ACE_Banana5 {
				name = "ACE_Banana";
				count = 100;
			};
		};
	};
	
	class TCU_GEN_MAR_AceENbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] ACE Engineer Supply Crate";
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

			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 10;
			};
			
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
				count = 4;
			};
		};
		
		class TransportItems {

			class _xx_ACE_Cellphone {
				name = "ACE_Cellphone";
				count = 2;
			};
			class _xx_ACE_DefusalKit {
				name = "ACE_DefusalKit";
				count = 2;
			};
			class _xx_ACE_EntrenchingTool {
				name = "ACE_EntrenchingTool";
				count = 2;
			};
			class _xx_ACE_DeadManSwitch {
				name = "ACE_DeadManSwitch";
				count = 2;
			};

			class _xx_ACE_M26_Clacker{
				name = "ACE_M26_Clacker";
				count = 2;
			};

			class _xx_MineDetector {
				name = "MineDetector";
				count = 2;
			};

			class _xx_ToolKit {
				name = "ToolKit";
				count = 2;
			};
			
			class _xx_ACE_wirecutter {
				name = "ACE_wirecutter";
				count = 2;
			};
		};
		
		class Transportbackpacks {
			
			class _xx_B_Carryall_oli {
				backpack = "B_Carryall_oli";
				count = 2;
			};
		};
	};
	
	class TCU_GEN_MAR_AceWHbox: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[TCU] ACE Vehicle Repair Supply Crate";
		model = "\A3\weapons_F\AmmoBoxes\AmmoVeh_F";
		icon = "iconCrate";
		ace_cargo_canLoad = 1;
		ace_cargo_size = 1;
		ace_cargo_space = 10;
		ace_cargo_hasCargo = 1;
		ace_dragging_canDrag = 1;
		ace_dragging_dragPosition[] = {0, 1.2, 0};
		ace_dragging_dragDirection = 0; 
		ace_dragging_canCarry = 1;
		ace_dragging_carryPosition[] = {0, 1.2, 0};
		ace_dragging_carryDirection = 0;
				
		class TransportItems {

			class _xx_ACE_Track {
				name = "ACE_Track";
				count = 6;
			};
			class _xx_ACE_Wheel {
				name = "ACE_Wheel";
				count = 12;
			};

			class _xx_ToolKit {
				name = "ToolKit";
				count = 2;
			};
		};
	};
	