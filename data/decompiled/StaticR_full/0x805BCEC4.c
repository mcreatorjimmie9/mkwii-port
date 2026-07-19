/* Function at 0x805BCEC4, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805BCEC4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805BCECC
    /* lis r5, 0 */ // 0x805BCED0
    *(0x14 + r1) = r0; // stw @ 0x805BCED4
    /* li r6, 0 */ // 0x805BCED8
    r4 = r4 + 0; // 0x805BCEDC
    r5 = r5 + 0; // 0x805BCEE0
    *(0xc + r1) = r31; // stw @ 0x805BCEE4
    /* li r31, -1 */ // 0x805BCEE8
    /* li r0, 1 */ // 0x805BCEEC
    *(8 + r1) = r30; // stw @ 0x805BCEF0
    r30 = r3;
    *(0 + r3) = r4; // stw @ 0x805BCEF8
    /* li r4, 7 */ // 0x805BCEFC
    *(4 + r3) = r6; // stb @ 0x805BCF00
    *(5 + r3) = r31; // stb @ 0x805BCF04
    *(6 + r3) = r31; // stb @ 0x805BCF08
    *(8 + r3) = r0; // stw @ 0x805BCF0C
    *(0xc + r3) = r6; // stw @ 0x805BCF10
    *(0x10 + r3) = r6; // stw @ 0x805BCF14
    *(0x14 + r3) = r5; // stwu @ 0x805BCF18
    FUN_805B5BB4(); // bl 0x805B5BB4
    r0 = *(0xec + r30); // lbz @ 0x805BCF20
    /* lis r5, 0 */ // 0x805BCF24
    r5 = r5 + 0; // 0x805BCF28
    /* li r6, 8 */ // 0x805BCF2C
    r0 = r0 rlwinm 0; // rlwinm
    /* li r4, 0x1388 */ // 0x805BCF34
    *(0xd0 + r30) = r31; // stw @ 0x805BCF38
    r3 = r30;
    *(0xd4 + r30) = r6; // stw @ 0x805BCF40
    *(0xe4 + r30) = r5; // stw @ 0x805BCF44
    *(0xe8 + r30) = r4; // sth @ 0x805BCF48
    *(0xec + r30) = r0; // stb @ 0x805BCF4C
    r31 = *(0xc + r1); // lwz @ 0x805BCF50
    r30 = *(8 + r1); // lwz @ 0x805BCF54
    r0 = *(0x14 + r1); // lwz @ 0x805BCF58
    return;
}