/* Function at 0x8074FE74, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8074FE74(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8074FE7C
    *(0x14 + r1) = r0; // stw @ 0x8074FE80
    r5 = r5 + 0; // 0x8074FE84
    *(0xc + r1) = r31; // stw @ 0x8074FE88
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8074FE94
    r3 = r31;
    r4 = r4 + 0; // 0x8074FE9C
    *(0 + r31) = r4; // stw @ 0x8074FEA0
    r31 = *(0xc + r1); // lwz @ 0x8074FEA4
    r0 = *(0x14 + r1); // lwz @ 0x8074FEA8
    return;
}