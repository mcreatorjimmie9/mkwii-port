/* Function at 0x80816AD0, size=112 bytes */
/* Stack frame: 0 bytes */

void FUN_80816AD0(int r3, int r4, int r5, int r6)
{
    /* lis r6, 0 */ // 0x80816AD0
    /* lfs f0, 0x44c(r3) */ // 0x80816AD4
    /* lfs f2, 0(r6) */ // 0x80816AD8
    /* fcmpu cr0, f2, f0 */ // 0x80816ADC
    if (==) goto 0x0x80816b38;
    r6 = *(0x450 + r3); // lwz @ 0x80816AE4
    r0 = r6 | r5; // 0x80816AE8
    if (!=) goto 0x0x80816b38;
    /* fsubs f3, f0, f1 */ // 0x80816AF4
    /* lfs f2, 0(r4) */ // 0x80816AF8
    /* lfs f0, 0x440(r3) */ // 0x80816AFC
    /* fsubs f0, f2, f0 */ // 0x80816B00
    /* fabs f0, f0 */ // 0x80816B04
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x80816B08
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80816B0C
    if (!=) goto 0x0x80816b38;
    /* lfs f1, 8(r4) */ // 0x80816B14
    /* lfs f0, 0x448(r3) */ // 0x80816B18
    /* fsubs f0, f1, f0 */ // 0x80816B1C
    /* fabs f0, f0 */ // 0x80816B20
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x80816B24
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80816B28
    if (!=) goto 0x0x80816b38;
    /* li r3, 1 */ // 0x80816B30
    return;
    /* li r3, 0 */ // 0x80816B38
    return;
}