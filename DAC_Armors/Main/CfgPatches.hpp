class CfgPatches
{
    class DAC_Main
    {
        author = "DartRuffian";
        addonRootClass = "DA_Commando_Mod";
        requiredVersion = 0.1;
        requiredAddons[] =
        {
            "SWLW_clones_spec",
                // Clone Commando Helmets, Uniforms, and Units
            "SWLB_clones_spec_backpacks",
                // Clone Commando Backpacks
            "ls_armor_bluefor"
                // Helmet holder
        };
        units[] =
        {
            // Units
            "DAC_Unit_Commando_Base",
            "DAC_Unit_Commando_SL_Base",
            "DAC_Unit_Commando_EOD_Base",
            "DAC_Unit_Commando_DM_Base",
            "DAC_Unit_Commando_Tech_Base",

            // Backpacks
            "DAC_Backpack_Base",
            "DAC_Backpack_Base_Huge",
            "DAC_Backpack_RTO_Base",
            "DAC_Backpack_RTO_Base_Huge",
            "DAC_Backpack_EOD_Base",
            "DAC_Backpack_EOD_Base_Huge",
            "DAC_Backpack_Tech_Base",
            "DAC_Backpack_Tech_Base_Huge",

            // Placeable Helmets
            "DAC_HelmetHolder_Commando_Base"
        };
        weapons[] =
        {
            // Helmets
            "DAC_Helmet_Commando_Base",

            // Uniforms
            "DAC_Uniform_Commando_Base",

            // Vests
            "DAC_Vest_Commando_Base",
            "DAC_Vest_Commando_SL_Base",
            "DAC_Vest_Commando_EOD_Base",
            "DAC_Vest_Commando_DM_Base",
            "DAC_Vest_Commando_Tech_Base"
        };
    };
};