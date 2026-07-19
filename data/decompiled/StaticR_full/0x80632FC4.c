/* Function at 0x80632FC4, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_80632FC4(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x80632FCC
    /* stfd f31, 0x50(r1) */ // 0x80632FD0
}