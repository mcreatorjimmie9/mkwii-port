/* Function at 0x8060F264, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_8060F264(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x8060F264
    r3 = *(4 + r3); // lwz @ 0x8060F268
    r0 = *(0xc + r3); // lwz @ 0x8060F26C
    r0 = r0 | 0x2000; // 0x8060F270
    *(0xc + r3) = r0; // stw @ 0x8060F274
    return;
}