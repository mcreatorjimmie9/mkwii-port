/* Function at 0x807FF014, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_807FF014(int r4, int r5)
{
    r5 = *(4 + r4); // lwz @ 0x807FF014
    r4 = *(0xa0 + r5); // lwz @ 0x807FF018
    r0 = *(0xa4 + r5); // lwz @ 0x807FF01C
    *(4 + r3) = r0; // stw @ 0x807FF020
    *(0 + r3) = r4; // stw @ 0x807FF024
    return;
}