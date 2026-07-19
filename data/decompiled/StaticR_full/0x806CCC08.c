/* Function at 0x806CCC08, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_806CCC08(int r3)
{
    r0 = *(0x90 + r3); // lbz @ 0x806CCC08
    if (==) goto 0x0x806ccc1c;
    /* li r3, 0 */ // 0x806CCC14
    return;
    /* lis r3, 0 */ // 0x806CCC1C
    r3 = *(0 + r3); // lwz @ 0x806CCC20
    /* b 0x80647664 */ // 0x806CCC24
}