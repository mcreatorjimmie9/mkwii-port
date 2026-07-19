/* Function at 0x80845824, size=16 bytes */
/* Stack frame: 208 bytes */

void FUN_80845824(void)
{
    /* Stack frame: -208(r1) */
    *(0xd4 + r1) = r0; // stw @ 0x8084582C
    /* stfd f31, 0xc0(r1) */ // 0x80845830
}