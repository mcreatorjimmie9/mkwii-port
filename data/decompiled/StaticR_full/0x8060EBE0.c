/* Function at 0x8060EBE0, size=68 bytes */
/* Stack frame: 0 bytes */

void FUN_8060EBE0(int r3, int r4, int r5, int r6)
{
    r6 = *(0 + r3); // lwz @ 0x8060EBE0
    r5 = *(4 + r6); // lwz @ 0x8060EBE4
    r0 = *(0xc + r5); // lwz @ 0x8060EBE8
    /* rlwinm. r0, r0, 0, 0xc, 0xd */ // 0x8060EBEC
    if (!=) goto 0x0x8060ec04;
    r5 = *(4 + r6); // lwz @ 0x8060EBF4
    r0 = *(0xc + r5); // lwz @ 0x8060EBF8
    r0 = r0 | 4; // 0x8060EBFC
    *(0xc + r5) = r0; // stw @ 0x8060EC00
    /* beqlr  */ // 0x8060EC08
    r3 = *(0 + r3); // lwz @ 0x8060EC0C
    r3 = *(4 + r3); // lwz @ 0x8060EC10
    r0 = *(0x14 + r3); // lwz @ 0x8060EC14
    r0 = r0 | 0x1000; // 0x8060EC18
    *(0x14 + r3) = r0; // stw @ 0x8060EC1C
    return;
}