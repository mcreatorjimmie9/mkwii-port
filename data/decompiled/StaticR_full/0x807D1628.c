/* Function at 0x807D1628, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807D1628(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807D1638
    *(0x18 + r1) = r30; // stw @ 0x807D163C
    /* lis r30, 0 */ // 0x807D1640
    r30 = r30 + 0; // 0x807D1644
    *(0x14 + r1) = r29; // stw @ 0x807D1648
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x807D1650
    r4 = *(0x26 + r30); // lha @ 0x807D1654
    FUN_807C03BC(); // bl 0x807C03BC
    r5 = *(0x24 + r30); // lha @ 0x807D165C
    /* li r0, 0 */ // 0x807D1660
    /* li r4, 2 */ // 0x807D1664
    r3 = r5 + r3; // 0x807D1668
    *(0x14c + r29) = r3; // stw @ 0x807D166C
    *(0x150 + r29) = r0; // stw @ 0x807D1670
    /* lfs f0, 0x10(r30) */ // 0x807D1674
    /* stfs f0, 0x15c(r29) */ // 0x807D1678
    r3 = *(0 + r31); // lwz @ 0x807D167C
    FUN_807C03BC(); // bl 0x807C03BC
    if (!=) goto 0x0x807d16a0;
    /* lis r3, 0 */ // 0x807D168C
    /* lfs f1, 0x15c(r29) */ // 0x807D1690
    /* lfs f0, 0(r3) */ // 0x807D1694
    /* fmuls f0, f1, f0 */ // 0x807D1698
    /* stfs f0, 0x15c(r29) */ // 0x807D169C
    r0 = *(0x24 + r1); // lwz @ 0x807D16A0
    r31 = *(0x1c + r1); // lwz @ 0x807D16A4
    r30 = *(0x18 + r1); // lwz @ 0x807D16A8
    r29 = *(0x14 + r1); // lwz @ 0x807D16AC
    return;
}