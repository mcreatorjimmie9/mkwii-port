/* Function at 0x805F17A8, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805F17A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x805F17B0
    /* li r6, 0 */ // 0x805F17B4
    *(0x24 + r1) = r0; // stw @ 0x805F17B8
    *(0x1c + r1) = r31; // stw @ 0x805F17BC
    /* lis r31, 0 */ // 0x805F17C0
    *(0x18 + r1) = r30; // stw @ 0x805F17C4
    /* lis r30, 0 */ // 0x805F17C8
    r30 = r30 + 0; // 0x805F17CC
    *(0x14 + r1) = r29; // stw @ 0x805F17D0
    r29 = r3;
    r5 = r30 + 0x35; // 0x805F17D8
    r3 = *(0 + r31); // lwz @ 0x805F17DC
    FUN_805CFD60(r5); // bl 0x805CFD60
    if (!=) goto 0x0x805f1800;
    r3 = *(0 + r31); // lwz @ 0x805F17EC
    r5 = r30 + 0x51; // 0x805F17F0
    /* li r4, 0 */ // 0x805F17F4
    /* li r6, 0 */ // 0x805F17F8
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r5 = *(0x20 + r29); // lwz @ 0x805F1800
    r4 = r3;
    r3 = *(0x20 + r5); // lwz @ 0x805F1808
    r12 = *(0 + r3); // lwz @ 0x805F180C
    r12 = *(8 + r12); // lwz @ 0x805F1810
    /* mtctr r12 */ // 0x805F1814
    /* bctrl  */ // 0x805F1818
    r0 = *(0x24 + r1); // lwz @ 0x805F181C
    r31 = *(0x1c + r1); // lwz @ 0x805F1820
    r30 = *(0x18 + r1); // lwz @ 0x805F1824
    r29 = *(0x14 + r1); // lwz @ 0x805F1828
    return;
}