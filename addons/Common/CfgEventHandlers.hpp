class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_InitPost_EventHandlers
{
    class CAManBase
    {
        class GVAR(addRadio)
        {
            init = QUOTE(_this call GFUNC(addRadio));
        };
    };
};