/* Function at 0x807FA2B0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FA2B0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807FA2C0
    r30 = r3;
    r0 = *(0xc0 + r3); // lwz @ 0x807FA2C8
    if (==) goto 0x0x807fa318;
    r3 = *(8 + r3); // lwz @ 0x807FA2D4
    /* lis r31, 0 */ // 0x807FA2D8
    /* lis r5, 0 */ // 0x807FA2DC
    /* lfs f1, 0(r31) */ // 0x807FA2E0
    /* lfs f2, 0(r5) */ // 0x807FA2E4
    /* li r4, 1 */ // 0x807FA2E8
    r3 = *(0x28 + r3); // lwz @ 0x807FA2EC
    /* li r5, 1 */ // 0x807FA2F0
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* li r3, 0x5a */ // 0x807FA2F8
    /* li r0, 3 */ // 0x807FA2FC
    *(0xf4 + r30) = r3; // stw @ 0x807FA300
    r3 = r30;
    /* lfs f1, 0(r31) */ // 0x807FA308
    /* li r4, 0x249 */ // 0x807FA30C
    *(0xc0 + r30) = r0; // stw @ 0x807FA310
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r0 = *(0x14 + r1); // lwz @ 0x807FA318
    r31 = *(0xc + r1); // lwz @ 0x807FA31C
    r30 = *(8 + r1); // lwz @ 0x807FA320
    return;
}