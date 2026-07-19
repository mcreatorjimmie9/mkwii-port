/* Function at 0x8070D6C8, size=28 bytes */
/* Stack frame: 0 bytes */

void FUN_8070D6C8(int r3, int r4)
{
    r0 = *(0x10 + r3); // lbz @ 0x8070D6C8
    /* bnelr  */ // 0x8070D6D0
    /* lis r3, 0 */ // 0x8070D6D4
    /* li r4, 1 */ // 0x8070D6D8
    r3 = *(0 + r3); // lwz @ 0x8070D6DC
    /* b 0x805e3430 */ // 0x8070D6E0
}