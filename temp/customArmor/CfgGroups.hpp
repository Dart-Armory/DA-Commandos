class CfgGroups
{
    class West
    {
        class DAC_SOB
        {
            class DAC_Commandos_Base
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
                        vehicle = "DAC_Unit_XRay_SL";
                    };
                    class Object1: Object1
                    {
                        vehicle = "DAC_Unit_XRay_EOD";
                    };
                    class Object2: Object2
                    {
                        vehicle = "DAC_Unit_XRay_Medic";
                    };
                    class Object3: Object3
                    {
                        vehicle = "DAC_Unit_XRay_DM";
                    };
                };

                class Zulu: Base
                {
                    name = "Zulu Squad";
                    class Object0: Object0
                    {
                        vehicle = "DAC_Unit_Zulu_SL";
                    };
                    class Object1: Object1
                    {
                        vehicle = "DAC_Unit_Zulu_EOD";
                    };
                    class Object2: Object2
                    {
                        vehicle = "DAC_Unit_Zulu_Medic";
                    };
                    class Object3: Object3
                    {
                        vehicle = "DAC_Unit_Zulu_DM";
                    };
                };
            };
        };
    };
};