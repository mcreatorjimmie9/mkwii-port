/* Function at 0x808F6AD4, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_808F6AD4(int r3, int r4)
{
    /* lis r4, 0 */ // 0x808F6AD4
    r3 = *(0 + r4); // lwz @ 0x808F6AD8
    /* beqlr  */ // 0x808F6AE0
    /* li r0, 0 */ // 0x808F6AE4
    *(0 + r4) = r0; // stw @ 0x808F6AE8
    /* beqlr  */ // 0x808F6AEC
    r12 = *(0 + r3); // lwz @ 0x808F6AF0
    /* li r4, 1 */ // 0x808F6AF4
    r12 = *(8 + r12); // lwz @ 0x808F6AF8
    /* mtctr r12 */ // 0x808F6AFC
    /* bctr  */ // 0x808F6B00
}