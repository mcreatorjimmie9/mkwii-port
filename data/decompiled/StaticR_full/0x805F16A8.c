/* Function at 0x805F16A8, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_805F16A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x805F16B0
    /* li r6, 0 */ // 0x805F16B4
    *(0x24 + r1) = r0; // stw @ 0x805F16B8
    *(0x1c + r1) = r31; // stw @ 0x805F16BC
    /* lis r31, 0 */ // 0x805F16C0
    *(0x18 + r1) = r30; // stw @ 0x805F16C4
    /* lis r30, 0 */ // 0x805F16C8
    r5 = r30 + 0; // 0x805F16CC
    *(0x14 + r1) = r29; // stw @ 0x805F16D0
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x805F16D8
    FUN_805CFD60(r5); // bl 0x805CFD60
    r4 = r3;
    if (!=) goto 0x0x805f1708;
    r4 = r30 + 0; // 0x805F16EC
    r3 = *(0 + r31); // lwz @ 0x805F16F0
    r5 = r4 + 0x1d; // 0x805F16F4
    /* li r6, 0 */ // 0x805F16F8
    /* li r4, 0 */ // 0x805F16FC
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    r4 = r3;
    r3 = *(0x20 + r29); // lwz @ 0x805F1708
    r12 = *(0 + r3); // lwz @ 0x805F170C
    r12 = *(8 + r12); // lwz @ 0x805F1710
    /* mtctr r12 */ // 0x805F1714
    /* bctrl  */ // 0x805F1718
    /* li r30, 0 */ // 0x805F171C
    /* b 0x805f1774 */ // 0x805F1720
    r4 = *(0x1c + r29); // lwz @ 0x805F1724
    /* li r3, 0x58 */ // 0x805F1728
    /* li r5, 4 */ // 0x805F172C
    r4 = *(0x10 + r4); // lwz @ 0x805F1730
    FUN_805E3430(r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805f1764;
    r4 = *(0x1c + r29); // lwz @ 0x805F1740
    r6 = *(0x24 + r29); // lwz @ 0x805F1744
    r4 = *(0x30 + r4); // lwz @ 0x805F1748
    r5 = r6 + 1; // 0x805F174C
    r0 = r6 + 8; // 0x805F1750
    *(0x24 + r29) = r5; // stw @ 0x805F1754
    /* extsb r6, r0 */ // 0x805F1758
    r5 = *(0x20 + r29); // lwz @ 0x805F175C
    FUN_805F00C8(r5); // bl 0x805F00C8
    r4 = r3;
    r3 = r29 + 0xc; // 0x805F1768
}