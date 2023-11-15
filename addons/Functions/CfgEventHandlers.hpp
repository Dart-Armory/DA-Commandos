class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_Reloaded_EventHandlers
{
    class CAManBase
    {
        class GVAR(handleAttachmentSwap)
        {
            reloaded = QUOTE(_this call GFUNC(handleAttachmentSwap));
        };
    };
};