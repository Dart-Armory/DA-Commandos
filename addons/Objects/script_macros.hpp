#define GROUND_HOLDER(HELM_NAME, DISPLAY_NAME) class Ground_##HELM_NAME: Ground_DAC_Helmet_Commando_Base \
{ \
    displayName = DISPLAY_NAME; \
    class TransportItems \
    { \
        ITEM_XX(HELM_NAME,1); \
    }; \
}