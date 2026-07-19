/* Function at 0x80655280, size=16 bytes */
/* Stack frame: 288 bytes */

void FUN_80655280(void)
{
    /* Stack frame: -288(r1) */
    *(0x124 + r1) = r0; // stw @ 0x80655288
    /* stfd f31, 0x110(r1) */ // 0x8065528C
}