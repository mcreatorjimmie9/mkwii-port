/* Function at 0x80623CFC, size=16 bytes */
/* Stack frame: 112 bytes */

void FUN_80623CFC(void)
{
    /* Stack frame: -112(r1) */
    *(0x74 + r1) = r0; // stw @ 0x80623D04
    /* stfd f31, 0x60(r1) */ // 0x80623D08
}