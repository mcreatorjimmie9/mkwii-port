/* Function at 0x80610670, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80610670(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8061067C
    r31 = r3;
    r5 = *(0 + r3); // lwz @ 0x80610684
    r4 = *(4 + r5); // lwz @ 0x80610688
    r0 = *(8 + r4); // lwz @ 0x8061068C
    /* rlwinm. r0, r0, 0, 0x12, 0x12 */ // 0x80610690
    if (==) goto 0x0x80610760;
    r4 = *(4 + r5); // lwz @ 0x80610698
    r0 = *(4 + r4); // lwz @ 0x8061069C
    r0 = r0 | 1; // 0x806106A0
    *(4 + r4) = r0; // stw @ 0x806106A4
    r4 = *(0 + r3); // lwz @ 0x806106A8
    r4 = *(4 + r4); // lwz @ 0x806106AC
    r0 = *(8 + r4); // lwz @ 0x806106B0
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x806106B4
    if (!=) goto 0x0x806106f4;
    r4 = *(0x12c + r3); // lha @ 0x806106BC
    r0 = *(0x12e + r3); // lha @ 0x806106C0
    r4 = r4 + 1; // 0x806106C4
    *(0x12c + r3) = r4; // sth @ 0x806106C8
    /* extsh r4, r4 */ // 0x806106CC
    if (<) goto 0x0x806106f4;
    /* li r0, 0 */ // 0x806106D8
    *(0x12c + r3) = r0; // sth @ 0x806106DC
    r4 = *(0 + r3); // lwz @ 0x806106E0
    r4 = *(4 + r4); // lwz @ 0x806106E4
    r0 = *(8 + r4); // lwz @ 0x806106E8
    r0 = r0 rlwinm 0; // rlwinm
    *(8 + r4) = r0; // stw @ 0x806106F0
    r4 = *(0 + r3); // lwz @ 0x806106F4
    r4 = *(4 + r4); // lwz @ 0x806106F8
    r0 = *(8 + r4); // lwz @ 0x806106FC
    /* clrlwi. r0, r0, 0x1f */ // 0x80610700
    if (!=) goto 0x0x80610760;
    r0 = *(0x12c + r3); // lha @ 0x80610708
    if (>=) goto 0x0x80610760;
    r3 = r31;
    FUN_8061DC48(r3); // bl 0x8061DC48
    r0 = *(0xa8 + r3); // lwz @ 0x8061071C
    /* lis r4, 0 */ // 0x80610720
    *(0xc + r1) = r0; // stw @ 0x80610724
    r5 = *(0xa4 + r3); // lwz @ 0x80610728
    r0 = *(0xac + r3); // lwz @ 0x8061072C
    r3 = r31;
    /* lfs f0, 0(r4) */ // 0x80610734
    *(8 + r1) = r5; // stw @ 0x80610738
    *(0x10 + r1) = r0; // stw @ 0x8061073C
    /* stfs f0, 0xc(r1) */ // 0x80610740
    FUN_8061DC48(r3); // bl 0x8061DC48
    /* lfs f0, 8(r1) */ // 0x80610748
    /* stfs f0, 0xa4(r3) */ // 0x8061074C
    /* lfs f0, 0xc(r1) */ // 0x80610750
    /* stfs f0, 0xa8(r3) */ // 0x80610754
    /* lfs f0, 0x10(r1) */ // 0x80610758
    /* stfs f0, 0xac(r3) */ // 0x8061075C
    r0 = *(0x24 + r1); // lwz @ 0x80610760
    r31 = *(0x1c + r1); // lwz @ 0x80610764
    return;
}