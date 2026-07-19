/* Function at 0x8087547C, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */

int FUN_8087547C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80875488
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x80875490
    r12 = *(0x3c + r12); // lwz @ 0x80875494
    /* mtctr r12 */ // 0x80875498
    /* bctrl  */ // 0x8087549C
    r7 = *(0x198 + r31); // lwz @ 0x808754A0
    r3 = r31;
    r4 = r31 + 0x19c; // 0x808754A8
    r5 = r31 + 0x1a8; // 0x808754AC
    /* lfs f0, 0x34(r7) */ // 0x808754B0
    /* lfs f1, 0x30(r7) */ // 0x808754B8
    /* lfs f2, 0x2c(r7) */ // 0x808754BC
    /* stfs f2, 8(r1) */ // 0x808754C0
    /* stfs f1, 0xc(r1) */ // 0x808754C4
    /* stfs f0, 0x10(r1) */ // 0x808754C8
    r12 = *(0 + r31); // lwz @ 0x808754CC
    r12 = *(0x50 + r12); // lwz @ 0x808754D0
    /* mtctr r12 */ // 0x808754D4
    /* bctrl  */ // 0x808754D8
    r0 = *(0x24 + r1); // lwz @ 0x808754DC
    r31 = *(0x1c + r1); // lwz @ 0x808754E0
    return;
}