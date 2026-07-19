/* Function at 0x808E08F0, size=916 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 19 function(s) */

int FUN_808E08F0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808E0900
    r31 = r31 + 0; // 0x808E0904
    *(0x18 + r1) = r30; // stw @ 0x808E0908
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808E0910
    r29 = r3;
    *(0x10 + r1) = r28; // stw @ 0x808E0918
    r28 = r4;
    r0 = *(8 + r3); // lwz @ 0x808E0920
    if (==) goto 0x0x808e09d8;
    if (>) goto 0x0x808e0988;
    r4 = *(0xc + r3); // lwz @ 0x808E0934
    if (==) goto 0x0x808e095c;
    r3 = *(4 + r3); // lwz @ 0x808E0940
    r0 = *(0x28 + r3); // lwz @ 0x808E0944
    if (==) goto 0x0x808e095c;
    /* li r5, 1 */ // 0x808E0950
    FUN_805EF4F8(r5); // bl 0x805EF4F8
    /* b 0x808e0964 */ // 0x808E0958
    if (==) goto 0x0x808e0c64;
    if (<) goto 0x0x808e09d8;
    /* lis r3, 0 */ // 0x808E096C
    /* clrlwi r4, r28, 0x18 */ // 0x808E0970
    r3 = *(0 + r3); // lwz @ 0x808E0974
    /* li r5, 0 */ // 0x808E0978
    r3 = *(0x18 + r3); // lwz @ 0x808E097C
    FUN_808E4124(r3, r5); // bl 0x808E4124
    /* b 0x808e09d8 */ // 0x808E0984
    r4 = *(0x10 + r3); // lwz @ 0x808E0988
    if (==) goto 0x0x808e09b0;
    r3 = *(4 + r3); // lwz @ 0x808E0994
    r0 = *(0x28 + r3); // lwz @ 0x808E0998
    if (==) goto 0x0x808e09b0;
    /* li r5, 1 */ // 0x808E09A4
    FUN_805EF4F8(r5); // bl 0x805EF4F8
    /* b 0x808e09b8 */ // 0x808E09AC
    if (==) goto 0x0x808e0c64;
    if (<) goto 0x0x808e09d8;
    /* lis r3, 0 */ // 0x808E09C0
    /* clrlwi r4, r28, 0x18 */ // 0x808E09C4
    r3 = *(0 + r3); // lwz @ 0x808E09C8
    /* li r5, 1 */ // 0x808E09CC
    r3 = *(0x18 + r3); // lwz @ 0x808E09D0
    FUN_808E4124(r3, r5); // bl 0x808E4124
    r0 = r30 + -2; // 0x808E09D8
    if (<=) goto 0x0x808e0b6c;
    if (==) goto 0x0x808e09f8;
    if (==) goto 0x0x808e0ac4;
    /* b 0x808e0c60 */ // 0x808E09F4
    r0 = *(8 + r29); // lwz @ 0x808E09F8
    if (==) goto 0x0x808e0c64;
    r0 = *(0xc + r29); // lwz @ 0x808E0A04
    if (!=) goto 0x0x808e0a14;
    /* b 0x808e0c64 */ // 0x808E0A10
    /* li r28, 0 */ // 0x808E0A14
    r3 = *(4 + r29); // lwz @ 0x808E0A18
    /* clrlwi r4, r28, 0x10 */ // 0x808E0A1C
    r3 = *(0x28 + r3); // lwz @ 0x808E0A20
    FUN_805E6F54(); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E0A28
    if (==) goto 0x0x808e0ab4;
    r3 = *(4 + r29); // lwz @ 0x808E0A34
    r3 = *(0x28 + r3); // lwz @ 0x808E0A38
    if (==) goto 0x0x808e0a9c;
    /* li r4, 0 */ // 0x808E0A44
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x808e0a9c;
    if (!=) goto 0x0x808e0a9c;
    r0 = *(8 + r29); // lwz @ 0x808E0A5C
    if (!=) goto 0x0x808e0a9c;
    r3 = *(4 + r29); // lwz @ 0x808E0A68
    /* li r4, 0 */ // 0x808E0A6C
    /* lfs f1, 0x14(r31) */ // 0x808E0A70
    r3 = *(0x28 + r3); // lwz @ 0x808E0A74
    FUN_805E558C(r4); // bl 0x805E558C
    r3 = *(4 + r29); // lwz @ 0x808E0A7C
    /* clrlwi r4, r28, 0x10 */ // 0x808E0A80
    /* lfs f1, 4(r31) */ // 0x808E0A84
    /* li r5, 1 */ // 0x808E0A88
    r3 = *(0x28 + r3); // lwz @ 0x808E0A8C
    /* lfs f2, 0x10(r31) */ // 0x808E0A90
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* b 0x808e0ab4 */ // 0x808E0A98
    r3 = *(4 + r29); // lwz @ 0x808E0A9C
    /* clrlwi r4, r28, 0x10 */ // 0x808E0AA0
    /* lfs f1, 4(r31) */ // 0x808E0AA4
    r3 = *(0x28 + r3); // lwz @ 0x808E0AA8
    /* lfs f2, 0x10(r31) */ // 0x808E0AAC
    FUN_805E70EC(); // bl 0x805E70EC
    r28 = r28 + 1; // 0x808E0AB4
    if (<) goto 0x0x808e0a18;
    /* b 0x808e0c60 */ // 0x808E0AC0
    r0 = *(0xc + r29); // lwz @ 0x808E0AC4
    if (==) goto 0x0x808e0c64;
    /* li r28, 3 */ // 0x808E0AD0
    r3 = *(4 + r29); // lwz @ 0x808E0AD4
    /* clrlwi r4, r28, 0x10 */ // 0x808E0AD8
    r3 = *(0x28 + r3); // lwz @ 0x808E0ADC
    FUN_805E6F54(); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E0AE4
    if (==) goto 0x0x808e0b5c;
    r3 = *(4 + r29); // lwz @ 0x808E0AF0
    r3 = *(0x28 + r3); // lwz @ 0x808E0AF4
    if (==) goto 0x0x808e0b44;
    /* li r4, 0 */ // 0x808E0B00
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x808e0b44;
    if (!=) goto 0x0x808e0b44;
    r0 = *(8 + r29); // lwz @ 0x808E0B18
    if (!=) goto 0x0x808e0b44;
    r3 = *(4 + r29); // lwz @ 0x808E0B24
    /* clrlwi r4, r28, 0x10 */ // 0x808E0B28
    /* lfs f1, 4(r31) */ // 0x808E0B2C
    /* li r5, 1 */ // 0x808E0B30
    r3 = *(0x28 + r3); // lwz @ 0x808E0B34
    /* lfs f2, 0x10(r31) */ // 0x808E0B38
    FUN_805E73A4(r5); // bl 0x805E73A4
    /* b 0x808e0b5c */ // 0x808E0B40
    r3 = *(4 + r29); // lwz @ 0x808E0B44
    /* clrlwi r4, r28, 0x10 */ // 0x808E0B48
    /* lfs f1, 4(r31) */ // 0x808E0B4C
    r3 = *(0x28 + r3); // lwz @ 0x808E0B50
    /* lfs f2, 0x10(r31) */ // 0x808E0B54
    FUN_805E70EC(); // bl 0x805E70EC
    r28 = r28 + 1; // 0x808E0B5C
    if (<) goto 0x0x808e0ad4;
    /* b 0x808e0c60 */ // 0x808E0B68
    r0 = *(0x10 + r29); // lwz @ 0x808E0B6C
    if (==) goto 0x0x808e0c64;
    r3 = *(0x14 + r29); // lwz @ 0x808E0B78
    if (>=) goto 0x0x808e0b8c;
    /* li r28, 1 */ // 0x808E0B84
    /* b 0x808e0bc4 */ // 0x808E0B88
    r0 = r3 + -0x22; // 0x808E0B8C
    if (<=) goto 0x0x808e0bb8;
    if (==) goto 0x0x808e0bb8;
    if (==) goto 0x0x808e0bb8;
    if (==) goto 0x0x808e0bb8;
    if (!=) goto 0x0x808e0bc0;
    /* li r28, 3 */ // 0x808E0BB8
    /* b 0x808e0bc4 */ // 0x808E0BBC
    /* li r28, 2 */ // 0x808E0BC0
    r3 = *(4 + r29); // lwz @ 0x808E0BC4
    r4 = r28;
    r3 = *(0x28 + r3); // lwz @ 0x808E0BCC
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E0BD4
    if (==) goto 0x0x808e0c2c;
    r3 = *(4 + r29); // lwz @ 0x808E0BE0
    /* li r4, 0 */ // 0x808E0BE4
    r3 = *(0x28 + r3); // lwz @ 0x808E0BE8
    FUN_805E7080(r4); // bl 0x805E7080
    if (==) goto 0x0x808e0c14;
    r3 = *(4 + r29); // lwz @ 0x808E0BF8
    /* li r4, 0 */ // 0x808E0BFC
    r3 = *(0x28 + r3); // lwz @ 0x808E0C00
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x808E0C08
    if (==) goto 0x0x808e0c2c;
    r3 = *(4 + r29); // lwz @ 0x808E0C14
    r4 = r28;
    /* lfs f1, 4(r31) */ // 0x808E0C1C
    r3 = *(0x28 + r3); // lwz @ 0x808E0C20
    /* lfs f2, 0x10(r31) */ // 0x808E0C24
    FUN_805E70EC(r4); // bl 0x805E70EC
    r3 = *(4 + r29); // lwz @ 0x808E0C2C
    /* li r4, 0 */ // 0x808E0C30
    r3 = *(0x28 + r3); // lwz @ 0x808E0C34
    FUN_805E6F54(r4); // bl 0x805E6F54
    r0 = *(4 + r3); // lwz @ 0x808E0C3C
    if (==) goto 0x0x808e0c60;
    r3 = *(4 + r29); // lwz @ 0x808E0C48
    /* li r4, 0 */ // 0x808E0C4C
    /* lfs f1, 4(r31) */ // 0x808E0C50
    r3 = *(0x28 + r3); // lwz @ 0x808E0C54
    /* lfs f2, 0x10(r31) */ // 0x808E0C58
    FUN_805E70EC(r4); // bl 0x805E70EC
    *(8 + r29) = r30; // stw @ 0x808E0C60
    r0 = *(0x24 + r1); // lwz @ 0x808E0C64
    r31 = *(0x1c + r1); // lwz @ 0x808E0C68
    r30 = *(0x18 + r1); // lwz @ 0x808E0C6C
    r29 = *(0x14 + r1); // lwz @ 0x808E0C70
    r28 = *(0x10 + r1); // lwz @ 0x808E0C74
    return;
}