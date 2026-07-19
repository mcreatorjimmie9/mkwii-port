/* Function at 0x8060E2C0, size=144 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8060E2C0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8060E2D4
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8060E2DC
    r4 = *(4 + r5); // lwz @ 0x8060E2E0
    r0 = *(0xc + r4); // lwz @ 0x8060E2E4
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r4) = r0; // stw @ 0x8060E2EC
    FUN_8061E010(); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060E2F4
    /* lis r4, 0 */ // 0x8060E2F8
    /* lfs f1, 0(r4) */ // 0x8060E2FC
    /* li r4, 0x116 */ // 0x8060E300
    r12 = *(0xe0 + r12); // lwz @ 0x8060E304
    /* mtctr r12 */ // 0x8060E308
    /* bctrl  */ // 0x8060E30C
    /* li r0, 0 */ // 0x8060E310
    *(0x18c + r30) = r0; // sth @ 0x8060E314
    r3 = *(0x260 + r30); // lwz @ 0x8060E318
    /* li r4, 0 */ // 0x8060E31C
    FUN_80642784(r4); // bl 0x80642784
    if (==) goto 0x0x8060e338;
    /* lis r3, 0 */ // 0x8060E32C
    /* lfs f0, 0(r3) */ // 0x8060E330
    /* stfs f0, 0x178(r30) */ // 0x8060E334
    r0 = *(0x14 + r1); // lwz @ 0x8060E338
    r31 = *(0xc + r1); // lwz @ 0x8060E33C
    r30 = *(8 + r1); // lwz @ 0x8060E340
    return;
}