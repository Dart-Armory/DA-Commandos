#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        author = "DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core)
        };
        units[] =
        {
            // Units
            QCLASS(Unit_XRay_SL),
            QCLASS(Unit_XRay_EOD),
            QCLASS(Unit_XRay_Medic),
            QCLASS(Unit_XRay_DM),
            QCLASS(Unit_Zulu_SL),
            QCLASS(Unit_Zulu_EOD),
            QCLASS(Unit_Zulu_Medic),
            QCLASS(Unit_Zulu_DM),

            // Backpacks
            QCLASS(Backpack_XRay_SL),
            QCLASS(Backpack_XRay_SL_Huge),
            QCLASS(Backpack_XRay_EOD),
            QCLASS(Backpack_XRay_EOD_Huge),
            QCLASS(Backpack_XRay_Medic),
            QCLASS(Backpack_XRay_Medic_Huge),
            QCLASS(Backpack_XRay_DM),
            QCLASS(Backpack_XRay_DM_Huge),
            QCLASS(Backpack_Zulu_SL),
            QCLASS(Backpack_Zulu_SL_Huge),
            QCLASS(Backpack_Zulu_EOD),
            QCLASS(Backpack_Zulu_EOD_Huge),
            QCLASS(Backpack_Zulu_Medic),
            QCLASS(Backpack_Zulu_Medic_Huge),
            QCLASS(Backpack_Zulu_DM),
            QCLASS(Backpack_Zulu_DM_Huge),

            // Placeable Helmets
            QGROUND_CLASS(Helmet_XRay_SL),
            QGROUND_CLASS(Helmet_XRay_EOD),
            QGROUND_CLASS(Helmet_XRay_Medic),
            QGROUND_CLASS(Helmet_XRay_DM),
            QGROUND_CLASS(Helmet_Zulu_SL),
            QGROUND_CLASS(Helmet_Zulu_EOD),
            QGROUND_CLASS(Helmet_Zulu_Medic),
            QGROUND_CLASS(Helmet_Zulu_DM),
        };
        weapons[] =
        {
            // Helmets
            QCLASS(Helmet_XRay_SL),
            QCLASS(Helmet_XRay_EOD),
            QCLASS(Helmet_XRay_Medic),
            QCLASS(Helmet_XRay_DM),
            QCLASS(Helmet_Zulu_SL),
            QCLASS(Helmet_Zulu_EOD),
            QCLASS(Helmet_Zulu_Medic),
            QCLASS(Helmet_Zulu_DM),

            // Uniforms
            QCLASS(Uniform_XRay_SL),
            QCLASS(Uniform_XRay_EOD),
            QCLASS(Uniform_XRay_Medic),
            QCLASS(Uniform_XRay_DM),
            QCLASS(Uniform_Zulu_SL),
            QCLASS(Uniform_Zulu_EOD),
            QCLASS(Uniform_Zulu_Medic),
            QCLASS(Uniform_Zulu_DM)

            // Vests
        };
        VERSION_CONFIG;
    };
};

#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"