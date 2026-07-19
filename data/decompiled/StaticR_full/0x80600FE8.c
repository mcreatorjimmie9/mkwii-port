/* Function at 0x80600FE8, size=376 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80600FE8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80600FFC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80601004
    r29 = r3;
    r0 = *(0 + r4); // lwz @ 0x8060100C
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x80601010
    if (==) goto 0x0x80601028;
    r3 = r30;
    /* lis r4, 1 */ // 0x8060101C
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x8060102c */ // 0x80601024
    /* li r3, 0 */ // 0x80601028
    if (==) goto 0x0x80601144;
    /* li r31, 0 */ // 0x80601038
    if (==) goto 0x0x8060106c;
    /* lis r3, 0 */ // 0x80601040
    r3 = *(0 + r3); // lwz @ 0x80601044
    r0 = *(4 + r3); // lhz @ 0x80601048
    r0 = r0 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x80601068;
    r0 = *(0x2c + r29); // lwz @ 0x80601058
    r0 = r0 | 0x2000; // 0x8060105C
    *(0x2c + r29) = r0; // stw @ 0x80601060
    /* b 0x8060106c */ // 0x80601064
    /* li r31, 1 */ // 0x80601068
    /* lis r3, 0 */ // 0x8060106C
    r3 = *(0 + r3); // lwz @ 0x80601070
    r0 = *(4 + r3); // lhz @ 0x80601074
    r0 = r0 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x80601094;
    r3 = r29 + 4; // 0x80601084
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    /* li r4, 0 */ // 0x8060108C
    FUN_80607520(r3, r4); // bl 0x80607520
    /* lis r3, 0 */ // 0x80601094
    r3 = *(0 + r3); // lwz @ 0x80601098
    r0 = *(0x28 + r3); // lwz @ 0x8060109C
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806010A0
    if (==) goto 0x0x806010d4;
    r3 = *(4 + r29); // lwz @ 0x806010A8
    r3 = *(4 + r3); // lwz @ 0x806010AC
    r0 = *(8 + r3); // lwz @ 0x806010B0
    /* clrlwi. r0, r0, 0x1f */ // 0x806010B4
    if (==) goto 0x0x806010d4;
    r3 = r29 + 4; // 0x806010BC
    FUN_8061E59C(r3); // bl 0x8061E59C
    r0 = *(0xcc + r3); // lhz @ 0x806010C4
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x806010C8
    if (==) goto 0x0x806010d4;
    /* li r31, 1 */ // 0x806010D0
    if (!=) goto 0x0x80601144;
    r3 = *(4 + r29); // lwz @ 0x806010DC
    r3 = *(4 + r3); // lwz @ 0x806010E0
    r0 = *(4 + r3); // lwz @ 0x806010E4
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x806010E8
    if (==) goto 0x0x806010fc;
    r0 = *(0x14 + r3); // lwz @ 0x806010F0
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x806010F4
    if (==) goto 0x0x8060112c;
    /* lis r3, 0 */ // 0x806010FC
    r3 = *(0 + r3); // lwz @ 0x80601100
    r0 = *(4 + r3); // lhz @ 0x80601104
    r3 = r0 rlwinm 0x1b; // rlwinm
    r0 = r3 + -1; // 0x8060110C
    if (>) goto 0x0x80601124;
    r3 = r29 + 4; // 0x80601118
    FUN_8061E794(r3); // bl 0x8061E794
    /* b 0x8060112c */ // 0x80601120
    r3 = r29 + 4; // 0x80601124
    FUN_8061E774(r3, r3); // bl 0x8061E774
    r3 = r29;
    r5 = r30;
    /* li r4, 0 */ // 0x80601134
    /* li r6, 0 */ // 0x80601138
    /* li r7, 0 */ // 0x8060113C
    FUN_80602D50(r3, r5, r4, r6, r7); // bl 0x80602D50
    r0 = *(0x24 + r1); // lwz @ 0x80601144
    r31 = *(0x1c + r1); // lwz @ 0x80601148
    r30 = *(0x18 + r1); // lwz @ 0x8060114C
    r29 = *(0x14 + r1); // lwz @ 0x80601150
    return;
}