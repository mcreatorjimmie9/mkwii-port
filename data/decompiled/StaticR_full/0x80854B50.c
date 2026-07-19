/* Function at 0x80854B50, size=16 bytes */
/* Stack frame: 48 bytes */

void FUN_80854B50(void)
{
    /* Stack frame: -48(r1) */
    *(0x34 + r1) = r0; // stw @ 0x80854B58
    /* stfd f31, 0x20(r1) */ // 0x80854B5C
}