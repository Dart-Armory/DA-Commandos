// Backpack normal/huge variant sizes
#define NORM_SIZE 740
#define HUGE_SIZE 1100


#define HELMET_HOLDER(CLASS_NAME, DISPLAY_NAME, HELM_NAME) \
class CLASS_NAME: DAC_HelmetHolder_Commando_Base \
{ \
    displayName = DISPLAY_NAME; \
    class TransportItems \
    { \
        class HELM_NAME \
        { \
            name = HELM_NAME; \
            count = 1; \
        }; \
    }; \
};