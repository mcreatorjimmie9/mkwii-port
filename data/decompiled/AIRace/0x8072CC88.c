/*
 * Address: 0x8072CC88
 * REL Offset: 0x0021A3EC
 * Function: update__Q25Enemy12AIPowAvoiderFv
 * Size: 41 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ update__Q25Enemy12AIPowAvoiderFv(void)
{

    /* 0x21A3EC */ r4 = *(u32*)(r4 + 0x144);
    /* 0x21A3F0 */ r27 = *(u32*)(r4 + 0x3C);
    /* 0x21A3F4 */ sub_0xFFFFFFFFFFE635C4();
    /* 0x21A3F8 */ r4 = *(r3);
    /* 0x21A3FC */ r30 = 0x0 /* 0 */;
    /* 0x21A400 */ r0 = *(u32*)(r3 + 0x4);
    /* 0x21A404 */ *(u32*)(r1 + 0x18) = r0;
    /* 0x21A408 */ *(u32*)(r1 + 0x14) = r4;
    /* 0x21A40C */ r0 = *(u32*)(r3 + 0x8);
    /* 0x21A410 */ r3 = r27;
    /* 0x21A414 */ *(u32*)(r1 + 0x1C) = r0;
    /* 0x21A418 */ sub_0x00008024();
    /* 0x21A41C */ // cmpwi r3, 0
    /* 0x21A420 */ if (0x60 == 0) goto loc_0x0060;
    /* 0x21A424 */ r3 = *(u32*)(r27 + 0x14);
    /* 0x21A428 */ r4 = *(u8*)(r3 + 0xB);
    /* 0x21A42C */ r5 = *(u8*)(r3 + 0xA);
    /* 0x21A430 */ // cmplw r4, r5
    /* 0x21A434 */ if (0x60 == 0) goto loc_0x0060;
    /* 0x21A438 */ r3 = r29;
    /* 0x21A43C */ r6 = r1 + 0x14;
    /* 0x21A440 */ sub_0x000001D8();
    /* 0x21A444 */ r0 = 0x1 /* 1 */;
    /* 0x21A448 */ *(u32*)(r29 + 0x4C) = r0;
    /* 0x21A44C */ r0 = *(u32*)(r29 + 0x4C);
    /* 0x21A450 */ // cmpwi r0, 1
    /* 0x21A454 */ if (0x78 == 0) goto loc_0x0078;
    /* 0x21A458 */ // cmpwi r0, 2
    /* 0x21A45C */ if (0xa8 == 0) goto loc_0x00A8;
    /* 0x21A460 */ goto loc_0x01BC;
    /* 0x21A464 */ r3 = r29;
    /* 0x21A468 */ r4 = r1 + 0x14;
    /* 0x21A46C */ sub_0x000003C4();
    /* 0x21A470 */ // cmpwi r3, 0
    /* 0x21A474 */ if (0x9c == 0) goto loc_0x009C;
    /* 0x21A478 */ r3 = *(u32*)(r29 + 0x4C);
    /* 0x21A47C */ r0 = r3 + 0x1;
    /* 0x21A480 */ *(u32*)(r29 + 0x4C) = r0;
    /* 0x21A484 */ goto loc_0x00A8;
    /* 0x21A488 */ r0 = 0x0 /* 0 */;
    /* 0x21A48C */ *(u32*)(r29 + 0x4C) = r0;
}
