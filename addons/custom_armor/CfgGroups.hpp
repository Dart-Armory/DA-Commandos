class CfgGroups
{
    class West
    {
        class CLASS(SOB)
        {
            class CLASS(Commandos_Base)
            {
                class Base
                {
                    class Object0;
                    class Object1;
                    class Object2;
                    class Object3;
                };

                class XRay: Base
                {
                    name = "X-Ray Squad";
                    class Object0: Object0
                    {
                        vehicle = QCLASS(Unit_XRay_SL);
                    };
                    class Object1: Object1
                    {
                        vehicle = QCLASS(Unit_XRay_EOD);
                    };
                    class Object2: Object2
                    {
                        vehicle = QCLASS(Unit_XRay_Medic);
                    };
                    class Object3: Object3
                    {
                        vehicle = QCLASS(Unit_XRay_DM);
                    };
                };

                class Zulu: Base
                {
                    name = "Zulu Squad";
                    class Object0: Object0
                    {
                        vehicle = QCLASS(Unit_Zulu_SL);
                    };
                    class Object1: Object1
                    {
                        vehicle = QCLASS(Unit_Zulu_EOD);
                    };
                    class Object2: Object2
                    {
                        vehicle = QCLASS(Unit_Zulu_Medic);
                    };
                    class Object3: Object3
                    {
                        vehicle = QCLASS(Unit_Zulu_DM);
                    };
                };
            };
        };
    };
};