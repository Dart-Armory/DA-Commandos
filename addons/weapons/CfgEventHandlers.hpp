class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PreStart_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};


class Extended_Reloaded_EventHandlers
{
    class CAManBase
    {
        class GVAR(attachmentSwap)
        {
            reloaded = QUOTE(_this call FUNC(attachmentSwap));
        };
    };
};