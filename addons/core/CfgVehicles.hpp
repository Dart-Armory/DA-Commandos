class CfgVehicles
{
    class WeaponHolder;
    class GROUND_CLASS(Holder_Base): WeaponHolder
    {
        SCOPE_PRIVATE;
        editorCategory = QCLASS(Objects);
        editorSubcategory = QCLASS(Edsubcat_Helmets);

        class TransportItems {};
    };
};