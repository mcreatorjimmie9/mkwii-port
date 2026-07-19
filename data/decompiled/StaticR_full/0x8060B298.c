/* Function at 0x8060B298, size=108 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8060B298(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8060B2AC
    r4 = *(0 + r3); // lwz @ 0x8060B2B0
    r4 = *(4 + r4); // lwz @ 0x8060B2B4
    r0 = *(4 + r4); // lwz @ 0x8060B2B8
    r0 = r0 | 8; // 0x8060B2BC
    *(4 + r4) = r0; // stw @ 0x8060B2C0
    r4 = *(0 + r3); // lwz @ 0x8060B2C4
    r4 = *(4 + r4); // lwz @ 0x8060B2C8
    r0 = *(4 + r4); // lwz @ 0x8060B2CC
    r0 = r0 rlwinm 0; // rlwinm
    *(4 + r4) = r0; // stw @ 0x8060B2D4
    r12 = *(0xc + r3); // lwz @ 0x8060B2D8
    r12 = *(0x34 + r12); // lwz @ 0x8060B2DC
    /* mtctr r12 */ // 0x8060B2E0
    /* bctrl  */ // 0x8060B2E4
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lis r4, 0 */ // 0x8060B2F0
    r5 = r31 + 0xd4; // 0x8060B2F4
    r4 = r4 + 0; // 0x8060B2F8
    r3 = r3 + 0xf0; // 0x8060B2FC
    FUN_805E3430(r4, r5, r4, r3); // bl 0x805E3430
}