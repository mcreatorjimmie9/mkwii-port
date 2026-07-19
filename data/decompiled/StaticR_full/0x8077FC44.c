/* Function at 0x8077FC44, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8077FC44(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8077FC4C
    *(0x14 + r1) = r0; // stw @ 0x8077FC50
    /* lfs f1, 0(r5) */ // 0x8077FC54
    *(0xc + r1) = r31; // stw @ 0x8077FC58
    r31 = r3;
    r3 = *(0x20 + r3); // lwz @ 0x8077FC60
    r12 = *(0 + r3); // lwz @ 0x8077FC64
    r12 = *(0x10 + r12); // lwz @ 0x8077FC68
    /* mtctr r12 */ // 0x8077FC6C
    /* bctrl  */ // 0x8077FC70
    r3 = *(0x20 + r31); // lwz @ 0x8077FC74
    r31 = *(0xc + r1); // lwz @ 0x8077FC78
    r0 = *(0x14 + r1); // lwz @ 0x8077FC7C
    r3 = r3 + 0x24; // 0x8077FC80
    return;
}