/* Function at 0x8084AF14, size=16 bytes */
/* Stack frame: 176 bytes */

void FUN_8084AF14(void)
{
    /* Stack frame: -176(r1) */
    *(0xb4 + r1) = r0; // stw @ 0x8084AF1C
    /* stfd f31, 0xa0(r1) */ // 0x8084AF20
}