/* Function at 0x80642F68, size=16 bytes */
/* Stack frame: 240 bytes */

void FUN_80642F68(void)
{
    /* Stack frame: -240(r1) */
    *(0xf4 + r1) = r0; // stw @ 0x80642F70
    /* stfd f31, 0xe0(r1) */ // 0x80642F74
}