/* Function at 0x808585EC, size=168 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808585EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808585F4
    r0 = *(0x14b + r3); // lbz @ 0x808585F8
    if (==) goto 0x0x80858610;
    r0 = *(0x145 + r3); // lbz @ 0x80858604
    if (!=) goto 0x0x80858618;
    /* li r3, 0 */ // 0x80858610
    /* b 0x80858684 */ // 0x80858614
    r4 = *(0 + r3); // lwz @ 0x80858618
    r4 = *(4 + r4); // lwz @ 0x8085861C
    r0 = *(0xc + r4); // lwz @ 0x80858620
    /* rlwinm. r0, r0, 0, 0xf, 0xf */ // 0x80858624
    if (==) goto 0x0x80858634;
    /* li r3, 0 */ // 0x8085862C
    /* b 0x80858684 */ // 0x80858630
    r0 = *(0xfa + r3); // lhz @ 0x80858634
    r4 = r3 + r0; // 0x80858638
    r0 = *(0x14c + r4); // lbz @ 0x8085863C
    /* rlwinm. r0, r0, 0x1d, 0x1f, 0x1f */ // 0x80858640
    if (==) goto 0x0x80858680;
    r0 = *(0xfc + r3); // lhz @ 0x80858648
    r4 = r3 + r0; // 0x8085864C
    r0 = *(0x14c + r4); // lbz @ 0x80858650
    /* rlwinm. r0, r0, 0x1d, 0x1f, 0x1f */ // 0x80858654
    if (!=) goto 0x0x80858680;
    r0 = *(0xf8 + r3); // lbz @ 0x8085865C
    if (==) goto 0x0x80858674;
    r3 = *(0x6c + r3); // lwz @ 0x80858668
    FUN_805EEF9C(); // bl 0x805EEF9C
    /* b 0x80858678 */ // 0x80858670
    /* li r3, 0 */ // 0x80858674
    /* cntlzw r0, r3 */ // 0x80858678
    /* srwi r0, r0, 5 */ // 0x8085867C
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x80858684
    return;
}