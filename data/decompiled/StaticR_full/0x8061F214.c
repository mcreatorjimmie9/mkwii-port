/* Function at 0x8061F214, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061F214(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* lis r8, 0 */ // 0x8061F21C
    *(0x14 + r1) = r0; // stw @ 0x8061F220
    /* lbzu r7, 0(r8) */ // 0x8061F228
    *(8 + r1) = r7; // stb @ 0x8061F22C
    r6 = *(1 + r8); // lbz @ 0x8061F230
    r5 = *(2 + r8); // lbz @ 0x8061F234
    r0 = *(3 + r8); // lbz @ 0x8061F238
    *(9 + r1) = r6; // stb @ 0x8061F23C
    *(0xa + r1) = r5; // stb @ 0x8061F240
    *(0xb + r1) = r0; // stb @ 0x8061F244
    r3 = *(0 + r3); // lwz @ 0x8061F248
    r3 = *(0x54 + r3); // lwz @ 0x8061F24C
    FUN_805FAF58(); // bl 0x805FAF58
    r0 = *(0x14 + r1); // lwz @ 0x8061F254
    return;
}