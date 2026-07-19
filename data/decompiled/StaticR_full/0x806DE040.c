/* Function at 0x806DE040, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_806DE040(void)
{
    *(4 + r3) = r4; // stw @ 0x806DE040
    *(0x34 + r3) = r5; // stw @ 0x806DE044
    *(0x38 + r3) = r6; // stw @ 0x806DE048
    return;
}