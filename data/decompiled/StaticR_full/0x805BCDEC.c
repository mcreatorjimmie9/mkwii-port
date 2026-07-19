/* Function at 0x805BCDEC, size=176 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_805BCDEC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    r3 = *(4 + r3); // lhz @ 0x805BCDF4
    *(0x24 + r1) = r0; // stw @ 0x805BCDF8
    r0 = *(4 + r4); // lhz @ 0x805BCDFC
    /* subf r0, r3, r0 */ // 0x805BCE00
    /* extsh r3, r0 */ // 0x805BCE04
    if (>=) goto 0x0x805bce14;
    /* li r3, -0x270e */ // 0x805BCE10
    /* extsh r0, r3 */ // 0x805BCE14
    if (<=) goto 0x0x805bce24;
    /* li r3, 0x270e */ // 0x805BCE20
    /* neg r0, r3 */ // 0x805BCE24
    /* lis r4, 0x4330 */ // 0x805BCE28
    /* extsh r3, r0 */ // 0x805BCE2C
    /* lis r5, 0 */ // 0x805BCE30
    r6 = r3 + 0x270e; // 0x805BCE34
    *(8 + r1) = r4; // stw @ 0x805BCE38
    /* xoris r0, r6, 0x8000 */ // 0x805BCE3C
    /* lis r3, 0x68dc */ // 0x805BCE40
    *(0xc + r1) = r0; // stw @ 0x805BCE44
    r0 = r3 + -0x7453; // 0x805BCE48
    /* mulhw r0, r0, r6 */ // 0x805BCE4C
    /* lfd f2, 0(r5) */ // 0x805BCE50
    /* lfd f1, 8(r1) */ // 0x805BCE54
    /* lis r3, 0 */ // 0x805BCE58
    /* lfs f0, 0(r3) */ // 0x805BCE5C
    /* fsubs f1, f1, f2 */ // 0x805BCE60
    r0 = r0 >> 0xb; // srawi
    /* fmuls f1, f0, f1 */ // 0x805BCE68
    /* srwi r3, r0, 0x1f */ // 0x805BCE6C
    r0 = r0 + r3; // 0x805BCE70
    /* extsh r3, r0 */ // 0x805BCE74
    FUN_805BCB24(); // bl 0x805BCB24
    /* fneg f0, f1 */ // 0x805BCE7C
    r0 = *(0x24 + r1); // lwz @ 0x805BCE80
    /* fctiwz f0, f0 */ // 0x805BCE84
    /* stfd f0, 0x10(r1) */ // 0x805BCE88
    r3 = *(0x14 + r1); // lwz @ 0x805BCE8C
    return;
}