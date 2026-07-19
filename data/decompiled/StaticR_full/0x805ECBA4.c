/* Function at 0x805ECBA4, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_805ECBA4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x805ECBB8
    r29 = r3;
    r0 = *(4 + r3); // lwz @ 0x805ECBC0
    /* rlwinm. r0, r0, 0, 7, 7 */ // 0x805ECBC4
    if (!=) goto 0x0x805ecc0c;
    r31 = r29;
    /* li r30, 0 */ // 0x805ECBD0
    r3 = *(0x1c + r31); // lwz @ 0x805ECBD4
    r4 = *(0x14 + r31); // lwz @ 0x805ECBD8
    r12 = *(0 + r3); // lwz @ 0x805ECBDC
    r4 = *(0 + r4); // lwz @ 0x805ECBE0
    r12 = *(0x3c + r12); // lwz @ 0x805ECBE4
    /* mtctr r12 */ // 0x805ECBE8
    /* bctrl  */ // 0x805ECBEC
    r30 = r30 + 1; // 0x805ECBF0
    r31 = r31 + 4; // 0x805ECBF4
    if (<) goto 0x0x805ecbd4;
    r0 = *(4 + r29); // lwz @ 0x805ECC00
    r0 = r0 | 0x100; // 0x805ECC04
    *(4 + r29) = r0; // stw @ 0x805ECC08
    r0 = *(0x24 + r1); // lwz @ 0x805ECC0C
    r31 = *(0x1c + r1); // lwz @ 0x805ECC10
    r30 = *(0x18 + r1); // lwz @ 0x805ECC14
    r29 = *(0x14 + r1); // lwz @ 0x805ECC18
    return;
}