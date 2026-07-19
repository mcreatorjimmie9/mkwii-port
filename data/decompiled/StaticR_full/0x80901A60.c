/* Function at 0x80901A60, size=16 bytes */
/* Stack frame: 352 bytes */

void FUN_80901A60(void)
{
    /* Stack frame: -352(r1) */
    *(0x164 + r1) = r0; // stw @ 0x80901A68
    /* stfd f31, 0x150(r1) */ // 0x80901A6C
}