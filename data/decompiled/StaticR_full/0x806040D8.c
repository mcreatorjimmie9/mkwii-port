/* Function at 0x806040D8, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806040D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806040E8
    /* lis r31, 0 */ // 0x806040EC
    r31 = r31 + 0; // 0x806040F0
    *(8 + r1) = r30; // stw @ 0x806040F4
    r30 = r3;
    if (<) goto 0x0x8060415c;
    r0 = *(0x18 + r3); // lbz @ 0x80604100
    /* li r4, 1 */ // 0x80604104
    /* extsb r0, r0 */ // 0x80604108
    *(0x10 + r3) = r0; // stw @ 0x8060410C
    if (==) goto 0x0x80604124;
    if (==) goto 0x0x80604124;
    /* li r4, 0 */ // 0x80604120
    if (==) goto 0x0x80604134;
    /* lfs f0, 0x88(r31) */ // 0x8060412C
    /* b 0x80604138 */ // 0x80604130
    /* lfs f0, 0x80(r31) */ // 0x80604134
    /* stfs f0, 0x1c(r3) */ // 0x80604138
    r3 = r30;
    FUN_80603C9C(r3); // bl 0x80603C9C
    r3 = *(0 + r30); // lwz @ 0x80604144
    r3 = *(4 + r3); // lwz @ 0x80604148
    r0 = *(8 + r3); // lwz @ 0x8060414C
    r0 = r0 | 0x40; // 0x80604150
    *(8 + r3) = r0; // stw @ 0x80604154
    /* b 0x806041b8 */ // 0x80604158
    r4 = *(0x18 + r3); // lbz @ 0x8060415C
    r0 = r4 + -3; // 0x80604160
    /* clrlwi r0, r0, 0x18 */ // 0x80604164
    if (>) goto 0x0x806041b8;
    /* extsb r0, r4 */ // 0x80604170
    /* li r4, 6 */ // 0x80604174
    *(0x10 + r3) = r4; // stw @ 0x8060417C
    if (!=) goto 0x0x8060418c;
    /* lfs f0, 0x88(r31) */ // 0x80604184
    /* b 0x80604190 */ // 0x80604188
    /* lfs f0, 0x80(r31) */ // 0x8060418C
    /* stfs f0, 0x1c(r3) */ // 0x80604190
    r3 = r30;
    FUN_80603C9C(r3); // bl 0x80603C9C
    /* lfs f0, 0xa0(r31) */ // 0x8060419C
    /* stfs f0, 0x34(r30) */ // 0x806041A0
    r3 = *(0 + r30); // lwz @ 0x806041A4
    r3 = *(4 + r3); // lwz @ 0x806041A8
    r0 = *(8 + r3); // lwz @ 0x806041AC
    r0 = r0 | 0x40; // 0x806041B0
    *(8 + r3) = r0; // stw @ 0x806041B4
    r0 = *(0x14 + r1); // lwz @ 0x806041B8
    r31 = *(0xc + r1); // lwz @ 0x806041BC
    r30 = *(8 + r1); // lwz @ 0x806041C0
    return;
}