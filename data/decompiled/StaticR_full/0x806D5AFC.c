/* Function at 0x806D5AFC, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_806D5AFC(void)
{
    *(0x58 + r3) = r5; // stw @ 0x806D5AFC
    *(0x5c + r3) = r4; // stw @ 0x806D5B00
    return;
}