/*
 * Address: 0x8072CA58
 * REL Offset: 0x0021A1BC
 * Function: doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo
 * Size: 56 instructions
 * AUTO-GENERATED PSEUDOCODE - Do not edit
 */

u32 /* or f32 */ doUpdate___Q25Enemy13AIControlBaseFRCQ25Enemy9DriveInfo(/* unknown params */)
{

    /* 0x21A1BC */ r0 = *(u32*)(r4 + 0x24);
    /* 0x21A1C0 */ // cmpwi r0, 4
    /* 0x21A1C4 */ if (0x10 != 0) goto loc_0x0010;
    /* 0x21A1C8 */ goto loc_0x0068;
    /* 0x21A1CC */ r29 = *(u32*)(r4 + 0x10);
    /* 0x21A1D0 */ // cmpwi r29, 0
    /* 0x21A1D4 */ if (0x2c == 0) goto loc_0x002C;
    /* 0x21A1D8 */ r0 = *(u32*)(r4 + 0x28);
    /* 0x21A1DC */ // cmpwi r0, 4
    /* 0x21A1E0 */ if (0x2c != 0) goto loc_0x002C;
    /* 0x21A1E4 */ goto loc_0x0068;
    /* 0x21A1E8 */ r29 = *(u32*)(r4 + 0x14);
    /* 0x21A1EC */ // cmpwi r29, 0
    /* 0x21A1F0 */ if (0x48 == 0) goto loc_0x0048;
    /* 0x21A1F4 */ r0 = *(u32*)(r4 + 0x2C);
    /* 0x21A1F8 */ // cmpwi r0, 4
    /* 0x21A1FC */ if (0x48 != 0) goto loc_0x0048;
    /* 0x21A200 */ goto loc_0x0068;
    /* 0x21A204 */ r29 = *(u32*)(r4 + 0x18);
    /* 0x21A208 */ // cmpwi r29, 0
    /* 0x21A20C */ if (0x64 == 0) goto loc_0x0064;
    /* 0x21A210 */ r0 = *(u32*)(r4 + 0x30);
    /* 0x21A214 */ // cmpwi r0, 4
    /* 0x21A218 */ if (0x64 != 0) goto loc_0x0064;
    /* 0x21A21C */ goto loc_0x0068;
    /* 0x21A220 */ r29 = 0x0 /* 0 */;
    /* 0x21A224 */ r4 = *(u32*)(r3 + 0xC);
    /* 0x21A228 */ r0 = r4 + 0x-1;
    /* 0x21A22C */ *(u32*)(r3 + 0xC) = r0;
    /* 0x21A230 */ r3 = r28;
    /* 0x21A234 */ sub_0x00003938();
    /* 0x21A238 */ // cmpwi r3, 0
    /* 0x21A23C */ if (0xf4 == 0) goto loc_0x00F4;
    /* 0x21A240 */ // cmpwi r30, 0
    /* 0x21A244 */ if (0xa8 == 0) goto loc_0x00A8;
    /* 0x21A248 */ r3 = 0x1 /* 1 */;
    /* 0x21A24C */ *(u8*)(r28 + 0x1A0) = r3;
    /* 0x21A250 */ r0 = 0x0 /* 0 */;
    /* 0x21A254 */ *(u32*)(r28 + 0x1A4) = r3;
    /* 0x21A258 */ *(u32*)(r31 + 0xC) = r0;
    /* 0x21A25C */ *(u32*)(r31 + 0x8) = r0;
    /* 0x21A260 */ goto loc_0x00F4;
    /* 0x21A264 */ // cmpwi r29, 0
    /* 0x21A268 */ if (0xd0 == 0) goto loc_0x00D0;
    /* 0x21A26C */ r0 = 0x1 /* 1 */;
    /* 0x21A270 */ *(u8*)(r28 + 0x1A0) = r0;
    /* 0x21A274 */ r3 = 0x2 /* 2 */;
    /* 0x21A278 */ *(u32*)(r28 + 0x1A4) = r3;
    /* 0x21A27C */ r0 = 0x0 /* 0 */;
    /* 0x21A280 */ *(u32*)(r31 + 0xC) = r0;
    /* 0x21A284 */ *(u32*)(r31 + 0x8) = r0;
    /* 0x21A288 */ goto loc_0x00F4;
    /* 0x21A28C */ r0 = *(u32*)(r31 + 0xC);
    /* 0x21A290 */ // cmpwi r0, 0
    /* 0x21A294 */ if (0xf4 >= 0) goto loc_0x00F4;
    /* 0x21A298 */ r3 = 0x1 /* 1 */;
}
