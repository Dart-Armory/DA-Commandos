#define LOAD_BACKPACK_COMMANDO 740
#define LOAD_BACKPACK_COMMANDO_HUGE 1100

// Uses ##_OPFOR so that it doesn't preprocess to _0
#define OPFOR_UNIT(UNIT) class UNIT##_OPFOR: UNIT \
{ \
    side = OPFOR; \
}