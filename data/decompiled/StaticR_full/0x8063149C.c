/* Function at 0x8063149C, size=48 bytes */
/* Stack frame: 0 bytes */

void FUN_8063149C(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8063149C
    r3 = *(0 + r4); // lwz @ 0x806314A0
    /* beqlr  */ // 0x806314A8
    /* li r0, 0 */ // 0x806314AC
    *(0 + r4) = r0; // stw @ 0x806314B0
    /* beqlr  */ // 0x806314B4
    r12 = *(0 + r3); // lwz @ 0x806314B8
    /* li r4, 1 */ // 0x806314BC
    r12 = *(8 + r12); // lwz @ 0x806314C0
    /* mtctr r12 */ // 0x806314C4
    /* bctr  */ // 0x806314C8
}