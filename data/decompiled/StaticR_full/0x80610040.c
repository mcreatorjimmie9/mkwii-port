/* Function at 0x80610040, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80610040(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80610050
    *(8 + r1) = r30; // stw @ 0x80610054
    r30 = r3;
    r5 = *(0 + r3); // lwz @ 0x8061005C
    r4 = *(4 + r5); // lwz @ 0x80610060
    r0 = *(4 + r4); // lwz @ 0x80610064
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80610068
    if (==) goto 0x0x806100ec;
    r7 = *(4 + r5); // lwz @ 0x80610070
    /* li r4, 4 */ // 0x80610074
    /* li r5, 0 */ // 0x80610078
    /* li r6, 1 */ // 0x8061007C
    r0 = *(4 + r7); // lwz @ 0x80610080
    r0 = r0 | 1; // 0x80610084
    *(4 + r7) = r0; // stw @ 0x80610088
    FUN_8061E8C0(r5, r6); // bl 0x8061E8C0
    /* lfs f1, 0x124(r30) */ // 0x80610090
    r3 = r30;
    FUN_8061E6BC(r3); // bl 0x8061E6BC
    r3 = *(0x1c4 + r30); // lha @ 0x8061009C
    r0 = r3 + -1; // 0x806100A0
    *(0x1c4 + r30) = r0; // sth @ 0x806100A4
    /* extsh. r0, r0 */ // 0x806100A8
    if (>) goto 0x0x806100ec;
    r3 = r30;
    FUN_8061E6D4(r3); // bl 0x8061E6D4
    /* li r0, 0 */ // 0x806100B8
    *(0x1c4 + r30) = r0; // sth @ 0x806100BC
    r6 = *(0 + r30); // lwz @ 0x806100C0
    r3 = r30;
    /* li r4, 4 */ // 0x806100C8
    /* li r5, 0 */ // 0x806100CC
    r7 = *(4 + r6); // lwz @ 0x806100D0
    /* li r6, 1 */ // 0x806100D4
    r0 = *(4 + r7); // lwz @ 0x806100D8
    /* clrlwi r0, r0, 1 */ // 0x806100DC
    *(4 + r7) = r0; // stw @ 0x806100E0
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    /* li r31, 1 */ // 0x806100E8
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x806100F0
    r30 = *(8 + r1); // lwz @ 0x806100F4
    r0 = *(0x14 + r1); // lwz @ 0x806100F8
    return;
}