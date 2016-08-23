// TCU Police Special Duties Unit Backpacks
	
	class B_AssaultPack_blk_POLI_STD: B_AssaultPack_blk
    {
        scope = 1;
		displayName="Standard Kit"; 
        class TransportItems
        {
            item_xx(ACE_fieldDressing,10);
            item_xx(ACE_morphine,5);
            item_xx(ACE_epinephrine,3);
            item_xx(ACE_CableTie,3);
			item_xx(optic_Holosight_blk_F,1);
			item_xx(acc_flashlight,1);
        };
    };
	
	class B_AssaultPack_blk_POLI_LSTD: B_TacticalPack_blk
    {
        scope = 1;
		displayName="Standard Kit (Large)"; 
        class TransportItems
        {
            item_xx(ACE_fieldDressing,10);
            item_xx(ACE_morphine,5);
            item_xx(ACE_epinephrine,3);
            item_xx(ACE_CableTie,3);
			item_xx(optic_Holosight_blk_F,1);
			item_xx(acc_flashlight,1);
        };
    };

	class B_AssaultPack_blk_POLI_MRK: B_TacticalPack_blk
    {
        scope = 1;
		displayName="Field Repair Kit"; 
        class TransportItems
        {
            item_xx(ACE_fieldDressing,5);
            item_xx(ACE_morphine,3);
            item_xx(ACE_epinephrine,2);
			item_xx(ToolKit,1);
			item_xx(ACE_wirecutter,1);
			item_xx(ACE_EntrenchingTool,1);
        };
    };
	
	class B_AssaultPack_blk_POLI_MMD: B_AssaultPack_blk
    {
        scope = 1;
		displayName="First Aid Kit"; 
        class TransportItems
        {
            item_xx(ACE_fieldDressing,30);
            item_xx(ACE_morphine,20);
            item_xx(ACE_epinephrine,12);
            item_xx(ACE_CableTie,2);
			item_xx(ACE_bloodIV_250,3);
        };
    };
	
	class B_TacticalPack_blk_POLI_DMK: B_TacticalPack_blk
    {
        scope = 1;
		displayName="Demolitions Kit"; 
        class TransportMagazines
        {
            mag_xx(DemoCharge_Remote_Mag,2);
			mag_xx(SatchelCharge_Remote_Mag,1);
        };
        class TransportItems
        {
            item_xx(ACE_fieldDressing,5);
            item_xx(ACE_morphine,3);
            item_xx(ACE_epinephrine,2);
			item_xx(ACE_DefusalKit,1);
			item_xx(ACE_Clacker,1);
			item_xx(ToolKit,1);
			item_xx(MineDetector,1);
        };
    };
	


	
