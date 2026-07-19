/* Function at 0x806C1790, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_806C1790(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x806C1798
    *(0x18 + r1) = r30; // stw @ 0x806C17A4
    *(0x14 + r1) = r29; // stw @ 0x806C17A8
    r29 = r3;
    r5 = *(0x2474 + r3); // lwz @ 0x806C17B0
    r3 = r5 + 0x98; // 0x806C17B4
    FUN_8069F4B0(r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806C17BC
    if (!=) goto 0x0x806c187c;
    r3 = *(0x2478 + r29); // lwz @ 0x806C17C8
    /* li r4, 0 */ // 0x806C17CC
    r3 = r3 + 0x98; // 0x806C17D0
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x806C17D8
    if (!=) goto 0x0x806c187c;
    r31 = *(0x2474 + r29); // lwz @ 0x806C17E4
    /* li r4, 0 */ // 0x806C17E8
    r3 = r31 + 0x98; // 0x806C17EC
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C17F4
    /* li r4, 5 */ // 0x806C17F8
    /* lfs f1, 0(r5) */ // 0x806C17FC
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r30 = r31 + 0x174; // 0x806C1804
    /* li r31, 0 */ // 0x806C1808
    r3 = r30;
    /* li r4, 0 */ // 0x806C1810
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r31 = r31 + 1; // 0x806C1818
    r30 = r30 + 0x254; // 0x806C181C
    if (<) goto 0x0x806c180c;
    r3 = *(0x2488 + r29); // lwz @ 0x806C1828
    /* addic. r0, r3, -1 */ // 0x806C182C
    *(0x2488 + r29) = r0; // stw @ 0x806C1830
    if (>=) goto 0x0x806c1844;
    r3 = *(0x2484 + r29); // lwz @ 0x806C1838
    r0 = r3 + -1; // 0x806C183C
    *(0x2488 + r29) = r0; // stw @ 0x806C1840
    r4 = *(0x2474 + r29); // lwz @ 0x806C1844
    r3 = r29;
    r0 = *(0x2478 + r29); // lwz @ 0x806C184C
    *(0x2474 + r29) = r0; // stw @ 0x806C1850
    *(0x2478 + r29) = r4; // stw @ 0x806C1854
    FUN_806C1070(r3); // bl 0x806C1070
    r3 = *(0x2474 + r29); // lwz @ 0x806C185C
    /* li r4, 0 */ // 0x806C1860
    r3 = r3 + 0x98; // 0x806C1864
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C186C
    /* li r4, 1 */ // 0x806C1870
    /* lfs f1, 0(r5) */ // 0x806C1874
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x806C187C
    r31 = *(0x1c + r1); // lwz @ 0x806C1880
    r30 = *(0x18 + r1); // lwz @ 0x806C1884
    r29 = *(0x14 + r1); // lwz @ 0x806C1888
    return;
}