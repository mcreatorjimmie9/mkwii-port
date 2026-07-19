/* Function at 0x8060064C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8060064C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80600658
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x80600660
    r4 = *(4 + r4); // lwz @ 0x80600664
    r0 = *(8 + r4); // lwz @ 0x80600668
    /* clrlwi. r0, r0, 0x1f */ // 0x8060066C
    if (==) goto 0x0x80600698;
    r3 = r3 + 4; // 0x80600674
    FUN_8061E59C(r3); // bl 0x8061E59C
    r0 = *(0xcc + r3); // lhz @ 0x8060067C
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80600680
    if (==) goto 0x0x80600698;
    /* lis r3, 0 */ // 0x80600688
    /* lfs f0, 0(r3) */ // 0x8060068C
    /* stfs f0, 0x1c(r31) */ // 0x80600690
    /* b 0x806006c0 */ // 0x80600694
    /* lis r4, 0 */ // 0x80600698
    /* lis r3, 0 */ // 0x8060069C
    /* lfs f2, 0x1c(r31) */ // 0x806006A0
    /* lfs f1, 0(r4) */ // 0x806006A4
    /* lfs f0, 0(r3) */ // 0x806006A8
    /* fadds f1, f2, f1 */ // 0x806006AC
    /* stfs f1, 0x1c(r31) */ // 0x806006B0
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x806006B4
    if (>=) goto 0x0x806006c0;
    /* stfs f0, 0x1c(r31) */ // 0x806006BC
    r0 = *(0x14 + r1); // lwz @ 0x806006C0
    r31 = *(0xc + r1); // lwz @ 0x806006C4
    return;
}