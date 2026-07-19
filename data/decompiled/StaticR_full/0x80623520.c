/* Function at 0x80623520, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80623520(int r3)
{
    r0 = *(0x14 + r3); // lwz @ 0x80623520
    r0 = r0 | 0x20; // 0x80623524
    *(0x14 + r3) = r0; // stw @ 0x80623528
    return;
}