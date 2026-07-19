/* Function at 0x807D5858, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807D5858(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807D5868
    r31 = r31 + 0; // 0x807D586C
    *(0x18 + r1) = r30; // stw @ 0x807D5870
    *(0x14 + r1) = r29; // stw @ 0x807D5874
    r29 = r4;
    r3 = *(4 + r3); // lwz @ 0x807D587C
    r30 = *(0 + r3); // lwz @ 0x807D5880
    r3 = r30;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    /* lfs f2, 0(r29) */ // 0x807D588C
    /* lfs f0, 4(r31) */ // 0x807D5890
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807D5894
    if (<=) goto 0x0x807d58a4;
    /* fmr f2, f0 */ // 0x807D589C
    /* b 0x807d58b4 */ // 0x807D58A0
    /* lfs f0, 8(r31) */ // 0x807D58A4
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x807D58A8
    if (>=) goto 0x0x807d58b4;
    /* fmr f2, f0 */ // 0x807D58B0
    r0 = *(8 + r29); // lbz @ 0x807D58B4
    if (==) goto 0x0x807d58dc;
    /* lfs f1, 4(r29) */ // 0x807D58C0
    /* lfs f0, 0(r31) */ // 0x807D58C4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D58C8
    if (>=) goto 0x0x807d58d8;
    /* lfs f2, 4(r31) */ // 0x807D58D0
    /* b 0x807d58dc */ // 0x807D58D4
    /* lfs f2, 8(r31) */ // 0x807D58D8
    /* frsp f0, f2 */ // 0x807D58DC
    /* lfs f1, 8(r31) */ // 0x807D58E0
    /* stfs f2, 0x28c(r3) */ // 0x807D58E4
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D58E8
    if (<=) goto 0x0x807d58f8;
    /* stfs f1, 0x28c(r3) */ // 0x807D58F0
    /* b 0x807d590c */ // 0x807D58F4
    /* lfs f1, 4(r31) */ // 0x807D58F8
    /* lfs f0, 0x28c(r3) */ // 0x807D58FC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D5900
    if (>=) goto 0x0x807d590c;
    /* stfs f1, 0x28c(r3) */ // 0x807D5908
    /* frsp f0, f2 */ // 0x807D590C
    /* lfs f1, 0(r31) */ // 0x807D5910
    /* stfs f2, 8(r1) */ // 0x807D5914
    /* stfs f0, 0x14(r30) */ // 0x807D5918
    /* stfs f1, 0x18(r30) */ // 0x807D591C
    r31 = *(0x1c + r1); // lwz @ 0x807D5920
    r30 = *(0x18 + r1); // lwz @ 0x807D5924
    r29 = *(0x14 + r1); // lwz @ 0x807D5928
    r0 = *(0x24 + r1); // lwz @ 0x807D592C
    /* stfs f1, 0xc(r1) */ // 0x807D5930
    return;
}