/* Function at 0x80610C60, size=104 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80610C60(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80610C68
    r5 = *(0 + r3); // lwz @ 0x80610C6C
    r4 = *(4 + r5); // lwz @ 0x80610C70
    r0 = *(0xc + r4); // lwz @ 0x80610C74
    /* rlwinm. r0, r0, 0, 3, 3 */ // 0x80610C78
    if (==) goto 0x0x80610cb8;
    r5 = *(4 + r5); // lwz @ 0x80610C80
    /* li r0, 0 */ // 0x80610C84
    r4 = *(0xc + r5); // lwz @ 0x80610C88
    r4 = r4 rlwinm 0; // rlwinm
    *(0xc + r5) = r4; // stw @ 0x80610C90
    *(0x18e + r3) = r0; // sth @ 0x80610C94
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80610C9C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x80610CA4
    /* li r4, 1 */ // 0x80610CA8
    r3 = *(0x68 + r3); // lwz @ 0x80610CAC
    /* lwzx r3, r3, r0 */ // 0x80610CB0
    *(0x10d + r3) = r4; // stb @ 0x80610CB4
    r0 = *(0x14 + r1); // lwz @ 0x80610CB8
    return;
}