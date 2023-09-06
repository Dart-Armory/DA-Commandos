class CfgPatches
{
    class DAC_XRay
    {
        author = "DartRuffian";
        addonRootClass = "DA_Commando_Mod";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "DAC_Main"
                // Base Helmet, Uniform, Units, etc.
        };
        units[] =
        {
            // Units
            "DAC_Unit_XRay_SL",
            "DAC_Unit_XRay_EOD",
            "DAC_Unit_XRay_Medic",
            "DAC_Unit_XRay_DM",

            // Backpacks
            "DAC_Backpack_XRay_SL",
            "DAC_Backpack_XRay_SL_Huge",
            "DAC_Backpack_XRay_EOD",
            "DAC_Backpack_XRay_EOD_Huge",
            "DAC_Backpack_XRay_Medic",
            "DAC_Backpack_XRay_Medic_Huge",
            "DAC_Backpack_XRay_DM",
            "DAC_Backpack_XRay_DM_Huge"
        };
        weapons[] =
        {
            // Helmets
            "DAC_Helmet_XRay_SL",
            "DAC_Helmet_XRay_EOD",
            "DAC_Helmet_XRay_Medic",
            "DAC_Helmet_XRay_DM",

            // Uniforms
            "DAC_Uniform_Xray_SL",
            "DAC_Uniform_Xray_EOD",
            "DAC_Uniform_Xray_Medic",
            "DAC_Uniform_Xray_DM"
        };
    };
};