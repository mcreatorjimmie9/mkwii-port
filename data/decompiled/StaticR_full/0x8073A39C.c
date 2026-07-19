/* Function at 0x8073A39C, size=408 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8073A39C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x68 + r1) = r30; // stw @ 0x8073A3B0
    r5 = *(0x58 + r3); // lwz @ 0x8073A3B4
    r4 = *(0x12e + r3); // lbz @ 0x8073A3B8
    r0 = r5 + 1; // 0x8073A3BC
    *(0x58 + r3) = r0; // stw @ 0x8073A3C0
    r4 = r4 + 1; // 0x8073A3C4
    /* subf r4, r5, r4 */ // 0x8073A3C8
    /* cntlzw r0, r4 */ // 0x8073A3D0
    /* srwi r4, r0, 5 */ // 0x8073A3D4
    if (<=) goto 0x0x8073a3e4;
    /* li r0, 0x2b2 */ // 0x8073A3DC
    *(0x58 + r3) = r0; // stw @ 0x8073A3E0
    if (==) goto 0x0x8073a43c;
    r0 = *(4 + r3); // lbz @ 0x8073A3EC
    if (!=) goto 0x0x8073a43c;
    r30 = *(0x234 + r3); // lwz @ 0x8073A3F8
    if (==) goto 0x0x8073a43c;
    r12 = *(0 + r30); // lwz @ 0x8073A404
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8073A40C
    /* mtctr r12 */ // 0x8073A410
    /* bctrl  */ // 0x8073A414
    r0 = *(0xb0 + r31); // lbz @ 0x8073A418
    if (==) goto 0x0x8073a43c;
    r12 = *(0 + r30); // lwz @ 0x8073A424
    r3 = r30;
    r4 = r31 + 0x72c; // 0x8073A42C
    r12 = *(0x70 + r12); // lwz @ 0x8073A430
    /* mtctr r12 */ // 0x8073A434
    /* bctrl  */ // 0x8073A438
    /* lfs f1, 0x74(r31) */ // 0x8073A43C
    /* lis r3, 0 */ // 0x8073A440
    /* lfs f0, 0(r3) */ // 0x8073A444
    r3 = r31 + 0x6f4; // 0x8073A448
    /* fneg f1, f1 */ // 0x8073A44C
    /* stfs f0, 0x20(r1) */ // 0x8073A450
    /* stfs f1, 0x24(r1) */ // 0x8073A45C
    /* stfs f0, 0x28(r1) */ // 0x8073A460
    FUN_80743D20(r4, r5); // bl 0x80743D20
    r6 = *(0x6f4 + r31); // lwz @ 0x8073A468
    r0 = *(0x6f8 + r31); // lwz @ 0x8073A470
    r4 = r31 + 0x6d0; // 0x8073A474
    *(0x34 + r1) = r0; // stw @ 0x8073A478
    *(0x30 + r1) = r6; // stw @ 0x8073A480
    r6 = *(0x6fc + r31); // lwz @ 0x8073A484
    r0 = *(0x700 + r31); // lwz @ 0x8073A488
    *(0x3c + r1) = r0; // stw @ 0x8073A48C
    *(0x38 + r1) = r6; // stw @ 0x8073A490
    r6 = *(0x704 + r31); // lwz @ 0x8073A494
    r0 = *(0x708 + r31); // lwz @ 0x8073A498
    *(0x44 + r1) = r0; // stw @ 0x8073A49C
    *(0x40 + r1) = r6; // stw @ 0x8073A4A0
    r6 = *(0x70c + r31); // lwz @ 0x8073A4A4
    r0 = *(0x710 + r31); // lwz @ 0x8073A4A8
    *(0x4c + r1) = r0; // stw @ 0x8073A4AC
    *(0x48 + r1) = r6; // stw @ 0x8073A4B0
    r6 = *(0x714 + r31); // lwz @ 0x8073A4B4
    r0 = *(0x718 + r31); // lwz @ 0x8073A4B8
    *(0x54 + r1) = r0; // stw @ 0x8073A4BC
    *(0x50 + r1) = r6; // stw @ 0x8073A4C0
    r6 = *(0x71c + r31); // lwz @ 0x8073A4C4
    r0 = *(0x720 + r31); // lwz @ 0x8073A4C8
    *(0x5c + r1) = r0; // stw @ 0x8073A4CC
    *(0x58 + r1) = r6; // stw @ 0x8073A4D0
    FUN_805A4464(); // bl 0x805A4464
    /* lfs f2, 8(r1) */ // 0x8073A4D8
    /* lfs f1, 0xc(r1) */ // 0x8073A4DC
    /* lfs f0, 0x10(r1) */ // 0x8073A4E0
    /* stfs f2, 0x3c(r1) */ // 0x8073A4E4
    /* stfs f1, 0x4c(r1) */ // 0x8073A4E8
    /* stfs f0, 0x5c(r1) */ // 0x8073A4EC
    r30 = *(0x234 + r31); // lwz @ 0x8073A4F0
    if (!=) goto 0x0x8073a504;
    /* li r0, 0 */ // 0x8073A4FC
    /* b 0x8073a578 */ // 0x8073A500
    r3 = r30 + 0x74; // 0x8073A504
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073a51c;
    /* li r3, 0 */ // 0x8073A514
    /* b 0x8073a520 */ // 0x8073A518
    r3 = *(0xc + r3); // lwz @ 0x8073A51C
    /* li r0, 0 */ // 0x8073A524
    if (==) goto 0x0x8073a534;
    if (!=) goto 0x0x8073a538;
}