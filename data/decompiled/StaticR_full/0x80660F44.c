/* Function at 0x80660F44, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_80660F44(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80660F54
    r31 = r31 + 0; // 0x80660F58
    *(8 + r1) = r30; // stw @ 0x80660F5C
    r30 = r3;
    r4 = r31 + 0xdf; // 0x80660F64
    FUN_806A0B6C(r4); // bl 0x806A0B6C
    r3 = r30;
    r4 = r31 + 0xeb; // 0x80660F70
    FUN_806A0B6C(r4, r3, r4); // bl 0x806A0B6C
    r3 = r30 + 0x174; // 0x80660F78
    /* li r4, 0 */ // 0x80660F7C
    FUN_8066E240(r3, r4, r3, r4); // bl 0x8066E240
    r3 = r30;
    r4 = r31 + 0xf0; // 0x80660F88
    FUN_806A0B6C(r3, r4, r3, r4); // bl 0x806A0B6C
    r3 = r30;
    r4 = r31 + 0xf7; // 0x80660F94
    /* li r5, 0 */ // 0x80660F98
    FUN_806A11CC(r4, r3, r4, r5); // bl 0x806A11CC
    r4 = r31 + 0x103; // 0x80660FA0
    r3 = r30 + 0xa8; // 0x80660FA4
    FUN_80665D1C(r4, r5, r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80660FAC
    r4 = r31 + 0x109; // 0x80660FB0
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80660FB8
    r3 = r30 + 0xa8; // 0x80660FBC
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    r0 = *(0xbb + r3); // lbz @ 0x80660FC4
    /* li r4, 2 */ // 0x80660FC8
    r0 = r0 rlwinm 0; // rlwinm
    *(0xbb + r3) = r0; // stb @ 0x80660FD0
    r3 = r30 + 0x98; // 0x80660FD4
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80660FDC
    /* li r4, 1 */ // 0x80660FE0
    /* lfs f1, 0(r5) */ // 0x80660FE4
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80660FEC
    r31 = *(0xc + r1); // lwz @ 0x80660FF0
    r30 = *(8 + r1); // lwz @ 0x80660FF4
    return;
}