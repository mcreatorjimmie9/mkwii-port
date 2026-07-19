/* Function at 0x8090C074, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8090C074(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x8090C080
    /* fmr f31, f1 */ // 0x8090C084
    *(0x14 + r1) = r31; // stw @ 0x8090C088
    r31 = r6;
    *(0x10 + r1) = r30; // stw @ 0x8090C090
    r30 = r5;
    *(0xc + r1) = r29; // stw @ 0x8090C098
    r29 = r4;
    *(8 + r1) = r28; // stw @ 0x8090C0A0
    r28 = r3;
    r12 = *(0 + r3); // lwz @ 0x8090C0A8
    r12 = *(0x74 + r12); // lwz @ 0x8090C0AC
    /* mtctr r12 */ // 0x8090C0B0
    /* bctrl  */ // 0x8090C0B4
    /* fmr f1, f31 */ // 0x8090C0B8
    r3 = *(0xac + r28); // lwz @ 0x8090C0BC
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    r0 = *(0x24 + r1); // lwz @ 0x8090C0D0
    /* lfd f31, 0x18(r1) */ // 0x8090C0D4
    r31 = *(0x14 + r1); // lwz @ 0x8090C0D8
    r30 = *(0x10 + r1); // lwz @ 0x8090C0DC
    r29 = *(0xc + r1); // lwz @ 0x8090C0E0
    r28 = *(8 + r1); // lwz @ 0x8090C0E4
    return;
}