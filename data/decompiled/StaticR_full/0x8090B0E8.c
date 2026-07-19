/* Function at 0x8090B0E8, size=120 bytes */
/* Stack frame: 0 bytes */

int FUN_8090B0E8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    r7 = *(8 + r3); // lhz @ 0x8090B0E8
    /* li r10, 0 */ // 0x8090B0EC
    /* b 0x8090b14c */ // 0x8090B0F0
    /* clrlwi r0, r10, 0x10 */ // 0x8090B0F4
    r6 = *(0xc + r3); // lwz @ 0x8090B0F8
    /* mulli r0, r0, 0x24 */ // 0x8090B0FC
    r8 = *(4 + r3); // lwz @ 0x8090B100
    r9 = r6 + r0; // 0x8090B104
    /* lhzx r6, r6, r0 */ // 0x8090B108
    r0 = *(2 + r9); // lhz @ 0x8090B10C
    /* slwi r6, r6, 5 */ // 0x8090B110
    /* lbzx r6, r8, r6 */ // 0x8090B114
    /* slwi r0, r0, 5 */ // 0x8090B118
    /* lbzx r0, r8, r0 */ // 0x8090B11C
    if (!=) goto 0x0x8090b130;
    if (==) goto 0x0x8090b140;
    if (!=) goto 0x0x8090b148;
    if (!=) goto 0x0x8090b148;
    r3 = r10;
    return;
    /* clrlwi r0, r10, 0x10 */ // 0x8090B14C
    if (<) goto 0x0x8090b0f4;
    /* li r3, 0 */ // 0x8090B158
    return;
}