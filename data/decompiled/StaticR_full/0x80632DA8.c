/* Function at 0x80632DA8, size=16 bytes */
/* Stack frame: 0 bytes */

void FUN_80632DA8(int r3)
{
    /* lis r3, 0 */ // 0x80632DA8
    r3 = *(0 + r3); // lwz @ 0x80632DAC
    r3 = *(0x4c + r3); // lwz @ 0x80632DB0
    return;
}