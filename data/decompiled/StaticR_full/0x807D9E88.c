/* Function at 0x807D9E88, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_807D9E88(int r4, int r5)
{
    r5 = *(0x14 + r4); // lwz @ 0x807D9E88
    r0 = *(0x18 + r4); // lwz @ 0x807D9E8C
    *(4 + r3) = r0; // stw @ 0x807D9E90
    *(0 + r3) = r5; // stw @ 0x807D9E94
    r0 = *(0x1c + r4); // lwz @ 0x807D9E98
    *(8 + r3) = r0; // stw @ 0x807D9E9C
    return;
}