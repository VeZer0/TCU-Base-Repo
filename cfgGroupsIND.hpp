//INDEPENDENT
		class Indep
        {
                name = "Independent"; 
                side = 2; 
				class TCU_DOME_IND
                {
                        name = "[TCU] Kart Domes"; 
						class Infantry
                        {
                                name = "Infantry";
								class TCU_DOME_MAR_RS
                                {
										name = "Unit"; 
                                        faction = "TCU_DOME_IND"; 
                                        side = 2; 
                                        class Unit0
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                         class Unit1
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
								};
								class TCU_DOME_MAR_ST
                                {
										name = "Sentry"; 
                                        faction = "TCU_DOME_IND"; 
                                        side = 2; 
										class Unit0
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit1
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
								};								
						};
						class Motorized
						{
								name = "Motorized";
								class TCU_DOME_MAR_MOT
								{
										name = "Motorized Convoy Team"; 
                                        faction = "TCU_DOME_IND"; 
                                        side = 2; 
                                        class Unit0
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MAR_TRAN"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
										class Unit5
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Private";
                                                position[] = {15,-15,0};
                                        };
										class Unit6
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {-15,-15,0};
                                        };
										class Unit7
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {20,-20,0};
                                        };
										class Unit8
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {5,0,0};
                                        };
										class Unit9
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {6,0,0};
                                        };
										class Unit10
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSMG_IND";
                                                rank = "Private";
                                                position[] = {7,0,0};
                                        };
										class Unit11
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSA_IND";
                                                rank = "Private";
                                                position[] = {0,0,3};
                                        };
										class Unit12
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MSA_IND";
                                                rank = "Private";
                                                position[] = {0,0,5};
                                        };
								};
								class TCU_DOME_MAR_MOT2
								{
										name = "Motorized MTRA Team"; 
                                        faction = "TCU_DOME_IND"; 
                                        side = 2; 
                                        class Unit0
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MAR_MTRA"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
								};									
						};
						class Air
						{
								name = "Air";
								class TCU_DOME_MAR_AIR
								{
										name = "Heli Team"; 
                                        faction = "TCU_DOME_IND"; 
                                        side = 2; 
                                        class Unit0
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MAR_LTHC"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
								};
						};
						class Naval
						{
								name = "Naval";
								class TCU_DOME_MAR_BOT
								{
										name = "Boat Team"; 
                                        faction = "TCU_DOME_IND"; 
                                        side = 2; 
                                        class Unit0
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MAR_BOAT"; 
                                                rank = "Lieutenant"; 
                                                position[] = {0,0,0}; 
                                        };
                                        class Unit1
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Sergeant";
                                                position[] = {5,-5,0};
                                        };
										class Unit2
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {-5,-5,0};
                                        };
										class Unit3
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Corporal";
                                                position[] = {10,-10,0};
                                        };
										class Unit4
                                        {
                                                side = 2; 
                                                vehicle = "TCU_DOME_MRM_IND";
                                                rank = "Private";
                                                position[] = {-10,-10,0};
                                        };
								};
						};
				};
		};