/* Function at 0x80882540, size=16 bytes */
/* Stack frame: 144 bytes */

void FUN_80882540(void)
{
    /* Stack frame: -144(r1) */
    *(0x94 + r1) = r0; // stw @ 0x80882548
    /* stfd f31, 0x80(r1) */ // 0x8088254C
}