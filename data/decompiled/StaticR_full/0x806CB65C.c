/* Function at 0x806CB65C, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_806CB65C(int r4)
{
    /* li r0, 0 */ // 0x806CB660
    if (==) goto 0x0x806cb670;
    if (!=) goto 0x0x806cb674;
    /* li r0, 1 */ // 0x806CB670
    *(0x17c + r3) = r0; // stb @ 0x806CB674
    return;
}