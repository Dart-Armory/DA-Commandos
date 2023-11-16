#define MAINPREFIX DA
#define PREFIX DAC

#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\DA\DAC\Common\script_version.hpp"

#define VERSION_ARR MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.14

#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif

#ifdef SUBCOMPONENT
    #ifndef SUBCOMPONENT_BEAUTIFIED
        #define SUBCOMPONENT_BEAUTIFIED SUBCOMPONENT
    #endif
#endif

#define GFUNC(FNCNAME) TRIPLES(PREFIX,fnc,FNCNAME)