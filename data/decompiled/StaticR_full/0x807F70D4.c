/* Function at 0x807F70D4, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807F70D4(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x807F70DC
    /* lis r4, 0 */ // 0x807F70E0
    *(0x24 + r1) = r0; // stw @ 0x807F70E4
    r5 = r5 + 0; // 0x807F70E8
    /* li r8, 0 */ // 0x807F70EC
    r0 = *(0 + r4); // lbz @ 0x807F70F4
    r5 = *(0 + r5); // lwz @ 0x807F70FC
    /* li r6, 1 */ // 0x807F7100
    *(0x10 + r1) = r5; // stw @ 0x807F7104
    *(0xc + r1) = r8; // stw @ 0x807F710C
    *(8 + r1) = r0; // stb @ 0x807F7110
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807F7118
    return;
}