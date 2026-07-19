/*
 * Address: 0x805756C8
 * REL Offset: 0x00062E2C
 * Function: PlayerSub18_handleMushroomCollision
 * Size: 17 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_handleMushroomCollision(/* unknown params */)
{

    /* 0x62E2C */ // bctrl 
    /* 0x62E30 */ goto loc_0x0114;
    /* 0x62E34 */ // cmpwi r4, 1
    /* 0x62E38 */ if (0x114 != 0) goto loc_0x0114;
    /* 0x62E3C */ r3 = *(u32*)(r3 + 0x10);
    /* 0x62E40 */ // clrlwi r4, r0, 0x18
    /* 0x62E44 */ r12 = *(r3);
    /* 0x62E48 */ r12 = *(u32*)(r12 + 0x34);
    /* 0x62E4C */ // mtctr r12
    /* 0x62E50 */ // bctrl 
    /* 0x62E54 */ goto loc_0x0114;
    /* 0x62E58 */ r3 = r27 + 0x4;
    /* 0x62E5C */ sub_0x0001B3D4();
    /* 0x62E60 */ r30 = r3;
    /* 0x62E64 */ r3 = r27 + 0x4;
    /* 0x62E68 */ sub_0x0001B3D4();
    /* 0x62E6C */ r4 = 0x00000;
}
