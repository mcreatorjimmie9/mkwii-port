/* Function at 0x808AF1F8, size=16 bytes */
/* Stack frame: 96 bytes */

void FUN_808AF1F8(void)
{
    /* Stack frame: -96(r1) */
    *(0x64 + r1) = r0; // stw @ 0x808AF200
    /* stfd f31, 0x50(r1) */ // 0x808AF204
}