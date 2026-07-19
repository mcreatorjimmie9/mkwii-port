/* Function at 0x80807E5C, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_80807E5C(int r4, int r5)
{
    r5 = *(0x30 + r4); // lwz @ 0x80807E5C
    r0 = *(0x34 + r4); // lwz @ 0x80807E60
    *(4 + r3) = r0; // stw @ 0x80807E64
    *(0 + r3) = r5; // stw @ 0x80807E68
    r0 = *(0x38 + r4); // lwz @ 0x80807E6C
    *(8 + r3) = r0; // stw @ 0x80807E70
    return;
}