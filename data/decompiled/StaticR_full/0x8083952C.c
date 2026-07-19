/* Function at 0x8083952C, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_8083952C(void)
{
    /* li r0, 0 */ // 0x8083952C
    *(0x280 + r3) = r0; // stw @ 0x80839530
    *(0x2b8 + r3) = r0; // stw @ 0x80839534
    return;
}