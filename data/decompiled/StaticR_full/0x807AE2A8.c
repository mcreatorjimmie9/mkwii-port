/* Function at 0x807AE2A8, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807AE2A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x807AE2B0
    *(0xc + r1) = r31; // stw @ 0x807AE2B8
    *(8 + r1) = r30; // stw @ 0x807AE2BC
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x807AE2C4
    r0 = *(0xb74 + r4); // lwz @ 0x807AE2C8
    if (==) goto 0x0x807ae2e8;
    r4 = *(0xb70 + r4); // lwz @ 0x807AE2D4
    r0 = r4 + -0xb; // 0x807AE2D8
    if (<=) goto 0x0x807ae2e8;
    FUN_807AE0F0(); // bl 0x807AE0F0
    /* li r31, 0 */ // 0x807AE2E8
    r3 = *(0x14 + r30); // lwz @ 0x807AE2EC
    if (==) goto 0x0x807ae308;
    r12 = *(0 + r3); // lwz @ 0x807AE2F8
    r12 = *(0xc + r12); // lwz @ 0x807AE2FC
    /* mtctr r12 */ // 0x807AE300
    /* bctrl  */ // 0x807AE304
    r31 = r31 + 1; // 0x807AE308
    r30 = r30 + 4; // 0x807AE30C
    if (<) goto 0x0x807ae2ec;
    r0 = *(0x14 + r1); // lwz @ 0x807AE318
    r31 = *(0xc + r1); // lwz @ 0x807AE31C
    r30 = *(8 + r1); // lwz @ 0x807AE320
    return;
}