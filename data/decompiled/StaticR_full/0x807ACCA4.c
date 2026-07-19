/* Function at 0x807ACCA4, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807ACCA4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807ACCB8
    r29 = r3;
    r30 = *(4 + r3); // lwz @ 0x807ACCC0
    r3 = *(0xc + r30); // lwz @ 0x807ACCC4
    r5 = *(0x10 + r30); // lwz @ 0x807ACCC8
    r4 = *(4 + r3); // lwz @ 0x807ACCCC
    FUN_807AD778(); // bl 0x807AD778
    r31 = r3;
    r3 = *(4 + r30); // lwz @ 0x807ACCD8
    /* lfs f1, 0(r31) */ // 0x807ACCDC
    FUN_807AC06C(); // bl 0x807AC06C
    r3 = *(8 + r30); // lwz @ 0x807ACCE4
    /* lfs f1, 0(r31) */ // 0x807ACCE8
    FUN_807AC06C(); // bl 0x807AC06C
    r3 = *(8 + r29); // lwz @ 0x807ACCF0
    FUN_807AC5E8(); // bl 0x807AC5E8
    *(0xc + r29) = r3; // stb @ 0x807ACCF8
    r31 = *(0x1c + r1); // lwz @ 0x807ACCFC
    r30 = *(0x18 + r1); // lwz @ 0x807ACD00
    r29 = *(0x14 + r1); // lwz @ 0x807ACD04
    r0 = *(0x24 + r1); // lwz @ 0x807ACD08
    return;
}