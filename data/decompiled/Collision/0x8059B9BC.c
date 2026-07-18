/*
 * Address: 0x8059B9BC
 * REL Offset: 0x00089120
 * Function: setBsp__Q24Kart16KartWheelPhysicsFv
 * Size: 13 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ setBsp__Q24Kart16KartWheelPhysicsFv(void)
{

    /* 0x89120 */ // mtctr r12
    /* 0x89124 */ // bctrl 
    /* 0x89128 */ r29 = 0x00000;
    /* 0x8912C */ r3 = *(r29);
    /* 0x89130 */ // cmpwi r3, 0
    /* 0x89134 */ if (0x400 == 0) goto loc_0x0400;
    /* 0x89138 */ r0 = *(u8*)(r3 + 0x20);
    /* 0x8913C */ // cmpwi r0, 0
    /* 0x89140 */ if (0x400 == 0) goto loc_0x0400;
    /* 0x89144 */ sub_0x002A6858();
    /* 0x89148 */ // clrlwi r0, r3, 0x18
    /* 0x8914C */ // cmplwi r0, 1
    /* 0x89150 */ if (0x280 != 0) goto loc_0x0280;
}
