class Headgear_Base_F;
class Ground_DAC_Helmet_Commando_Base: Headgear_Base_F
{
    SCOPE_PUBLIC;
    author = "DartRuffian";

    // Editor Attributes
    editorCategory = QCLASS(Objects);
    editorSubcategory = QCLASS(Edsubcat_Helmets);

    displayName = "Katarn I Commando Helmet";
    class TransportItems
    {
        ITEM_XX(CLASS(Helmet_Commando_Base),1);
    };
};

GROUND_HOLDER(CLASS(Helmet_Imperial_Commando),"Katarn I Imperial Commando Helmet");

GROUND_HOLDER(CLASS(Helmet_XRay_SL),"Katarn I Clone Commando Helmet (X-Ray [Nix]");
GROUND_HOLDER(CLASS(Helmet_XRay_EOD),"Katarn I Clone Commando Helmet (X-Ray [Dart]");
GROUND_HOLDER(CLASS(Helmet_XRay_Medic),"Katarn I Clone Commando Helmet (X-Ray [Doktor]");
GROUND_HOLDER(CLASS(Helmet_XRay_DM),"Katarn I Clone Commando Helmet (X-Ray [Frost]");

GROUND_HOLDER(CLASS(Helmet_Zulu_SL),"Katarn I Clone Commando Helmet (Zulu [Galahad]");
GROUND_HOLDER(CLASS(Helmet_Zulu_EOD),"Katarn I Clone Commando Helmet (Zulu [Thor]");
GROUND_HOLDER(CLASS(Helmet_Zulu_Medic),"Katarn I Clone Commando Helmet (Zulu [Cherryy]");
GROUND_HOLDER(CLASS(Helmet_Zulu_DM),"Katarn I Clone Commando Helmet (Zulu [Cyan]");