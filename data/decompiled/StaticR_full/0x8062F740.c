/* Function at 0x8062F740, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8062F740(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8062F754
    r30 = r3;
    r3 = r31;
    FUN_8061DC70(r3); // bl 0x8061DC70
    r0 = *(0x2c + r3); // lhz @ 0x8062F764
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8062F768
    if (==) goto 0x0x8062f7dc;
    /* lis r3, 0 */ // 0x8062F770
    /* li r4, 2 */ // 0x8062F774
    r3 = *(0 + r3); // lwz @ 0x8062F778
    FUN_805C5788(r3, r4); // bl 0x805C5788
    if (==) goto 0x0x8062f7dc;
    r3 = *(0 + r31); // lwz @ 0x8062F788
    r3 = *(4 + r3); // lwz @ 0x8062F78C
    r0 = *(4 + r3); // lwz @ 0x8062F790
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x8062F794
    if (!=) goto 0x0x8062f7dc;
    r0 = *(0xc + r3); // lwz @ 0x8062F79C
    /* rlwinm. r0, r0, 0, 0x11, 0x12 */ // 0x8062F7A0
    if (!=) goto 0x0x8062f7dc;
    r0 = *(0x334 + r30); // lhz @ 0x8062F7A8
    /* lis r4, 0 */ // 0x8062F7AC
    r3 = r31;
    r0 = r0 | 0x20; // 0x8062F7B4
    *(0x334 + r30) = r0; // sth @ 0x8062F7B8
    r31 = *(0 + r4); // lwz @ 0x8062F7BC
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r31;
    /* clrlwi r4, r0, 0x18 */ // 0x8062F7CC
    /* li r5, 0 */ // 0x8062F7D0
    FUN_807AE41C(r3, r5); // bl 0x807AE41C
    /* b 0x8062f80c */ // 0x8062F7D8
    r0 = *(0x334 + r30); // lhz @ 0x8062F7DC
    /* lis r4, 0 */ // 0x8062F7E0
    r3 = r31;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x334 + r30) = r0; // sth @ 0x8062F7EC
    r31 = *(0 + r4); // lwz @ 0x8062F7F0
    FUN_8061E2D8(r4, r3); // bl 0x8061E2D8
    r0 = r3;
    r3 = r31;
    /* clrlwi r4, r0, 0x18 */ // 0x8062F800
    /* li r5, 1 */ // 0x8062F804
    FUN_807AE41C(r3, r5); // bl 0x807AE41C
    r0 = *(0x14 + r1); // lwz @ 0x8062F80C
    r31 = *(0xc + r1); // lwz @ 0x8062F810
    r30 = *(8 + r1); // lwz @ 0x8062F814
    return;
}