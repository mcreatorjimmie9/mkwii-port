/* Function at 0x80863234, size=72 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_80863234(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x8086323C
    /* lfs f0, 0(r3) */ // 0x80863240
    *(0x14 + r1) = r0; // stw @ 0x80863244
    /* fmuls f0, f0, f1 */ // 0x80863248
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8086324C
    if (<=) goto 0x0x80863260;
    /* lis r3, 0 */ // 0x80863254
    /* lfs f1, 0(r3) */ // 0x80863258
    /* b 0x80863278 */ // 0x8086325C
    /* fneg f0, f2 */ // 0x80863260
    /* fdivs f1, f0, f1 */ // 0x80863264
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x8086326C
    /* lfs f0, 0(r3) */ // 0x80863270
    /* fsubs f1, f0, f1 */ // 0x80863274
    r0 = *(0x14 + r1); // lwz @ 0x80863278
}