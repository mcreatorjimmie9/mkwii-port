/* Function at 0x807FC248, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807FC248(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x807FC250
    /* lis r4, 0 */ // 0x807FC254
    *(0x24 + r1) = r0; // stw @ 0x807FC258
    r5 = r5 + 0; // 0x807FC25C
    /* li r8, 0 */ // 0x807FC260
    r0 = *(0 + r4); // lbz @ 0x807FC268
    r5 = *(0 + r5); // lwz @ 0x807FC270
    /* li r6, 1 */ // 0x807FC274
    *(0x10 + r1) = r5; // stw @ 0x807FC278
    *(0xc + r1) = r8; // stw @ 0x807FC280
    *(8 + r1) = r0; // stb @ 0x807FC284
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807FC28C
    return;
}