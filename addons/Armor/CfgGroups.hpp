class CfgGroups
{
    class West
    {
        class DAC_SOB
        {
            name = "[DA] Special Operations Brigade";

            class DAC_Commandos_Base
            {
                name = "Commando Squads";
                class Base
                {
                    faction = "DAC_SOB";
                    name = "Clone Commandos";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = BLUFOR;

                    class Object0
                    {
                        side = BLUFOR;
                        vehicle = "DAC_Unit_Commando_SL_Base";
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = "DAC_Unit_Commando_EOD_Base";
                        rank = "CORPORAL";
                        position[] = {1, -1, 0};
                    };
                    class Object2: Object1
                    {
                        vehicle = "DAC_Unit_Commando_Tech_Base";
                        position[] = {-1, -1, 0};
                    };
                    class Object3: Object1
                    {
                        vehicle = "DAC_Unit_Commando_DM_Base";
                        position[] = {2, -2, 0};
                    };
                };

                class Imperial: Base
                {
                    name = "Imperial Commandos";
                    class Object0: Object0
                    {
                        vehicle = "DAC_Unit_Imperial_Commando";
                    };
                    class Object1: Object1
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_EOD";
                    };
                    class Object2: Object2
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_Tech";
                    };
                    class Object3: Object3
                    {
                        vehicle = "DAC_Unit_Imperial_Commando_DM";
                    };
                };
            };
        };
    };
};