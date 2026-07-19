/* Function at 0x805C1484, size=68 bytes */
/* Stack frame: 0 bytes */

int FUN_805C1484(int r3, int r5, int r6)
{
    r6 = *(0xc0c + r3); // lwz @ 0x805C1484
    r0 = *(0x17fc + r3); // lwz @ 0x805C1488
    if (!=) goto 0x0x805c14bc;
    r5 = r3 + 0x23f0; // 0x805C1494
    if (!=) goto 0x0x805c14ac;
    r0 = r3 + 0x4bf0; // 0x805C14A0
    *(0x17fc + r3) = r0; // stw @ 0x805C14A4
    /* b 0x805c14bc */ // 0x805C14A8
    r0 = r3 + 0x4bf0; // 0x805C14AC
    if (!=) goto 0x0x805c14bc;
    *(0x17fc + r3) = r5; // stw @ 0x805C14B8
    r3 = *(0x17fc + r3); // lwz @ 0x805C14BC
    /* li r5, 0x2800 */ // 0x805C14C0
    /* b 0x805e3430 */ // 0x805C14C4
}