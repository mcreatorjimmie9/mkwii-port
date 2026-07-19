/* Function at 0x806F0B10, size=184 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

int FUN_806F0B10(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* lis r5, 1 */ // 0x806F0B18
    r9 = r4 rlwinm 2; // rlwinm
    *(0x34 + r1) = r0; // stw @ 0x806F0B20
    /* li r6, 0xff */ // 0x806F0B24
    /* lis r3, 0 */ // 0x806F0B28
    /* li r8, 0 */ // 0x806F0B2C
    r10 = *(0 + r3); // lwz @ 0x806F0B30
    r7 = r5 + -1; // 0x806F0B34
    /* li r0, 1 */ // 0x806F0B38
    *(8 + r1) = r8; // stw @ 0x806F0B3C
    r3 = r10 + r9; // 0x806F0B40
    *(0xc + r1) = r8; // stw @ 0x806F0B48
    /* li r5, 0x28 */ // 0x806F0B4C
    *(0x14 + r1) = r8; // sth @ 0x806F0B50
    *(0x16 + r1) = r7; // sth @ 0x806F0B54
    *(0x18 + r1) = r7; // sth @ 0x806F0B58
    *(0x10 + r1) = r8; // stw @ 0x806F0B5C
    *(0x1e + r1) = r6; // stb @ 0x806F0B60
    *(0x1f + r1) = r0; // stb @ 0x806F0B64
    *(0x2c + r1) = r8; // stb @ 0x806F0B68
    *(0x20 + r1) = r6; // stb @ 0x806F0B6C
    *(0x21 + r1) = r6; // stb @ 0x806F0B70
    *(0x22 + r1) = r6; // stb @ 0x806F0B74
    *(0x23 + r1) = r6; // stb @ 0x806F0B78
    *(0x24 + r1) = r6; // stb @ 0x806F0B7C
    *(0x25 + r1) = r6; // stb @ 0x806F0B80
    *(0x26 + r1) = r6; // stb @ 0x806F0B84
    *(0x27 + r1) = r6; // stb @ 0x806F0B88
    *(0x28 + r1) = r6; // stb @ 0x806F0B8C
    *(0x29 + r1) = r6; // stb @ 0x806F0B90
    *(0x2a + r1) = r6; // stb @ 0x806F0B94
    *(0x2b + r1) = r6; // stb @ 0x806F0B98
    r0 = *(0x276c + r3); // lwz @ 0x806F0B9C
    /* mulli r0, r0, 0x30 */ // 0x806F0BA0
    r0 = r10 + r0; // 0x806F0BA4
    r3 = r0 + r9; // 0x806F0BA8
    r3 = *(0xf0 + r3); // lwz @ 0x806F0BAC
    r3 = *(4 + r3); // lwz @ 0x806F0BB0
    FUN_806E9F64(); // bl 0x806E9F64
    r0 = *(0x34 + r1); // lwz @ 0x806F0BB8
    return;
}