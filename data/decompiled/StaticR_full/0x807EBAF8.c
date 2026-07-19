/* Function at 0x807EBAF8, size=96 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807EBAF8(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x807EBB00
    /* lis r6, 0 */ // 0x807EBB04
    *(0x24 + r1) = r0; // stw @ 0x807EBB08
    /* li r0, 0 */ // 0x807EBB0C
    r11 = *(0 + r4); // lwzu @ 0x807EBB18
    r9 = *(0 + r6); // lwzu @ 0x807EBB1C
    r10 = *(4 + r4); // lwz @ 0x807EBB20
    r8 = *(4 + r6); // lwz @ 0x807EBB28
    /* li r6, 2 */ // 0x807EBB2C
    *(0x18 + r1) = r11; // stw @ 0x807EBB30
    *(0x1c + r1) = r10; // stw @ 0x807EBB34
    *(0x10 + r1) = r9; // stw @ 0x807EBB38
    *(0x14 + r1) = r8; // stw @ 0x807EBB3C
    *(8 + r1) = r0; // sth @ 0x807EBB40
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807EBB48
    return;
}