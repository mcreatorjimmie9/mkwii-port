/* Function at 0x80654B14, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80654B14(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80654B1C
    r6 = r6 + 0; // 0x80654B24
    *(0xc + r1) = r31; // stw @ 0x80654B28
    r31 = r4;
    r4 = r6 + 0x94; // 0x80654B30
    *(8 + r1) = r30; // stw @ 0x80654B34
    r30 = r3;
    r0 = *(0x1e0 + r3); // lwz @ 0x80654B3C
    r5 = *(0x270 + r3); // lwz @ 0x80654B40
    /* mulli r0, r0, 0x178 */ // 0x80654B44
    r3 = r5 + r0; // 0x80654B48
    r3 = r3 + 0xa8; // 0x80654B4C
    FUN_80665D1C(r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80654B54
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80654B5C
    r3 = *(0x1e0 + r30); // lwz @ 0x80654B60
    if (<=) goto 0x0x80654b74;
    r0 = r3 + -1; // 0x80654B6C
    *(0x1e0 + r30) = r0; // stw @ 0x80654B70
    r0 = *(0x1e0 + r30); // lwz @ 0x80654B74
    /* lis r4, 0 */ // 0x80654B78
    r4 = r4 + 0; // 0x80654B7C
    r3 = *(0x270 + r30); // lwz @ 0x80654B80
    /* mulli r0, r0, 0x178 */ // 0x80654B84
    r4 = r4 + 0x9d; // 0x80654B88
    r3 = r3 + r0; // 0x80654B8C
    r3 = r3 + 0xa8; // 0x80654B90
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80654B98
    r5 = r31;
    /* li r4, 0x19 */ // 0x80654BA0
    r0 = r0 rlwinm 0; // rlwinm
    r0 = r0 | 1; // 0x80654BA8
    *(0xbb + r3) = r0; // stb @ 0x80654BAC
    r3 = r30;
    FUN_806A03CC(r4, r3); // bl 0x806A03CC
    r0 = *(0x14 + r1); // lwz @ 0x80654BB8
    r31 = *(0xc + r1); // lwz @ 0x80654BBC
    r30 = *(8 + r1); // lwz @ 0x80654BC0
    return;
}