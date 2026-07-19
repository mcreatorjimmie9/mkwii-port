/* Function at 0x808603D0, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808603D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x808603D8
    *(0x1c + r1) = r31; // stw @ 0x808603E0
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808603E8
    r30 = r3;
    /* lfs f0, 0(r3) */ // 0x808603F0
    /* stfs f0, 0(r4) */ // 0x808603F4
    /* lfs f0, 0(r5) */ // 0x808603F8
    /* lfs f1, 4(r3) */ // 0x808603FC
    /* stfs f1, 0x10(r4) */ // 0x80860400
    /* lfs f1, 8(r3) */ // 0x80860404
    /* stfs f1, 0x20(r4) */ // 0x80860408
    /* lfs f1, 0(r3) */ // 0x8086040C
    /* fmuls f1, f1, f1 */ // 0x80860410
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80860414
    if (>=) goto 0x0x80860440;
    /* lfs f0, 8(r3) */ // 0x8086041C
    /* lis r4, 0 */ // 0x80860420
    /* lfs f1, 4(r3) */ // 0x80860424
    /* fneg f2, f0 */ // 0x80860428
    /* lfs f0, 0(r4) */ // 0x8086042C
    /* stfs f0, 8(r1) */ // 0x80860430
    /* stfs f2, 0xc(r1) */ // 0x80860434
    /* stfs f1, 0x10(r1) */ // 0x80860438
    /* b 0x80860460 */ // 0x8086043C
    /* lfs f0, 4(r3) */ // 0x80860440
    /* lis r4, 0 */ // 0x80860444
    /* lfs f1, 0(r3) */ // 0x80860448
    /* fneg f2, f0 */ // 0x8086044C
    /* lfs f0, 0(r4) */ // 0x80860450
    /* stfs f1, 0xc(r1) */ // 0x80860454
    /* stfs f2, 8(r1) */ // 0x80860458
    /* stfs f0, 0x10(r1) */ // 0x8086045C
    FUN_805E3430(r3); // bl 0x805E3430
}