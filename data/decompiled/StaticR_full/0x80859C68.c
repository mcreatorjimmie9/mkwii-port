/* Function at 0x80859C68, size=124 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80859C68(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80859C74
    r31 = r3;
    r4 = r31 + 0x270; // 0x80859C7C
    r5 = *(0x14 + r3); // lwz @ 0x80859C80
    r3 = *(0x10 + r3); // lwz @ 0x80859C84
    /* lfs f1, 0x80(r5) */ // 0x80859C88
    /* lfs f2, 0x84(r5) */ // 0x80859C8C
    FUN_8084F6A8(r4); // bl 0x8084F6A8
    *(0x264 + r31) = r3; // stw @ 0x80859C94
    r4 = r31 + 0x27c; // 0x80859C98
    r5 = *(0x14 + r31); // lwz @ 0x80859C9C
    r3 = *(0x10 + r31); // lwz @ 0x80859CA0
    /* lfs f1, 0x88(r5) */ // 0x80859CA4
    /* lfs f2, 0x8c(r5) */ // 0x80859CA8
    FUN_8084F6A8(r4); // bl 0x8084F6A8
    /* neg r0, r3 */ // 0x80859CB0
    /* li r4, 0 */ // 0x80859CB4
    /* andc r0, r0, r3 */ // 0x80859CB8
    *(0x264 + r31) = r3; // stw @ 0x80859CBC
    /* srwi r0, r0, 0x1f */ // 0x80859CC0
    *(0x26c + r31) = r4; // stw @ 0x80859CC4
    *(0x268 + r31) = r4; // stw @ 0x80859CC8
    *(0x260 + r31) = r0; // stb @ 0x80859CCC
    r31 = *(0xc + r1); // lwz @ 0x80859CD0
    r0 = *(0x14 + r1); // lwz @ 0x80859CD4
    return;
}