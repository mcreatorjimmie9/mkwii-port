/* Function at 0x8074FF7C, size=80 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_8074FF7C(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r10, 0 */ // 0x8074FF84
    /* li r6, 1 */ // 0x8074FF88
    *(0x24 + r1) = r0; // stw @ 0x8074FF8C
    r9 = *(0x10 + r10); // lwz @ 0x8074FF9C
    r8 = *(0x14 + r10); // lwz @ 0x8074FFA4
    r0 = *(0x18 + r10); // lbz @ 0x8074FFA8
    *(0x10 + r1) = r9; // stw @ 0x8074FFAC
    *(0xc + r1) = r8; // stw @ 0x8074FFB0
    *(8 + r1) = r0; // stb @ 0x8074FFB4
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x8074FFBC
    return;
}