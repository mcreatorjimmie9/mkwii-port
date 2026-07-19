/* Function at 0x80841014, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80841014(void)
{
    /* li r0, 0x384 */ // 0x80841014
    *(0x3c + r3) = r0; // stw @ 0x80841018
    return;
}