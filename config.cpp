#include "macros.hpp"
#include "cfgPatches.hpp"

class cfgFactionClasses
{
    #include "TCU_POLI\TCU_POLI_Factions.hpp"
	#include "TCU_AQUA\TCU_AQUA_Factions.hpp"
	#include "TCU_DOME\TCU_DOME_Factions.hpp"
	#include "TCU_FEDO\TCU_FEDO_Factions.hpp"
};

class CfgVehicleClasses
{
    #include "TCU_POLI\TCU_POLI_vehicleClasses.hpp"
	#include "TCU_AQUA\TCU_AQUA_vehicleClasses.hpp"
	#include "TCU_DOME\TCU_DOME_vehicleClasses.hpp"
	#include "TCU_FEDO\TCU_FEDO_vehicleClasses.hpp"
};
 
class CfgVehicles
{	
	// Unit base defines:
	class B_Soldier_base_F;
	class O_Soldier_base_F;
	class I_Soldier_base_F;
	class C_man_1;
	class C_man_sport_1_F;
	class C_man_sport_2_F;
	class C_man_sport_3_F;
	
	#include "TCU_POLI\TCU_POLI_cfgVehicles_Units.hpp"
	#include "TCU_AQUA\TCU_AQUA_cfgVehicles_Units.hpp"
	#include "TCU_DOME\TCU_DOME_cfgVehicles_Units.hpp"
	#include "TCU_FEDO\TCU_FEDO_cfgVehicles_Units.hpp"
		
	// Asset base defines:
	class B_Boat_Armed_01_minigun_F;
	
	class B_MRAP_01_F;
	class B_T_LSV_01_unarmed_F;
	
	class C_Offroad_02_unarmed_F;
	class C_Hatchback_01_sport_F;
	class C_Van_01_transport_F;
	class C_Kart_01_F;
	class C_SUV_01_F;
	
	class C_Heli_Light_01_civil_F;
	
	class C_Boat_Civil_01_F;
	class C_Boat_Transport_02_F;
	class C_Rubberboat;
	
	class C_Scooter_Transport_01_F;
	
	class I_G_Offroad_01_armed_F;
	
	class O_APC_Tracked_02_cannon_F;
	
	class O_Heli_Attack_02_black_F;
	class O_Heli_Light_02_F;
	class O_Heli_Light_02_unarmed_F;
	
	class O_T_LSV_02_unarmed_F;
	class O_T_LSV_02_armed_F;
	
	class O_Truck_03_covered_F;
	
	#include "TCU_POLI\TCU_POLI_cfgVehicles_assets.hpp"
	#include "TCU_AQUA\TCU_AQUA_cfgVehicles_assets.hpp"
	#include "TCU_DOME\TCU_DOME_cfgVehicles_assets.hpp"
	#include "TCU_FEDO\TCU_FEDO_cfgVehicles_assets.hpp"
	
	// Backpack and item base defines:
	class B_ViperLightHarness_blk_F;
	class B_ViperHarness_blk_F;
	class B_AssaultPack_blk;
	class B_FieldPack_blk;
	class B_TacticalPack_blk;
	
	class tf_rt1523g_black;
	class tf_anprc155_coyote;
	
	
	#include "TCU_POLI\TCU_POLI_cfgVehicles_Packs.hpp"
	#include "TCU_AQUA\TCU_AQUA_cfgVehicles_Packs.hpp"
	#include "TCU_DOME\TCU_DOME_cfgVehicles_Packs.hpp"
	#include "TCU_FEDO\TCU_FEDO_cfgVehicles_Packs.hpp"

	//Ammo Boxes defines:
	class NATO_Box_Base;
	class B_SupplyCrate_F;
	class B_Slingload_01_Cargo_F;
	
	#include "TCU_POLI\TCU_POLI_cfgVehicles_AmmoBox.hpp"
	#include "TCU_AQUA\TCU_AQUA_cfgVehicles_AmmoBox.hpp"
	#include "TCU_DOME\TCU_DOME_cfgVehicles_AmmoBox.hpp"
	#include "TCU_FEDO\TCU_FEDO_cfgVehicles_AmmoBox.hpp"

};

class CfgGroups
{
	#include "cfgGroupsBLU.hpp"		
	#include "cfgGroupsIND.hpp"
	#include "cfgGroupsOPF.hpp"		
};