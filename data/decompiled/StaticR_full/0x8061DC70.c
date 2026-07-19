/* Function at 0x8061DC70, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_8061DC70(int r3, int r4)
{
    r3 = *(0 + r3); // lwz @ 0x8061DC70
    /* lis r4, 0 */ // 0x8061DC74
    r4 = *(0 + r4); // lwz @ 0x8061DC78
    r3 = *(0 + r3); // lwz @ 0x8061DC7C
    r4 = *(0xc + r4); // lwz @ 0x8061DC80
    r0 = *(0x10 + r3); // lbz @ 0x8061DC84
    /* slwi r0, r0, 2 */ // 0x8061DC88
    /* lwzx r3, r4, r0 */ // 0x8061DC8C
    r3 = *(0x48 + r3); // lwz @ 0x8061DC90
    return;
}