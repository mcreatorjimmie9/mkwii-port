/* Function at 0x8085842C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8085842C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x80858434
    r0 = *(0x14a + r3); // lbz @ 0x80858438
    if (==) goto 0x0x80858450;
    r0 = *(0x144 + r3); // lbz @ 0x80858444
    if (!=) goto 0x0x80858458;
    /* li r3, 0 */ // 0x80858450
    /* b 0x808584a8 */ // 0x80858454
    r0 = *(0xfa + r3); // lhz @ 0x80858458
    r4 = r3 + r0; // 0x8085845C
    r0 = *(0x14c + r4); // lbz @ 0x80858460
    /* clrlwi. r0, r0, 0x1f */ // 0x80858464
    if (==) goto 0x0x808584a4;
    r0 = *(0xfc + r3); // lhz @ 0x8085846C
    r4 = r3 + r0; // 0x80858470
    r0 = *(0x14c + r4); // lbz @ 0x80858474
    /* clrlwi. r0, r0, 0x1f */ // 0x80858478
    if (!=) goto 0x0x808584a4;
    r0 = *(0xf8 + r3); // lbz @ 0x80858480
    if (==) goto 0x0x80858498;
    r3 = *(0x6c + r3); // lwz @ 0x8085848C
    FUN_805EEF9C(); // bl 0x805EEF9C
    /* b 0x8085849c */ // 0x80858494
    /* li r3, 0 */ // 0x80858498
    /* cntlzw r0, r3 */ // 0x8085849C
    /* srwi r0, r0, 5 */ // 0x808584A0
    r3 = r0;
    r0 = *(0x14 + r1); // lwz @ 0x808584A8
    return;
}