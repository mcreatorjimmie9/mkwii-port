/* Function at 0x807E041C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */

int FUN_807E041C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x807E0424
    *(0x14 + r1) = r0; // stw @ 0x807E0428
    *(0xc + r1) = r31; // stw @ 0x807E042C
    r31 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x807E0434
    /* slwi r0, r0, 2 */ // 0x807E0438
    r3 = r3 + r0; // 0x807E043C
    r3 = *(4 + r3); // lwz @ 0x807E0440
    r12 = *(0 + r3); // lwz @ 0x807E0444
    r12 = *(0xc + r12); // lwz @ 0x807E0448
    /* mtctr r12 */ // 0x807E044C
    /* bctrl  */ // 0x807E0450
    r3 = *(0xc + r31); // lwz @ 0x807E0454
    /* li r4, 0 */ // 0x807E0458
    r12 = *(0 + r3); // lwz @ 0x807E045C
    r12 = *(0xc + r12); // lwz @ 0x807E0460
    /* mtctr r12 */ // 0x807E0464
    /* bctrl  */ // 0x807E0468
    r3 = *(0x198 + r31); // lwz @ 0x807E046C
    r12 = *(0 + r3); // lwz @ 0x807E0470
    r12 = *(0x18 + r12); // lwz @ 0x807E0474
    /* mtctr r12 */ // 0x807E0478
    /* bctrl  */ // 0x807E047C
    /* li r0, 2 */ // 0x807E0480
    *(0x1a0 + r31) = r0; // stw @ 0x807E0484
    r31 = *(0xc + r1); // lwz @ 0x807E0488
    r0 = *(0x14 + r1); // lwz @ 0x807E048C
    return;
}