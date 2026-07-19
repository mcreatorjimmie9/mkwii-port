/* Function at 0x805F2E0C, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_805F2E0C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r8 = r4;
    *(0x14 + r1) = r0; // stw @ 0x805F2E18
    *(0xc + r1) = r31; // stw @ 0x805F2E1C
    r31 = r5;
    r0 = *(0x54 + r3); // lwz @ 0x805F2E24
    if (==) goto 0x0x805f2e98;
    if (<) goto 0x0x805f2e98;
    /* clrlwi r0, r7, 0x18 */ // 0x805F2E38
    r4 = *(0x3c + r3); // lwz @ 0x805F2E3C
    /* mulli r0, r0, 0xc */ // 0x805F2E40
    r4 = *(0 + r4); // lwz @ 0x805F2E44
    r4 = r4 + r0; // 0x805F2E48
    r0 = *(4 + r4); // lbz @ 0x805F2E4C
    if (==) goto 0x0x805f2e98;
    r4 = *(8 + r4); // lwz @ 0x805F2E58
    /* slwi r0, r6, 2 */ // 0x805F2E5C
    r6 = *(0x80 + r3); // lwz @ 0x805F2E60
    r5 = r8;
    /* slwi r3, r4, 2 */ // 0x805F2E68
    /* lwzx r3, r6, r3 */ // 0x805F2E6C
    r3 = r3 + r0; // 0x805F2E70
    r31 = *(4 + r3); // lwz @ 0x805F2E74
    r12 = *(0 + r31); // lwz @ 0x805F2E78
    r3 = r31;
    r4 = *(0xe4 + r31); // lwz @ 0x805F2E80
    r12 = *(0x34 + r12); // lwz @ 0x805F2E84
    /* mtctr r12 */ // 0x805F2E88
    /* bctrl  */ // 0x805F2E8C
    r3 = r31;
    /* b 0x805f2eb8 */ // 0x805F2E94
    r12 = *(0 + r31); // lwz @ 0x805F2E98
    r3 = r31;
    r4 = *(0xe4 + r5); // lwz @ 0x805F2EA0
    r5 = r8;
    r12 = *(0x34 + r12); // lwz @ 0x805F2EA8
    /* mtctr r12 */ // 0x805F2EAC
    /* bctrl  */ // 0x805F2EB0
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x805F2EB8
    r31 = *(0xc + r1); // lwz @ 0x805F2EBC
    return;
}