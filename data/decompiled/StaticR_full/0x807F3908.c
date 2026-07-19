/* Function at 0x807F3908, size=100 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807F3908(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x807F3910
    /* lis r6, 0 */ // 0x807F3914
    *(0x24 + r1) = r0; // stw @ 0x807F3918
    /* li r9, 0 */ // 0x807F391C
    r11 = *(0 + r4); // lwzu @ 0x807F3928
    /* lbzu r8, 0(r6) */ // 0x807F392C
    r10 = *(4 + r4); // lwz @ 0x807F3930
    r0 = *(1 + r6); // lbz @ 0x807F3938
    /* li r6, 2 */ // 0x807F393C
    *(0x18 + r1) = r11; // stw @ 0x807F3940
    *(0x1c + r1) = r10; // stw @ 0x807F3944
    *(0x10 + r1) = r9; // stw @ 0x807F3948
    *(0x14 + r1) = r9; // stw @ 0x807F394C
    *(8 + r1) = r8; // stb @ 0x807F3950
    *(9 + r1) = r0; // stb @ 0x807F3954
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807F395C
    return;
}