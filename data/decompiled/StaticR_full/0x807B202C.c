/* Function at 0x807B202C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807B202C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807B2038
    r31 = r3;
    r3 = r3 + 0x60; // 0x807B2040
    r4 = r31 + 0xc4; // 0x807B2044
    FUN_807CF1A0(r3, r4); // bl 0x807CF1A0
    if (==) goto 0x0x807b2068;
    r0 = *(0x1ec + r31); // lwz @ 0x807B2054
    if (!=) goto 0x0x807b2068;
    /* li r0, 1 */ // 0x807B2060
    *(0x1ec + r31) = r0; // stw @ 0x807B2064
    r0 = *(0x14 + r1); // lwz @ 0x807B2068
    r31 = *(0xc + r1); // lwz @ 0x807B206C
    return;
}