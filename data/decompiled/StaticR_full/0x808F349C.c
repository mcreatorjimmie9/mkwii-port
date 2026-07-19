/* Function at 0x808F349C, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_808F349C(int r3, int r4)
{
    /* bnelr  */ // 0x808F34A0
    r0 = *(0 + r3); // lwz @ 0x808F34A4
    /* bgtlr  */ // 0x808F34AC
    /* lis r4, 0 */ // 0x808F34B0
    /* slwi r0, r0, 2 */ // 0x808F34B4
    r4 = r4 + 0; // 0x808F34B8
    /* lwzx r4, r4, r0 */ // 0x808F34BC
    /* mtctr r4 */ // 0x808F34C0
    /* bctr  */ // 0x808F34C4
}