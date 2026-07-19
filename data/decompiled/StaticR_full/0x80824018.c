/* Function at 0x80824018, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80824018(void)
{
    /* li r0, 0x78 */ // 0x80824018
    *(0x240 + r3) = r0; // stw @ 0x8082401C
    return;
}