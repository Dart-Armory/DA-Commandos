class CfgVehicles
{
    class WeaponHolder;
    class GROUND_CLASS(Holder_Base): WeaponHolder
    {
        SCOPE_PRIVATE;
        editorCategory = QCLASS(Edcat_Objects);
        editorSubcategory = QCLASS(Edsubcat_Helmets);

        class TransportItems {};
    };
};