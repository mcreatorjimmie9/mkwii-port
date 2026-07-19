/* Function at 0x8088FA00, size=16 bytes */
/* Stack frame: 352 bytes */

void FUN_8088FA00(void)
{
    /* Stack frame: -352(r1) */
    *(0x164 + r1) = r0; // stw @ 0x8088FA08
    /* stfd f31, 0x150(r1) */ // 0x8088FA0C
}