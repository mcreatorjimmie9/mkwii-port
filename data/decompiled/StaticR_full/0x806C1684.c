/* Function at 0x806C1684, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_806C1684(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x806C168C
    *(0x18 + r1) = r30; // stw @ 0x806C1698
    *(0x14 + r1) = r29; // stw @ 0x806C169C
    r29 = r3;
    r5 = *(0x2474 + r3); // lwz @ 0x806C16A4
    r3 = r5 + 0x98; // 0x806C16A8
    FUN_8069F4B0(r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806C16B0
    if (!=) goto 0x0x806c1774;
    r3 = *(0x2478 + r29); // lwz @ 0x806C16BC
    /* li r4, 0 */ // 0x806C16C0
    r3 = r3 + 0x98; // 0x806C16C4
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806C16CC
    if (!=) goto 0x0x806c1774;
    r31 = *(0x2474 + r29); // lwz @ 0x806C16D8
    /* li r4, 0 */ // 0x806C16DC
    r3 = r31 + 0x98; // 0x806C16E0
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C16E8
    /* li r4, 4 */ // 0x806C16EC
    /* lfs f1, 0(r5) */ // 0x806C16F0
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r30 = r31 + 0x174; // 0x806C16F8
    /* li r31, 0 */ // 0x806C16FC
    r3 = r30;
    /* li r4, 0 */ // 0x806C1704
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r31 = r31 + 1; // 0x806C170C
    r30 = r30 + 0x254; // 0x806C1710
    if (<) goto 0x0x806c1700;
    r3 = *(0x2488 + r29); // lwz @ 0x806C171C
    r0 = *(0x2484 + r29); // lwz @ 0x806C1720
    r3 = r3 + 1; // 0x806C1724
    *(0x2488 + r29) = r3; // stw @ 0x806C1728
    if (<) goto 0x0x806c173c;
    /* li r0, 0 */ // 0x806C1734
    *(0x2488 + r29) = r0; // stw @ 0x806C1738
    r4 = *(0x2474 + r29); // lwz @ 0x806C173C
    r3 = r29;
    r0 = *(0x2478 + r29); // lwz @ 0x806C1744
    *(0x2474 + r29) = r0; // stw @ 0x806C1748
    *(0x2478 + r29) = r4; // stw @ 0x806C174C
    FUN_806C1070(r3); // bl 0x806C1070
    r3 = *(0x2474 + r29); // lwz @ 0x806C1754
    /* li r4, 0 */ // 0x806C1758
    r3 = r3 + 0x98; // 0x806C175C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C1764
    /* li r4, 2 */ // 0x806C1768
    /* lfs f1, 0(r5) */ // 0x806C176C
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x806C1774
    r31 = *(0x1c + r1); // lwz @ 0x806C1778
    r30 = *(0x18 + r1); // lwz @ 0x806C177C
    r29 = *(0x14 + r1); // lwz @ 0x806C1780
    return;
}