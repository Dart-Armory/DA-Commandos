class CfgGroups
{
    class West
    {
        class CLASS(SOB)
        {
            name = "[DA] Special Operations Brigade";

            class CLASS(Commandos_Base)
            {
                name = "Commando Squads";
                class Base
                {
                    faction = QCLASS(SOB);
                    name = "Clone Commandos";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = BLUFOR;

                    class Object0
                    {
                        side = BLUFOR;
                        vehicle = QCLASS(Unit_Commando_SL_Base);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = QCLASS(Unit_Commando_EOD_Base);
                        rank = "CORPORAL";
                        position[] = {1, -1, 0};
                    };
                    class Object2: Object1
                    {
                        vehicle = QCLASS(Unit_Commando_Tech_Base);
                        position[] = {-1, -1, 0};
                    };
                    class Object3: Object1
                    {
                        vehicle = QCLASS(Unit_Commando_DM_Base);
                        position[] = {2, -2, 0};
                    };
                };

                class Imperial: Base
                {
                    name = "Imperial Commandos";
                    class Object0: Object0
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando);
                    };
                    class Object1: Object1
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando_EOD);
                    };
                    class Object2: Object2
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando_Tech);
                    };
                    class Object3: Object3
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando_DM);
                    };
                };
            };
        };
    };

    class East
    {
        class CLASS(SOB)
        {
            name = "[DA] Special Operations Brigade";

            class CLASS(Commandos_Base)
            {
                name = "Commando Squads";
                class Imperial
                {
                    faction = QCLASS(SOB);
                    name = "Imperial Commandos";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    side = OPFOR;

                    class Object0
                    {
                        side = OPFOR;
                        vehicle = QCLASS(Unit_Imperial_Commando_OPFOR);
                        rank = "SERGEANT";
                        position[] = {0, 0, 0};
                        dir = 0;
                    };
                    class Object1: Object0
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando_EOD_OPFOR);
                        rank = "CORPORAL";
                        position[] = {1, -1, 0};
                    };
                    class Object2: Object1
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando_Tech_OPFOR);
                        position[] = {-1, -1, 0};
                    };
                    class Object3: Object1
                    {
                        vehicle = QCLASS(Unit_Imperial_Commando_DM_OPFOR);
                        position[] = {2, -2, 0};
                    };
                };
            };
        };
    };
};