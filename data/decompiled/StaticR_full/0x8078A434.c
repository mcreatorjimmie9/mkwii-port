/* Function at 0x8078A434, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078A434(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8078A440
    r31 = r3;
    r3 = *(0x54 + r3); // lwz @ 0x8078A448
    FUN_8061ED60(); // bl 0x8061ED60
    /* lis r4, 0 */ // 0x8078A450
    /* lis r3, 0 */ // 0x8078A454
    /* lfs f2, 0(r4) */ // 0x8078A458
    /* lfd f0, 0(r3) */ // 0x8078A45C
    /* fadds f2, f2, f1 */ // 0x8078A460
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8078A464
    /* stfs f2, 0x24(r31) */ // 0x8078A468
    if (<=) goto 0x0x8078a490;
    r0 = *(0 + r31); // lwz @ 0x8078A470
    /* lis r3, 0 */ // 0x8078A474
    r3 = r3 + 0; // 0x8078A478
    /* mulli r0, r0, 0xc */ // 0x8078A47C
    /* lwzx r3, r3, r0 */ // 0x8078A480
    r0 = r3 + 6; // 0x8078A484
    *(0x44 + r31) = r0; // stw @ 0x8078A488
    /* b 0x8078a4ac */ // 0x8078A48C
    r0 = *(0 + r31); // lwz @ 0x8078A490
    /* lis r3, 0 */ // 0x8078A494
    r3 = r3 + 0; // 0x8078A498
    /* mulli r0, r0, 0xc */ // 0x8078A49C
    /* lwzx r3, r3, r0 */ // 0x8078A4A0
    r0 = r3 + 5; // 0x8078A4A4
    *(0x44 + r31) = r0; // stw @ 0x8078A4A8
    /* lis r3, 0 */ // 0x8078A4AC
    /* lfs f0, 0(r3) */ // 0x8078A4B0
    /* stfs f0, 0x48(r31) */ // 0x8078A4B4
    r31 = *(0xc + r1); // lwz @ 0x8078A4B8
    r0 = *(0x14 + r1); // lwz @ 0x8078A4BC
    return;
}