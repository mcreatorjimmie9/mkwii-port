/* Function at 0x8066D550, size=96 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8066D550(int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x8066D558
    r5 = r5 + 0; // 0x8066D55C
    *(0x14 + r1) = r0; // stw @ 0x8066D560
    /* lfs f0, 4(r5) */ // 0x8066D564
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8066D568
    if (<=) goto 0x0x8066d57c;
    /* lfs f0, 0(r5) */ // 0x8066D570
    /* fsubs f1, f0, f1 */ // 0x8066D574
    /* b 0x8066d584 */ // 0x8066D578
    /* lfs f0, 0(r5) */ // 0x8066D57C
    /* fadds f1, f0, f1 */ // 0x8066D580
    /* lfs f0, 0x44(r5) */ // 0x8066D584
    /* fmuls f0, f0, f1 */ // 0x8066D588
    /* fctiwz f0, f0 */ // 0x8066D58C
    /* stfd f0, 8(r1) */ // 0x8066D590
    r0 = *(0xc + r1); // lwz @ 0x8066D594
    *(0x14 + r4) = r0; // stb @ 0x8066D598
    FUN_806A01D0(); // bl 0x806A01D0
    r0 = *(0x14 + r1); // lwz @ 0x8066D5A0
    return;
}