/* Function at 0x807A23A0, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807A23A0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807A23A8
    /* li r6, 0 */ // 0x807A23AC
    *(0x14 + r1) = r0; // stw @ 0x807A23B0
    r4 = r4 + 0; // 0x807A23B4
    /* lis r5, 0 */ // 0x807A23B8
    *(0xc + r1) = r31; // stw @ 0x807A23BC
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x807A23C4
    /* lis r4, 0 */ // 0x807A23C8
    r4 = r4 + 0; // 0x807A23CC
    *(8 + r3) = r6; // stw @ 0x807A23D0
    *(0xc + r3) = r6; // stb @ 0x807A23D4
    *(0x14 + r3) = r6; // stb @ 0x807A23D8
    *(0 + r5) = r3; // stw @ 0x807A23DC
    r0 = *(0x10 + r3); // lwz @ 0x807A23E0
    *(0 + r3) = r4; // stw @ 0x807A23E4
    if (!=) goto 0x0x807a23f4;
    /* b 0x807a240c */ // 0x807A23F0
    *(0x15 + r3) = r6; // stb @ 0x807A23F4
    *(0x16 + r3) = r6; // stb @ 0x807A23F8
    *(0x17 + r3) = r6; // stb @ 0x807A23FC
    *(0x18 + r3) = r6; // stb @ 0x807A2400
    FUN_8079CACC(); // bl 0x8079CACC
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x807A240C
    r31 = *(0xc + r1); // lwz @ 0x807A2410
    return;
}