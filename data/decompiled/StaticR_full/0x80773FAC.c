/* Function at 0x80773FAC, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_80773FAC(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80773FB4
    /* stfd f31, 0x70(r1) */ // 0x80773FB8
}