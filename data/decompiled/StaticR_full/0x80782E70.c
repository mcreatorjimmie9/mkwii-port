/* Function at 0x80782E70, size=16 bytes */
/* Stack frame: 256 bytes */

void FUN_80782E70(void)
{
    /* Stack frame: -256(r1) */
    *(0x104 + r1) = r0; // stw @ 0x80782E78
    /* stfd f31, 0xf0(r1) */ // 0x80782E7C
}