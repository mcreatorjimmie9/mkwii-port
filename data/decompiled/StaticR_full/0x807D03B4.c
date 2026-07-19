/* Function at 0x807D03B4, size=176 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_807D03B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* li r6, 0 */ // 0x807D03BC
    /* li r5, 0 */ // 0x807D03C0
    *(0x14 + r1) = r0; // stw @ 0x807D03C4
    /* li r7, 0 */ // 0x807D03C8
    r4 = *(8 + r3); // lwz @ 0x807D03CC
    /* addic. r0, r4, -1 */ // 0x807D03D0
    /* li r4, 0 */ // 0x807D03D4
    /* mtctr r0 */ // 0x807D03D8
    if (<=) goto 0x0x807d041c;
    r5 = *(4 + r3); // lwz @ 0x807D03E0
    r0 = r7 + 1; // 0x807D03E4
    /* mulli r0, r0, 0x14 */ // 0x807D03E8
    r6 = r5 + r4; // 0x807D03EC
    /* lfs f0, 4(r6) */ // 0x807D03F0
    r5 = r5 + r0; // 0x807D03F4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807D03F8
    /* cror cr0eq, cr0lt, cr0eq */ // 0x807D03FC
    if (!=) goto 0x0x807d0410;
    /* lfs f0, 4(r5) */ // 0x807D0404
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D0408
    if (<) goto 0x0x807d041c;
    r4 = r4 + 0x14; // 0x807D0410
    r7 = r7 + 1; // 0x807D0414
    if (counter-- != 0) goto 0x0x807d03e0;
    /* lfs f2, 4(r6) */ // 0x807D041C
    /* lfs f0, 4(r5) */ // 0x807D0420
    /* fsubs f1, f1, f2 */ // 0x807D0424
    /* fsubs f2, f0, f2 */ // 0x807D0428
    /* .byte 0xfc, 0x01, 0x10, 0x40 */ // 0x807D042C
    if (<=) goto 0x0x807d043c;
    /* fmr f1, f2 */ // 0x807D0434
    /* b 0x807d0450 */ // 0x807D0438
    /* lis r4, 0 */ // 0x807D043C
    /* lfs f0, 0(r4) */ // 0x807D0440
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D0444
    if (>=) goto 0x0x807d0450;
    /* fmr f1, f0 */ // 0x807D044C
    /* fdivs f3, f1, f2 */ // 0x807D0450
    /* lfs f1, 0(r6) */ // 0x807D0454
    /* lfs f2, 0(r5) */ // 0x807D0458
    FUN_805E3430(); // bl 0x805E3430
}