/* Function at 0x8083F588, size=12 bytes */
/* Stack frame: 0 bytes */

void FUN_8083F588(void)
{
    /* li r0, 0 */ // 0x8083F588
    *(0x30 + r3) = r0; // stw @ 0x8083F58C
    return;
}