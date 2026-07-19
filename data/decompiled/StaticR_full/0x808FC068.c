/* Function at 0x808FC068, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808FC068(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808FC074
    r31 = r3;
    r4 = *(0x148 + r3); // lwz @ 0x808FC07C
    if (==) goto 0x0x808fc0cc;
    r3 = *(0 + r4); // lwz @ 0x808FC088
    /* rlwinm. r0, r3, 0, 0x17, 0x17 */ // 0x808FC08C
    if (!=) goto 0x0x808fc0cc;
    /* clrlwi. r0, r3, 0x1f */ // 0x808FC094
    if (==) goto 0x0x808fc0cc;
    r3 = r4;
    FUN_80842E90(r3); // bl 0x80842E90
    if (!=) goto 0x0x808fc0b8;
    r3 = *(0x148 + r31); // lwz @ 0x808FC0AC
    FUN_80842EA4(r3); // bl 0x80842EA4
    /* b 0x808fc0cc */ // 0x808FC0B4
    if (!=) goto 0x0x808fc0cc;
    r3 = *(0x148 + r31); // lwz @ 0x808FC0C0
    r4 = r31 + 0xcc; // 0x808FC0C4
    FUN_80842ECC(r4); // bl 0x80842ECC
    r0 = *(0x14 + r1); // lwz @ 0x808FC0CC
    r31 = *(0xc + r1); // lwz @ 0x808FC0D0
    return;
}