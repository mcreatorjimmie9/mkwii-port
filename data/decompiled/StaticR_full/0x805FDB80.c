/* Function at 0x805FDB80, size=212 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805FDB80(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805FDB94
    r30 = r3;
    r0 = *(0 + r5); // lwz @ 0x805FDB9C
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805FDBA0
    if (==) goto 0x0x805fdbb8;
    r3 = r5;
    /* li r4, 0x800 */ // 0x805FDBAC
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fdbbc */ // 0x805FDBB4
    /* li r3, 0 */ // 0x805FDBB8
    if (==) goto 0x0x805fdc3c;
    r4 = *(4 + r30); // lwz @ 0x805FDBC4
    /* lis r3, 0 */ // 0x805FDBC8
    r4 = *(4 + r4); // lwz @ 0x805FDBCC
    r0 = *(4 + r4); // lwz @ 0x805FDBD0
    r0 = r0 | 1; // 0x805FDBD4
    *(4 + r4) = r0; // stw @ 0x805FDBD8
    r3 = *(0 + r3); // lwz @ 0x805FDBDC
    r0 = *(4 + r3); // lhz @ 0x805FDBE0
    r0 = r0 rlwinm 0x1b; // rlwinm
    if (!=) goto 0x0x805fdc00;
    r0 = *(0 + r31); // lwz @ 0x805FDBF0
    r0 = r0 | 0xc20; // 0x805FDBF4
    *(0 + r31) = r0; // stw @ 0x805FDBF8
    /* b 0x805fdc3c */ // 0x805FDBFC
    if (!=) goto 0x0x805fdc18;
    r0 = *(0 + r31); // lwz @ 0x805FDC08
    r0 = r0 | 0x100; // 0x805FDC0C
    *(0 + r31) = r0; // stw @ 0x805FDC10
    /* b 0x805fdc3c */ // 0x805FDC14
    if (!=) goto 0x0x805fdc30;
    r0 = *(0 + r31); // lwz @ 0x805FDC20
    r0 = r0 | 0x8900; // 0x805FDC24
    *(0 + r31) = r0; // stw @ 0x805FDC28
    /* b 0x805fdc3c */ // 0x805FDC2C
    r0 = *(0 + r31); // lwz @ 0x805FDC30
    r0 = r0 | 0x20; // 0x805FDC34
    *(0 + r31) = r0; // stw @ 0x805FDC38
    r0 = *(0x14 + r1); // lwz @ 0x805FDC3C
    r31 = *(0xc + r1); // lwz @ 0x805FDC40
    r30 = *(8 + r1); // lwz @ 0x805FDC44
    return;
}