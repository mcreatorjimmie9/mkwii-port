/* Function at 0x807DA518, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_807DA518(int r3)
{
    /* lfs f0, 0x28(r3) */ // 0x807DA518
    /* lfs f2, 0x24(r3) */ // 0x807DA51C
    /* fadds f0, f0, f1 */ // 0x807DA520
    /* fneg f1, f2 */ // 0x807DA524
    /* stfs f0, 0x28(r3) */ // 0x807DA528
    /* .byte 0xfc, 0x00, 0x10, 0x40 */ // 0x807DA52C
    if (<=) goto 0x0x807da53c;
    /* fmr f0, f2 */ // 0x807DA534
    /* b 0x807da548 */ // 0x807DA538
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x807DA53C
    if (>=) goto 0x0x807da548;
    /* fmr f0, f1 */ // 0x807DA544
    /* stfs f0, 0x28(r3) */ // 0x807DA548
    return;
}