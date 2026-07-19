/* Function at 0x805BC9F4, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805BC9F4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x805BC9FC
    /* subfic r8, r4, 0x17 */ // 0x805BCA00
    *(0x24 + r1) = r0; // stw @ 0x805BCA04
    /* slwi r0, r4, 2 */ // 0x805BCA08
    r7 = r7 + 0; // 0x805BCA0C
    *(0x1c + r1) = r31; // stw @ 0x805BCA10
    r31 = r5;
    /* lwzx r0, r7, r0 */ // 0x805BCA18
    /* stfs f1, 8(r1) */ // 0x805BCA1C
    r9 = *(8 + r1); // lwz @ 0x805BCA20
    *(0x18 + r1) = r30; // stw @ 0x805BCA24
    r30 = r4;
    r7 = r9 rlwinm 9; // rlwinm
    r4 = r9 >> r8; // srw
    r0 = r4 & r0; // 0x805BCA34
    *(0x10 + r1) = r0; // stw @ 0x805BCA38
    r7 = r7 + -0x7f; // 0x805BCA3C
    r4 = r3;
    *(0xc + r1) = r7; // stb @ 0x805BCA44
    /* li r7, 1 */ // 0x805BCA4C
    FUN_805BC798(r7, r4, r3, r7); // bl 0x805BC798
    r6 = r3;
    r4 = r30;
    r5 = r31;
    /* li r7, 4 */ // 0x805BCA64
    FUN_805BC798(r6, r4, r5, r3, r7); // bl 0x805BC798
    r0 = *(0x24 + r1); // lwz @ 0x805BCA6C
    r31 = *(0x1c + r1); // lwz @ 0x805BCA70
    r30 = *(0x18 + r1); // lwz @ 0x805BCA74
    return;
}