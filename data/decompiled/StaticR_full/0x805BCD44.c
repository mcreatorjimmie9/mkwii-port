/* Function at 0x805BCD44, size=168 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_805BCD44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    r3 = *(4 + r3); // lhz @ 0x805BCD4C
    *(0x24 + r1) = r0; // stw @ 0x805BCD50
    r0 = *(4 + r4); // lhz @ 0x805BCD54
    /* subf r0, r3, r0 */ // 0x805BCD58
    /* extsh r3, r0 */ // 0x805BCD5C
    if (>=) goto 0x0x805bcd6c;
    /* li r3, -0x270e */ // 0x805BCD68
    /* extsh r0, r3 */ // 0x805BCD6C
    if (<=) goto 0x0x805bcd7c;
    /* li r3, 0x270e */ // 0x805BCD78
    /* extsh r3, r3 */ // 0x805BCD7C
    /* lis r0, 0x4330 */ // 0x805BCD80
    r6 = r3 + 0x270e; // 0x805BCD84
    /* lis r5, 0 */ // 0x805BCD88
    /* xoris r3, r6, 0x8000 */ // 0x805BCD8C
    *(0xc + r1) = r3; // stw @ 0x805BCD90
    /* lis r3, 0x68dc */ // 0x805BCD94
    /* lis r4, 0 */ // 0x805BCD98
    *(8 + r1) = r0; // stw @ 0x805BCD9C
    r0 = r3 + -0x7453; // 0x805BCDA0
    /* mulhw r0, r0, r6 */ // 0x805BCDA4
    /* lfd f2, 0(r5) */ // 0x805BCDA8
    /* lfd f1, 8(r1) */ // 0x805BCDAC
    /* lfs f0, 0(r4) */ // 0x805BCDB0
    /* fsubs f1, f1, f2 */ // 0x805BCDB4
    r0 = r0 >> 0xb; // srawi
    /* srwi r3, r0, 0x1f */ // 0x805BCDBC
    /* fmuls f1, f0, f1 */ // 0x805BCDC0
    r0 = r0 + r3; // 0x805BCDC4
    /* extsh r3, r0 */ // 0x805BCDC8
    FUN_805BCB24(); // bl 0x805BCB24
    /* fctiwz f0, f1 */ // 0x805BCDD0
    r0 = *(0x24 + r1); // lwz @ 0x805BCDD4
    /* stfd f0, 0x10(r1) */ // 0x805BCDD8
    r3 = *(0x14 + r1); // lwz @ 0x805BCDDC
    return;
}