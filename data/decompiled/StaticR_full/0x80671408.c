/* Function at 0x80671408, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80671408(int r3, int r4, int r5)
{
    r5 = *(0x1c + r3); // lwz @ 0x80671408
    r4 = *(0x20 + r3); // lwz @ 0x8067140C
    r0 = r5 + 1; // 0x80671410
    *(0x1c + r3) = r0; // stw @ 0x80671414
    r0 = r4 + 1; // 0x80671418
    *(0x20 + r3) = r0; // stw @ 0x8067141C
    return;
}