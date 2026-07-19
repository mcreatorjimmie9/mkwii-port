/* Function at 0x80843670, size=252 bytes */
/* Stack frame: 16 bytes */

int FUN_80843670(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* lfs f1, 0(r4) */ // 0x80843674
    /* lfs f0, 0x14(r3) */ // 0x80843678
    r0 = *(0x20 + r3); // lwz @ 0x8084367C
    /* fsubs f0, f1, f0 */ // 0x80843680
    /* fctiwz f0, f0 */ // 0x80843684
    /* stfd f0, 8(r1) */ // 0x80843688
    r8 = *(0xc + r1); // lwz @ 0x8084368C
    /* and. r0, r8, r0 */ // 0x80843690
    if (==) goto 0x0x808436a0;
    /* li r3, 0 */ // 0x80843698
    /* b 0x80843764 */ // 0x8084369C
    /* lfs f1, 4(r4) */ // 0x808436A0
    /* lfs f0, 0x18(r3) */ // 0x808436A4
    r0 = *(0x24 + r3); // lwz @ 0x808436A8
    /* fsubs f0, f1, f0 */ // 0x808436AC
    /* fctiwz f0, f0 */ // 0x808436B0
    /* stfd f0, 8(r1) */ // 0x808436B4
    r9 = *(0xc + r1); // lwz @ 0x808436B8
    /* and. r0, r9, r0 */ // 0x808436BC
    if (==) goto 0x0x808436cc;
    /* li r3, 0 */ // 0x808436C4
    /* b 0x80843764 */ // 0x808436C8
    /* lfs f1, 8(r4) */ // 0x808436CC
    /* lfs f0, 0x1c(r3) */ // 0x808436D0
    r0 = *(0x28 + r3); // lwz @ 0x808436D4
    /* fsubs f0, f1, f0 */ // 0x808436D8
    /* fctiwz f0, f0 */ // 0x808436DC
    /* stfd f0, 8(r1) */ // 0x808436E0
    r10 = *(0xc + r1); // lwz @ 0x808436E4
    /* and. r0, r10, r0 */ // 0x808436E8
    if (==) goto 0x0x808436f8;
    /* li r3, 0 */ // 0x808436F0
    /* b 0x80843764 */ // 0x808436F4
    r11 = *(0x2c + r3); // lwz @ 0x808436F8
    r5 = *(0x34 + r3); // lwz @ 0x808436FC
    r6 = r10 >> r11; // srw
    r0 = *(0x30 + r3); // lwz @ 0x80843704
    r4 = r9 >> r11; // srw
    r7 = r8 >> r11; // srw
    r5 = r6 << r5; // slw
    r6 = *(0xc + r3); // lwz @ 0x80843714
    r0 = r4 << r0; // slw
    r0 = r5 | r0; // 0x8084371C
    r0 = r7 | r0; // 0x80843720
    /* slwi r0, r0, 2 */ // 0x80843724
    /* lwzx r3, r6, r0 */ // 0x80843728
    /* rlwinm. r0, r3, 0, 0, 0 */ // 0x8084372C
    if (!=) goto 0x0x8084375c;
    r6 = r6 + r3; // 0x80843738
    r0 = r10 >> r11; // srw
    r4 = r8 >> r11; // srw
    r3 = r9 >> r11; // srw
    r0 = r0 rlwinm 2; // rlwinm
    r0 = r3 rlwimi 1; // rlwimi
    r0 = r4 rlwimi 0; // rlwimi
    /* slwi r0, r0, 2 */ // 0x80843754
    /* b 0x80843728 */ // 0x80843758
    /* clrlwi r0, r3, 1 */ // 0x8084375C
    r3 = r6 + r0; // 0x80843760
    return;
}