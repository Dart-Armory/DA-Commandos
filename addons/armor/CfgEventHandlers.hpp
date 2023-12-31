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


class Extended_InitPost_EventHandlers
{
    class CAManBase
    {
        class GVAR(switchGoggles)
        {
            init = QUOTE(_this call FUNC(switchGoggles));
        };
    };
};