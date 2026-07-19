/* Function at 0x80621090, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_80621090(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x80621098
    /* stfd f31, 0x60(r1) */ // 0x8062109C
}