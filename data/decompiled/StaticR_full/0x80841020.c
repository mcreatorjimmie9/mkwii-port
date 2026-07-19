/* Function at 0x80841020, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_80841020(void)
{
    /* li r0, 0x4b0 */ // 0x80841020
    *(0x40 + r3) = r0; // stw @ 0x80841024
    return;
}