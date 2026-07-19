/* Function at 0x8080D6AC, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_8080D6AC(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x8080D6B4
    /* stfd f31, 0x60(r1) */ // 0x8080D6B8
}