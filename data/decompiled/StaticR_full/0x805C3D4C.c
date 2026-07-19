/* Function at 0x805C3D4C, size=320 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805C3D4C(int r3, int r4, int r5, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r12, 0 */ // 0x805C3D54
    /* lis r11, 0 */ // 0x805C3D58
    *(0x14 + r1) = r0; // stw @ 0x805C3D5C
    /* li r0, 0 */ // 0x805C3D60
    /* li r10, 1 */ // 0x805C3D64
    /* lis r8, 0 */ // 0x805C3D68
    *(0xc + r1) = r31; // stw @ 0x805C3D6C
    r31 = r3;
    *(0x50 + r3) = r0; // sth @ 0x805C3D74
    /* b 0x805c3db8 */ // 0x805C3D78
    r7 = *(0 + r11); // lwz @ 0x805C3D7C
    r0 = r12 rlwinm 2; // rlwinm
    r7 = *(0xc + r7); // lwz @ 0x805C3D84
    /* lwzx r7, r7, r0 */ // 0x805C3D88
    r7 = *(0x38 + r7); // lwz @ 0x805C3D8C
    /* rlwinm. r0, r7, 0, 0x1e, 0x1e */ // 0x805C3D90
    if (!=) goto 0x0x805c3da0;
    /* rlwinm. r0, r7, 0, 0x1c, 0x1c */ // 0x805C3D98
    if (==) goto 0x0x805c3db4;
    /* clrlwi r0, r12, 0x18 */ // 0x805C3DA0
    r7 = *(0x50 + r3); // lhz @ 0x805C3DA4
    r0 = r10 << r0; // slw
    r0 = r7 | r0; // 0x805C3DAC
    *(0x50 + r3) = r0; // sth @ 0x805C3DB0
    r7 = *(0 + r8); // lwz @ 0x805C3DB8
    /* clrlwi r9, r12, 0x18 */ // 0x805C3DBC
    r0 = *(0x24 + r7); // lbz @ 0x805C3DC0
    if (<) goto 0x0x805c3d7c;
    /* lis r7, 0 */ // 0x805C3DCC
    r0 = *(0x38 + r3); // lwz @ 0x805C3DD0
    r7 = *(0 + r7); // lwz @ 0x805C3DD4
    r0 = r0 | 2; // 0x805C3DDC
    r8 = *(0x40 + r3); // lwz @ 0x805C3DE0
    r5 = *(0x1c + r7); // lbz @ 0x805C3DE4
    *(0x52 + r3) = r5; // stb @ 0x805C3DE8
    r5 = *(4 + r4); // lhz @ 0x805C3DEC
    *(0x38 + r3) = r0; // stw @ 0x805C3DF0
    r0 = *(6 + r4); // lbz @ 0x805C3DF4
    *(4 + r8) = r5; // sth @ 0x805C3DF8
    r5 = *(8 + r4); // lhz @ 0x805C3DFC
    *(6 + r8) = r0; // stb @ 0x805C3E00
    r0 = *(0xa + r4); // lbz @ 0x805C3E04
    *(8 + r8) = r5; // sth @ 0x805C3E08
    *(0xa + r8) = r0; // stb @ 0x805C3E0C
    *(0x44 + r3) = r6; // stw @ 0x805C3E10
    if (==) goto 0x0x805c3e24;
    r0 = *(0x38 + r3); // lwz @ 0x805C3E18
    r0 = r0 | 0x40; // 0x805C3E1C
    *(0x38 + r3) = r0; // stw @ 0x805C3E20
    r5 = *(8 + r3); // lbz @ 0x805C3E24
    /* lis r4, 0 */ // 0x805C3E28
    r4 = *(0 + r4); // lwz @ 0x805C3E2C
    /* mulli r0, r5, 0xf0 */ // 0x805C3E30
    r4 = r4 + r0; // 0x805C3E34
    r0 = *(0x2e + r4); // lbz @ 0x805C3E38
    /* extsb r0, r0 */ // 0x805C3E3C
    if (==) goto 0x0x805c3e60;
    /* lis r4, 0 */ // 0x805C3E48
    /* mulli r0, r5, 0x180 */ // 0x805C3E4C
    r4 = *(0 + r4); // lwz @ 0x805C3E50
    r4 = r4 + r0; // 0x805C3E54
    r0 = r4 + 0x3b4; // 0x805C3E58
    *(0x48 + r3) = r0; // stw @ 0x805C3E5C
    r3 = *(8 + r3); // lbz @ 0x805C3E60
    FUN_8061D98C(); // bl 0x8061D98C
    /* lis r3, 0 */ // 0x805C3E68
    r4 = *(8 + r31); // lbz @ 0x805C3E6C
    r3 = *(0 + r3); // lwz @ 0x805C3E70
    FUN_805C31C4(r3); // bl 0x805C31C4
    r0 = *(0x14 + r1); // lwz @ 0x805C3E78
    r31 = *(0xc + r1); // lwz @ 0x805C3E7C
    return;
}