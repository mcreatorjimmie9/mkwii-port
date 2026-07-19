/* Function at 0x8061D374, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_8061D374(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8061D374
    r3 = *(0 + r4); // lwz @ 0x8061D378
    /* beqlr  */ // 0x8061D380
    /* li r0, 0 */ // 0x8061D384
    *(0 + r4) = r0; // stw @ 0x8061D388
    /* beqlr  */ // 0x8061D38C
    r12 = *(0 + r3); // lwz @ 0x8061D390
    /* li r4, 1 */ // 0x8061D394
    r12 = *(8 + r12); // lwz @ 0x8061D398
    /* mtctr r12 */ // 0x8061D39C
    /* bctr  */ // 0x8061D3A0
}