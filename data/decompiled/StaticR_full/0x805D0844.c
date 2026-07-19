/* Function at 0x805D0844, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_805D0844(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r0, 0 */ // 0x805D0850
    /* stmw r27, 0xc(r1) */ // 0x805D0854
    r27 = r3;
    /* li r28, 0 */ // 0x805D085C
    /* lis r31, 0 */ // 0x805D0860
    /* lis r29, 0 */ // 0x805D0864
    /* lis r30, 0 */ // 0x805D0868
    *(0x619 + r3) = r0; // stb @ 0x805D086C
    /* b 0x805d0974 */ // 0x805D0870
    r3 = *(0 + r29); // lwz @ 0x805D0874
    r3 = *(0x4c + r3); // lwz @ 0x805D0878
}