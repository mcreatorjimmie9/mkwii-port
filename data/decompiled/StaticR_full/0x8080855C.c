/* Function at 0x8080855C, size=16 bytes */
/* Stack frame: 128 bytes */

void FUN_8080855C(void)
{
    /* Stack frame: -128(r1) */
    *(0x84 + r1) = r0; // stw @ 0x80808564
    /* stfd f31, 0x70(r1) */ // 0x80808568
}