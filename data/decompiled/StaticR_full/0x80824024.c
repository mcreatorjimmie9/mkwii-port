/* Function at 0x80824024, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80824024(void)
{
    /* li r0, 0 */ // 0x80824024
    *(0x240 + r3) = r0; // stw @ 0x80824028
    return;
}