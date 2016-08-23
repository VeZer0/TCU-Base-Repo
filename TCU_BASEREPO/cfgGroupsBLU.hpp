//BLUFOR
		class WEST
        {
                name = "BLUFOR"; 
                side = 1; 
				class TCU_POLI_BLU
                {
                        name = "[TCU] Police SDU"; 
						class Infantry
                        {
                                name = "Infantry";
								class TCU_POLI_MAR_RS
                                {
										name = "Unit"; 
                                        faction = "TCU_POLI_BLU"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
								};
								class TCU_POLI_MAR_ST
                                {
										name = "Sentry"; 
                                        faction = "TCU_POLI_BLU"; 
                                        side = 1; 
										class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};								
						};
						class Motorized
						{
								name = "Motorized";
								class TCU_POLI_MAR_MOT
								{
										name = "Motorized Convoy Team"; 
                                        faction = "TCU_POLI_BLU"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MAR_TRAN"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
										class Unit6
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit7
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {20,-20,0};
                                        };
										class Unit8
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {5,0,0};
                                        };
										class Unit9
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {7,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSA_BLU";
                                                rank = "Private";
                                                position[] = {0,0,3};
                                        };
										class Unit12
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSA_BLU";
                                                rank = "Private";
                                                position[] = {0,0,5};
                                        };
								};
								class TCU_POLI_MAR_MOT2
								{
										name = "Motorized MTRA Team"; 
                                        faction = "TCU_POLI_BLU"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MAR_MTRA"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
										class Unit6
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
								};									
						};
						class Air
						{
								name = "Air";
								class TCU_POLI_MAR_AIR
								{
										name = "Heli Team"; 
                                        faction = "TCU_POLI_IND"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MAR_LTHC"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
								};
						};
						class Naval
						{
								name = "Naval";
								class TCU_POLI_MAR_BOT
								{
										name = "Boat Team"; 
                                        faction = "TCU_POLI_IND"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MAR_BOAT"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_POLI_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
								};
						};
				};
				class TCU_AQUA_BLU
                {
                        name = "[TCU] Aqual Simul"; 
						class Infantry
                        {
                                name = "Infantry";
								class TCU_AQUA_MAR_RS
                                {
										name = "Unit"; 
                                        faction = "TCU_AQUA_BLU"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
								};
								class TCU_AQUA_MAR_ST
                                {
										name = "Sentry"; 
                                        faction = "TCU_AQUA_BLU"; 
                                        side = 1; 
										class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};								
						};
						class Motorized
						{
								name = "Motorized";
								class TCU_AQUA_MAR_MOT
								{
										name = "Motorized Convoy Team"; 
                                        faction = "TCU_AQUA_BLU"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MAR_TRAN"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
										class Unit6
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit7
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {20,-20,0};
                                        };
										class Unit8
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {5,0,0};
                                        };
										class Unit9
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
										class Unit10
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Private";
                                                position[] = {7,0,0};
                                        };
										class Unit11
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSA_BLU";
                                                rank = "Private";
                                                position[] = {0,0,3};
                                        };
										class Unit12
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSA_BLU";
                                                rank = "Private";
                                                position[] = {0,0,5};
                                        };
								};
								class TCU_AQUA_MAR_MOT2
								{
										name = "Motorized MTRA Team"; 
                                        faction = "TCU_AQUA_BLU"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MAR_MTRA"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
								};									
						};
						class Air
						{
								name = "Air";
								class TCU_AQUA_MAR_AIR
								{
										name = "Heli Team"; 
                                        faction = "TCU_AQUA_IND"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MAR_LTHC"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MSMG_BLU";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
								};
						};
						class Naval
						{
								name = "Naval";
								class TCU_AQUA_MAR_BOT
								{
										name = "Boat Team"; 
                                        faction = "TCU_AQUA_IND"; 
                                        side = 1; 
                                        class Unit0
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MAR_BOAT"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 1; 
                                                vehicle = "TCU_AQUA_MRM_BLU";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
								};
						};
				};
		};