/* Function at 0x808AB978, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_808AB978(int r3)
{
    /* lis r3, 0 */ // 0x808AB978
    r3 = *(0 + r3); // lwz @ 0x808AB97C
    r3 = *(0x50 + r3); // lwz @ 0x808AB980
    /* lfs f1, 0x34(r3) */ // 0x808AB984
    return;
}