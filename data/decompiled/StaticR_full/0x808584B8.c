/* Function at 0x808584B8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_808584B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808584C0
    r0 = *(0x14a + r3); // lbz @ 0x808584C4
    if (==) goto 0x0x808584dc;
    r0 = *(0x144 + r3); // lbz @ 0x808584D0
    if (!=) goto 0x0x808584e4;
    /* li r3, 0 */ // 0x808584DC
    /* b 0x80858534 */ // 0x808584E0
    r0 = *(0xfa + r3); // lhz @ 0x808584E4
    r4 = r3 + r0; // 0x808584E8
    r0 = *(0x14c + r4); // lbz @ 0x808584EC
    /* rlwinm. r0, r0, 0x1f, 0x1f, 0x1f */ // 0x808584F0
    if (==) goto 0x0x80858530;
    r0 = *(0xfc + r3); // lhz @ 0x808584F8
    r4 = r3 + r0; // 0x808584FC
    r0 = *(0x14c + r4); // lbz @ 0x80858500
    /* rlwinm. r0, r0, 0x1f, 0x1f, 0x1f */ // 0x80858504
    if (!=) goto 0x0x80858530;
    r0 = *(0xf8 + r3); // lbz @ 0x8085850C
    if (==) goto 0x0x80858524;
    r3 = *(0x6c + r3); // lwz @ 0x80858518
    FUN_805EEF9C(); // bl 0x805EEF9C
    /* b 0x80858528 */ // 0x80858520
    /* li r3, 0 */ // 0x80858524
    /* cntlzw r0, r3 */ // 0x80858528
    /* srwi r0, r0, 5 */ // 0x8085852C
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x80858534
    return;
}