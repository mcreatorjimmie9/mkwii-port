/* Function at 0x807F7140, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807F7140(int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x807F7148
    /* lis r4, 0 */ // 0x807F714C
    *(0x24 + r1) = r0; // stw @ 0x807F7150
    r5 = r5 + 0; // 0x807F7154
    /* li r8, 0 */ // 0x807F7158
    r0 = *(0 + r4); // lbz @ 0x807F7160
    r5 = *(0 + r5); // lwz @ 0x807F7168
    /* li r6, 1 */ // 0x807F716C
    *(0x10 + r1) = r5; // stw @ 0x807F7170
    *(0xc + r1) = r8; // stw @ 0x807F7178
    *(8 + r1) = r0; // stb @ 0x807F717C
    FUN_808A1444(r6, r5); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807F7184
    return;
}