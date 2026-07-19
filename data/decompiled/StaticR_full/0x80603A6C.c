/* Function at 0x80603A6C, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_80603A6C(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x80603A74
    /* stfd f31, 0x60(r1) */ // 0x80603A78
}