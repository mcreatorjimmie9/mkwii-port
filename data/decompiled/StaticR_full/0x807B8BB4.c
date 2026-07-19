/* Function at 0x807B8BB4, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_807B8BB4(int r4, int r5)
{
    r5 = *(0x10 + r4); // lwz @ 0x807B8BB4
    r0 = *(0x14 + r4); // lwz @ 0x807B8BB8
    *(4 + r3) = r0; // stw @ 0x807B8BBC
    *(0 + r3) = r5; // stw @ 0x807B8BC0
    r0 = *(0x18 + r4); // lwz @ 0x807B8BC4
    *(8 + r3) = r0; // stw @ 0x807B8BC8
    return;
}