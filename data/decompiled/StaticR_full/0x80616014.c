/* Function at 0x80616014, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80616014(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80616020
    r31 = r3;
    FUN_8061DC70(); // bl 0x8061DC70
    r4 = *(0 + r31); // lwz @ 0x8061602C
    r3 = *(0x3a + r3); // lbz @ 0x80616030
    r4 = *(4 + r4); // lwz @ 0x80616034
    r5 = *(4 + r4); // lwz @ 0x80616038
    /* rlwinm. r0, r5, 0, 2, 2 */ // 0x8061603C
    if (!=) goto 0x0x80616094;
    if (!=) goto 0x0x806160c8;
    /* rlwinm. r0, r5, 0, 0xd, 0xd */ // 0x8061604C
    if (==) goto 0x0x806160c8;
    /* lis r3, 0x3008 */ // 0x80616054
    r0 = r3 + 0x68; // 0x80616058
    /* and. r0, r5, r0 */ // 0x8061605C
    if (!=) goto 0x0x806160c8;
    r0 = *(8 + r4); // lwz @ 0x80616064
    /* clrlwi. r0, r0, 0x1f */ // 0x80616068
    if (!=) goto 0x0x806160c8;
    r0 = *(0x2b6 + r31); // lha @ 0x80616070
    if (>) goto 0x0x806160c8;
    r12 = *(0xc + r31); // lwz @ 0x8061607C
    r3 = r31;
    r12 = *(0x6c + r12); // lwz @ 0x80616084
    /* mtctr r12 */ // 0x80616088
    /* bctrl  */ // 0x8061608C
    /* b 0x806160c8 */ // 0x80616090
    if (!=) goto 0x0x806160c8;
    r0 = *(0x2b6 + r31); // lha @ 0x8061609C
    if (>) goto 0x0x806160c8;
    r12 = *(0xc + r31); // lwz @ 0x806160A8
    r3 = r31;
    r12 = *(0x70 + r12); // lwz @ 0x806160B0
    /* mtctr r12 */ // 0x806160B4
    /* bctrl  */ // 0x806160B8
    /* lis r3, 0 */ // 0x806160BC
    r0 = *(0 + r3); // lha @ 0x806160C0
    *(0x2b6 + r31) = r0; // sth @ 0x806160C4
    r0 = *(0x14 + r1); // lwz @ 0x806160C8
    r31 = *(0xc + r1); // lwz @ 0x806160CC
    return;
}