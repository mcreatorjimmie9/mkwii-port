/* Function at 0x805EB22C, size=76 bytes */
/* Stack frame: 0 bytes */

void FUN_805EB22C(int r5, int r6, int r7)
{
    /* lis r7, 0 */ // 0x805EB22C
    /* li r6, 0 */ // 0x805EB230
    r7 = r7 + 0; // 0x805EB234
    r0 = r5 | 0x4a0; // 0x805EB238
    *(0 + r3) = r7; // stw @ 0x805EB23C
    *(8 + r3) = r6; // sth @ 0x805EB240
    *(0xc + r3) = r6; // stw @ 0x805EB244
    *(0x24 + r3) = r4; // stw @ 0x805EB248
    *(0x28 + r3) = r6; // stw @ 0x805EB24C
    *(0x3c + r3) = r6; // stw @ 0x805EB250
    *(0x40 + r3) = r6; // stw @ 0x805EB254
    *(0x44 + r3) = r6; // stw @ 0x805EB258
    *(0x48 + r3) = r6; // stw @ 0x805EB25C
    *(0x14 + r3) = r6; // stw @ 0x805EB260
    *(0x1c + r3) = r6; // stw @ 0x805EB264
    *(0x18 + r3) = r6; // stw @ 0x805EB268
    *(0x20 + r3) = r6; // stw @ 0x805EB26C
    *(4 + r3) = r0; // stw @ 0x805EB270
    return;
}