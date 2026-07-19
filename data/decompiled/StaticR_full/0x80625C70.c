/* Function at 0x80625C70, size=24 bytes */
/* Stack frame: 0 bytes */

void FUN_80625C70(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x80625C70
    r3 = *(4 + r3); // lwz @ 0x80625C74
    r0 = *(0x14 + r3); // lwz @ 0x80625C78
    r0 = r0 | 0x10; // 0x80625C7C
    *(0x14 + r3) = r0; // stw @ 0x80625C80
    return;
}