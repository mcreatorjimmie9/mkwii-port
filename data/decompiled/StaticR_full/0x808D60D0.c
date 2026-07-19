/* Function at 0x808D60D0, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_808D60D0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808D60DC
    r31 = r3;
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x808D60E8
    r5 = r3 rlwinm 2; // rlwinm
    r6 = *(0 + r4); // lwz @ 0x808D60F0
    /* li r4, 1 */ // 0x808D60F4
    /* li r0, 0 */ // 0x808D60F8
    /* lis r3, 0 */ // 0x808D60FC
    r6 = *(0xc + r6); // lwz @ 0x808D6100
    /* lwzx r5, r6, r5 */ // 0x808D6104
    r5 = *(0x26 + r5); // lbz @ 0x808D6108
    *(0x199 + r31) = r5; // stb @ 0x808D610C
    *(0x27e + r31) = r4; // stb @ 0x808D6110
    *(0x278 + r31) = r0; // sth @ 0x808D6114
    *(0x27a + r31) = r0; // stb @ 0x808D6118
    *(0x27c + r31) = r0; // sth @ 0x808D611C
    *(0x28a + r31) = r4; // stb @ 0x808D6120
    *(0x284 + r31) = r0; // sth @ 0x808D6124
    *(0x286 + r31) = r0; // stb @ 0x808D6128
    *(0x288 + r31) = r0; // sth @ 0x808D612C
    r3 = *(0 + r3); // lwz @ 0x808D6130
    r0 = *(0x128 + r3); // lwz @ 0x808D6134
    if (!=) goto 0x0x808d614c;
    r4 = *(0xc0c + r3); // lwz @ 0x808D6140
    r3 = r31 + 0x19c; // 0x808D6144
    FUN_805AC3BC(r3); // bl 0x805AC3BC
    r3 = r31 + 0x98; // 0x808D614C
    /* li r4, 0 */ // 0x808D6150
    FUN_8069F4A0(r3, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x808D6158
    /* li r4, 2 */ // 0x808D615C
    /* lfs f1, 0(r5) */ // 0x808D6160
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r31;
    FUN_806A0740(r5, r4, r3); // bl 0x806A0740
    r0 = *(0x14 + r1); // lwz @ 0x808D6170
    r31 = *(0xc + r1); // lwz @ 0x808D6174
    return;
}