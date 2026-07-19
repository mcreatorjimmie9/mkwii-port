/* Function at 0x807F40FC, size=100 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807F40FC(int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x807F4104
    /* lis r6, 0 */ // 0x807F4108
    *(0x24 + r1) = r0; // stw @ 0x807F410C
    /* li r9, 0 */ // 0x807F4110
    r11 = *(0 + r4); // lwzu @ 0x807F411C
    /* lbzu r8, 0(r6) */ // 0x807F4120
    r10 = *(4 + r4); // lwz @ 0x807F4124
    r0 = *(1 + r6); // lbz @ 0x807F412C
    /* li r6, 2 */ // 0x807F4130
    *(0x18 + r1) = r11; // stw @ 0x807F4134
    *(0x1c + r1) = r10; // stw @ 0x807F4138
    *(0x10 + r1) = r9; // stw @ 0x807F413C
    *(0x14 + r1) = r9; // stw @ 0x807F4140
    *(8 + r1) = r8; // stb @ 0x807F4144
    *(9 + r1) = r0; // stb @ 0x807F4148
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x24 + r1); // lwz @ 0x807F4150
    return;
}