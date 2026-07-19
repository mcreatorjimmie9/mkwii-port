/* Function at 0x8086CA5C, size=16 bytes */
/* Stack frame: 64 bytes */

void FUN_8086CA5C(void)
{
    /* Stack frame: -64(r1) */
    *(0x44 + r1) = r0; // stw @ 0x8086CA64
    /* stfd f31, 0x30(r1) */ // 0x8086CA68
}