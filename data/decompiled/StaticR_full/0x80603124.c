/* Function at 0x80603124, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80603124(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80603130
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x80603138
    r4 = *(4 + r4); // lwz @ 0x8060313C
    r0 = *(0x14 + r4); // lwz @ 0x80603140
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80603144
    if (!=) goto 0x0x8060322c;
    r3 = r3 + 4; // 0x8060314C
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lis r4, 0 */ // 0x80603154
    /* lfs f1, 4(r3) */ // 0x80603158
    /* lfs f0, 0(r4) */ // 0x8060315C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80603160
    if (>=) goto 0x0x80603180;
}