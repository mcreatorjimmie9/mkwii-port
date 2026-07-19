/* Function at 0x805C167C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805C167C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805C1684
    /* lis r7, 0 */ // 0x805C1688
    *(0x14 + r1) = r0; // stw @ 0x805C168C
    r5 = r5 + 0; // 0x805C1690
    /* li r0, 0 */ // 0x805C1694
    /* li r6, 0 */ // 0x805C1698
    *(0xc + r1) = r31; // stw @ 0x805C169C
    r31 = r3;
    *(4 + r3) = r4; // stw @ 0x805C16A4
    /* li r4, 0 */ // 0x805C16A8
    *(0 + r3) = r5; // stw @ 0x805C16AC
    /* lis r5, 0 */ // 0x805C16B0
    r5 = r5 + 0; // 0x805C16B4
    *(8 + r3) = r0; // stw @ 0x805C16B8
    r3 = *(0 + r7); // lwz @ 0x805C16BC
    FUN_805CFD60(r5, r5); // bl 0x805CFD60
    *(8 + r31) = r3; // stw @ 0x805C16C4
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x805C16CC
    r0 = *(0x14 + r1); // lwz @ 0x805C16D0
    return;
}