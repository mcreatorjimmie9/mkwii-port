/*
 * Address: 0x80575678
 * REL Offset: 0x00062DDC
 * Function: PlayerSub18_handleShellCollision
 * Size: 8 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ PlayerSub18_handleShellCollision(/* unknown params */)
{

    /* 0x62DDC */ if (0x164 != 0) goto loc_0x0164;
    /* 0x62DE0 */ r3 = *(u32*)(r3 + 0x10);
    /* 0x62DE4 */ // clrlwi r4, r0, 0x18
    /* 0x62DE8 */ r12 = *(r3);
    /* 0x62DEC */ r12 = *(u32*)(r12 + 0x34);
    /* 0x62DF0 */ // mtctr r12
    /* 0x62DF4 */ // bctrl 
    /* 0x62DF8 */ goto loc_0x0164;
}
