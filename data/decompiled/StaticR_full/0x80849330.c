/* Function at 0x80849330, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_80849330(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80849338
    /* stfd f31, 0x70(r1) */ // 0x8084933C
}