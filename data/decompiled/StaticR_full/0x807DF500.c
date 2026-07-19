/* Function at 0x807DF500, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807DF500(int r3)
{
    r3 = *(0x34 + r3); // lwz @ 0x807DF500
    r12 = *(0 + r3); // lwz @ 0x807DF504
    r12 = *(0x10 + r12); // lwz @ 0x807DF508
    /* mtctr r12 */ // 0x807DF50C
    /* bctr  */ // 0x807DF510
}