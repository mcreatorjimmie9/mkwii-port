/* Function at 0x806F0BC8, size=184 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

int FUN_806F0BC8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* lis r5, 1 */ // 0x806F0BD0
    r9 = r4 rlwinm 2; // rlwinm
    *(0x34 + r1) = r0; // stw @ 0x806F0BD8
    /* li r6, 0xff */ // 0x806F0BDC
    /* lis r3, 0 */ // 0x806F0BE0
    /* li r8, 0 */ // 0x806F0BE4
    r10 = *(0 + r3); // lwz @ 0x806F0BE8
    r7 = r5 + -1; // 0x806F0BEC
    /* li r0, 2 */ // 0x806F0BF0
    *(8 + r1) = r8; // stw @ 0x806F0BF4
    r3 = r10 + r9; // 0x806F0BF8
    *(0xc + r1) = r8; // stw @ 0x806F0C00
    /* li r5, 0x28 */ // 0x806F0C04
    *(0x14 + r1) = r8; // sth @ 0x806F0C08
    *(0x16 + r1) = r7; // sth @ 0x806F0C0C
    *(0x18 + r1) = r7; // sth @ 0x806F0C10
    *(0x10 + r1) = r8; // stw @ 0x806F0C14
    *(0x1e + r1) = r6; // stb @ 0x806F0C18
    *(0x1f + r1) = r0; // stb @ 0x806F0C1C
    *(0x2c + r1) = r8; // stb @ 0x806F0C20
    *(0x20 + r1) = r6; // stb @ 0x806F0C24
    *(0x21 + r1) = r6; // stb @ 0x806F0C28
    *(0x22 + r1) = r6; // stb @ 0x806F0C2C
    *(0x23 + r1) = r6; // stb @ 0x806F0C30
    *(0x24 + r1) = r6; // stb @ 0x806F0C34
    *(0x25 + r1) = r6; // stb @ 0x806F0C38
    *(0x26 + r1) = r6; // stb @ 0x806F0C3C
    *(0x27 + r1) = r6; // stb @ 0x806F0C40
    *(0x28 + r1) = r6; // stb @ 0x806F0C44
    *(0x29 + r1) = r6; // stb @ 0x806F0C48
    *(0x2a + r1) = r6; // stb @ 0x806F0C4C
    *(0x2b + r1) = r6; // stb @ 0x806F0C50
    r0 = *(0x276c + r3); // lwz @ 0x806F0C54
    /* mulli r0, r0, 0x30 */ // 0x806F0C58
    r0 = r10 + r0; // 0x806F0C5C
    r3 = r0 + r9; // 0x806F0C60
    r3 = *(0xf0 + r3); // lwz @ 0x806F0C64
    r3 = *(4 + r3); // lwz @ 0x806F0C68
    FUN_806E9F64(); // bl 0x806E9F64
    r0 = *(0x34 + r1); // lwz @ 0x806F0C70
    return;
}