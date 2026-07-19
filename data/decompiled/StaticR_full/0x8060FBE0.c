/* Function at 0x8060FBE0, size=228 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8060FBE0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8060FBEC
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x8060FBF4
    r4 = *(4 + r4); // lwz @ 0x8060FBF8
    r0 = *(0xc + r4); // lwz @ 0x8060FBFC
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8060FC00
    if (==) goto 0x0x8060fc24;
    r5 = *(0xec + r3); // lwz @ 0x8060FC08
    /* lis r4, 0 */ // 0x8060FC0C
    r5 = r5 + 1; // 0x8060FC10
    *(0xec + r3) = r5; // stw @ 0x8060FC14
    r0 = *(0 + r4); // lha @ 0x8060FC18
    if (>) goto 0x0x8060fc50;
    r3 = r31;
    FUN_8061E63C(r3); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x8060FC2C
    /* lfs f0, 0(r3) */ // 0x8060FC30
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8060FC34
    if (<) goto 0x0x8060fc50;
    r3 = *(0 + r31); // lwz @ 0x8060FC3C
    r3 = *(4 + r3); // lwz @ 0x8060FC40
    r0 = *(8 + r3); // lwz @ 0x8060FC44
    /* clrlwi. r0, r0, 0x1f */ // 0x8060FC48
    if (==) goto 0x0x8060fc78;
    /* lis r3, 0 */ // 0x8060FC50
    /* li r0, 0 */ // 0x8060FC54
    /* lfs f0, 0(r3) */ // 0x8060FC58
    *(0xec + r31) = r0; // stw @ 0x8060FC5C
    r3 = *(0 + r31); // lwz @ 0x8060FC60
    /* stfs f0, 0xf0(r31) */ // 0x8060FC64
    r3 = *(4 + r3); // lwz @ 0x8060FC68
    r0 = *(0xc + r3); // lwz @ 0x8060FC6C
    r0 = r0 rlwinm 0; // rlwinm
    *(0xc + r3) = r0; // stw @ 0x8060FC74
    r3 = *(0 + r31); // lwz @ 0x8060FC78
    r3 = *(4 + r3); // lwz @ 0x8060FC7C
    r0 = *(0xc + r3); // lwz @ 0x8060FC80
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8060FC84
    if (==) goto 0x0x8060fcb0;
    r3 = r31;
    FUN_8061E010(r3); // bl 0x8061E010
    r12 = *(0 + r3); // lwz @ 0x8060FC94
    /* lis r4, 0 */ // 0x8060FC98
    /* lfs f1, 0(r4) */ // 0x8060FC9C
    /* li r4, 0x1a7 */ // 0x8060FCA0
    r12 = *(0xe8 + r12); // lwz @ 0x8060FCA4
    /* mtctr r12 */ // 0x8060FCA8
    /* bctrl  */ // 0x8060FCAC
    r0 = *(0x14 + r1); // lwz @ 0x8060FCB0
    r31 = *(0xc + r1); // lwz @ 0x8060FCB4
    return;
}