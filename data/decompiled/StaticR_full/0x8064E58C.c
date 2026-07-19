/* Function at 0x8064E58C, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_8064E58C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0x6374 */ // 0x8064E594
    r5 = r4;
    *(0x14 + r1) = r0; // stw @ 0x8064E59C
    r4 = r6 + 0x726c; // 0x8064E5A0
    /* li r6, 0 */ // 0x8064E5A4
    *(0xc + r1) = r31; // stw @ 0x8064E5A8
    r31 = r3;
    r7 = *(0 + r3); // lwz @ 0x8064E5B0
    r3 = *(0xcc + r7); // lwz @ 0x8064E5B4
    r12 = *(0 + r3); // lwz @ 0x8064E5B8
    r12 = *(0xc + r12); // lwz @ 0x8064E5BC
    /* mtctr r12 */ // 0x8064E5C0
    /* bctrl  */ // 0x8064E5C4
    *(4 + r31) = r3; // stw @ 0x8064E5C8
    r0 = *(0xc + r3); // lhz @ 0x8064E5CC
    r5 = r3 + r0; // 0x8064E5D0
    *(8 + r31) = r5; // stw @ 0x8064E5D4
    r0 = *(0xe + r3); // lhz @ 0x8064E5D8
    r4 = r3 + r0; // 0x8064E5DC
    *(0x14 + r31) = r4; // stw @ 0x8064E5E0
    r0 = *(0x10 + r3); // lhz @ 0x8064E5E4
    r0 = r3 + r0; // 0x8064E5E8
    *(0x24 + r31) = r0; // stw @ 0x8064E5EC
    r0 = *(0 + r5); // lhz @ 0x8064E5F0
    r0 = r5 + r0; // 0x8064E5F4
    *(0xc + r31) = r0; // stw @ 0x8064E5F8
    r0 = *(4 + r5); // lhz @ 0x8064E5FC
    r0 = r5 + r0; // 0x8064E600
    *(0x10 + r31) = r0; // stw @ 0x8064E604
    r0 = *(0 + r4); // lhz @ 0x8064E608
    r0 = r4 + r0; // 0x8064E60C
    *(0x18 + r31) = r0; // stw @ 0x8064E610
    r0 = *(4 + r4); // lhz @ 0x8064E614
    r0 = r4 + r0; // 0x8064E618
    *(0x1c + r31) = r0; // stw @ 0x8064E61C
    r0 = *(8 + r4); // lhz @ 0x8064E620
    r0 = r4 + r0; // 0x8064E624
    *(0x20 + r31) = r0; // stw @ 0x8064E628
    r31 = *(0xc + r1); // lwz @ 0x8064E62C
    r0 = *(0x14 + r1); // lwz @ 0x8064E630
    return;
}