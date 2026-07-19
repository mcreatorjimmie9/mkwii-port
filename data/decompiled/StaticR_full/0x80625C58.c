/* Function at 0x80625C58, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80625C58(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x80625C58
    r3 = *(4 + r3); // lwz @ 0x80625C5C
    r0 = *(0x14 + r3); // lwz @ 0x80625C60
    r0 = r0 | 8; // 0x80625C64
    *(0x14 + r3) = r0; // stw @ 0x80625C68
    return;
}