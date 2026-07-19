/* Function at 0x806F027C, size=248 bytes */
/* Stack frame: 0 bytes */

int FUN_806F027C(int r3, int r4, int r5)
{
    /* li r0, 3 */ // 0x806F027C
    /* li r5, 0 */ // 0x806F0280
    /* mtctr r0 */ // 0x806F0284
    /* clrlwi r0, r5, 0x18 */ // 0x806F0288
    /* mulli r0, r0, 0x30 */ // 0x806F028C
    r4 = r3 + r0; // 0x806F0290
    r4 = *(0x34 + r4); // lwz @ 0x806F0294
    if (>) goto 0x0x806f02a4;
    /* b 0x806f02a8 */ // 0x806F02A0
    /* li r4, -1 */ // 0x806F02A4
    if (==) goto 0x0x806f02bc;
    r3 = r3 + r0; // 0x806F02B0
    r3 = r3 + 0x40; // 0x806F02B4
    return;
    r5 = r5 + 1; // 0x806F02BC
    /* clrlwi r0, r5, 0x18 */ // 0x806F02C0
    /* mulli r0, r0, 0x30 */ // 0x806F02C4
    r4 = r3 + r0; // 0x806F02C8
    r4 = *(0x34 + r4); // lwz @ 0x806F02CC
    if (>) goto 0x0x806f02dc;
    /* b 0x806f02e0 */ // 0x806F02D8
    /* li r4, -1 */ // 0x806F02DC
    if (==) goto 0x0x806f02f4;
    r3 = r3 + r0; // 0x806F02E8
    r3 = r3 + 0x40; // 0x806F02EC
    return;
    r5 = r5 + 1; // 0x806F02F4
    /* clrlwi r0, r5, 0x18 */ // 0x806F02F8
    /* mulli r0, r0, 0x30 */ // 0x806F02FC
    r4 = r3 + r0; // 0x806F0300
    r4 = *(0x34 + r4); // lwz @ 0x806F0304
    if (>) goto 0x0x806f0314;
    /* b 0x806f0318 */ // 0x806F0310
    /* li r4, -1 */ // 0x806F0314
    if (==) goto 0x0x806f032c;
    r3 = r3 + r0; // 0x806F0320
    r3 = r3 + 0x40; // 0x806F0324
    return;
    r5 = r5 + 1; // 0x806F032C
    /* clrlwi r0, r5, 0x18 */ // 0x806F0330
    /* mulli r0, r0, 0x30 */ // 0x806F0334
    r4 = r3 + r0; // 0x806F0338
    r4 = *(0x34 + r4); // lwz @ 0x806F033C
    if (>) goto 0x0x806f034c;
    /* b 0x806f0350 */ // 0x806F0348
    /* li r4, -1 */ // 0x806F034C
    if (==) goto 0x0x806f0364;
    r3 = r3 + r0; // 0x806F0358
    r3 = r3 + 0x40; // 0x806F035C
    return;
    r5 = r5 + 1; // 0x806F0364
    if (counter-- != 0) goto 0x0x806f0288;
    /* li r3, 0 */ // 0x806F036C
    return;
}