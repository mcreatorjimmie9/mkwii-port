/* Function at 0x805F081C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805F081C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r0 = r4 rlwinm 2; // rlwinm
    *(0xc + r1) = r31; // stw @ 0x805F082C
    *(8 + r1) = r30; // stw @ 0x805F0830
    r30 = r3;
    r5 = *(0x14 + r3); // lwz @ 0x805F0838
    r6 = *(0x18 + r3); // lwz @ 0x805F083C
    r4 = *(0xc + r5); // lwz @ 0x805F0840
    r3 = r6;
    /* lwzx r31, r4, r0 */ // 0x805F0848
    /* lfs f0, 0x20(r31) */ // 0x805F084C
    /* stfs f0, 0x20(r6) */ // 0x805F0850
    /* lfs f0, 0x24(r31) */ // 0x805F0854
    /* stfs f0, 0x24(r6) */ // 0x805F0858
    /* lfs f0, 0x28(r31) */ // 0x805F085C
    /* stfs f0, 0x28(r6) */ // 0x805F0860
    FUN_805E3430(); // bl 0x805E3430
}