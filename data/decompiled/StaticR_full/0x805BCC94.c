/* Function at 0x805BCC94, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805BCC94(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x24 + r1) = r0; // stw @ 0x805BCCA0
    *(0x1c + r1) = r31; // stw @ 0x805BCCA4
    r31 = r4;
    if (>=) goto 0x0x805bccb4;
    /* li r3, -0x270e */ // 0x805BCCB0
    if (<=) goto 0x0x805bccc0;
    /* li r3, 0x270e */ // 0x805BCCBC
    if (!=) goto 0x0x805bccd0;
    /* neg r0, r3 */ // 0x805BCCC8
    /* extsh r3, r0 */ // 0x805BCCCC
    r5 = r3 + 0x270e; // 0x805BCCD0
    /* lis r0, 0x4330 */ // 0x805BCCD4
    /* xoris r3, r5, 0x8000 */ // 0x805BCCD8
    *(0xc + r1) = r3; // stw @ 0x805BCCDC
    /* lis r3, 0x68dc */ // 0x805BCCE0
    /* lis r4, 0 */ // 0x805BCCE4
    *(8 + r1) = r0; // stw @ 0x805BCCE8
    r0 = r3 + -0x7453; // 0x805BCCEC
    /* mulhw r0, r0, r5 */ // 0x805BCCF0
    /* lfd f2, 0(r4) */ // 0x805BCCF4
    /* lfd f1, 8(r1) */ // 0x805BCCF8
    /* lis r3, 0 */ // 0x805BCCFC
    /* lfs f0, 0(r3) */ // 0x805BCD00
    /* fsubs f1, f1, f2 */ // 0x805BCD04
    r0 = r0 >> 0xb; // srawi
    /* fmuls f1, f0, f1 */ // 0x805BCD0C
    /* srwi r3, r0, 0x1f */ // 0x805BCD10
    r0 = r0 + r3; // 0x805BCD14
    /* extsh r3, r0 */ // 0x805BCD18
    FUN_805BCB24(); // bl 0x805BCB24
    if (==) goto 0x0x805bcd2c;
    /* b 0x805bcd30 */ // 0x805BCD28
    /* fneg f1, f1 */ // 0x805BCD2C
    r0 = *(0x24 + r1); // lwz @ 0x805BCD30
    r31 = *(0x1c + r1); // lwz @ 0x805BCD34
    return;
}