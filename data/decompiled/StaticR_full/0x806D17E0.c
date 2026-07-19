/* Function at 0x806D17E0, size=344 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806D17E0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x806D17F4
    *(0x34 + r1) = r29; // stw @ 0x806D17F8
    /* lis r29, 0 */ // 0x806D17FC
    r29 = r29 + 0; // 0x806D1800
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806D1808
    /* lis r7, 0 */ // 0x806D180C
    r3 = r3 + 0; // 0x806D1810
    *(0 + r31) = r3; // stw @ 0x806D1814
    r3 = r29 + 0x60; // 0x806D1818
    /* lis r4, 0 */ // 0x806D181C
    r30 = *(0x60 + r29); // lwz @ 0x806D1820
    r7 = r7 + 0; // 0x806D1824
    r12 = *(4 + r3); // lwz @ 0x806D1828
    r6 = r29 + 0x6c; // 0x806D182C
    r11 = *(8 + r3); // lwz @ 0x806D1830
    r5 = r29 + 0x78; // 0x806D1834
    *(0x54 + r31) = r11; // stw @ 0x806D1838
    r4 = r4 + 0; // 0x806D183C
    r3 = r31 + 0x80; // 0x806D1840
    *(0x44 + r31) = r7; // stw @ 0x806D1844
    *(0x48 + r31) = r31; // stw @ 0x806D1848
    *(0x4c + r31) = r30; // stw @ 0x806D184C
    *(0x50 + r31) = r12; // stw @ 0x806D1850
    r10 = *(0x6c + r29); // lwz @ 0x806D1854
    r9 = *(4 + r6); // lwz @ 0x806D1858
    r8 = *(8 + r6); // lwz @ 0x806D185C
    *(0x68 + r31) = r8; // stw @ 0x806D1860
    *(0x58 + r31) = r7; // stw @ 0x806D1864
    *(0x5c + r31) = r31; // stw @ 0x806D1868
    *(0x60 + r31) = r10; // stw @ 0x806D186C
    *(0x64 + r31) = r9; // stw @ 0x806D1870
    r7 = *(0x78 + r29); // lwz @ 0x806D1874
    r6 = *(4 + r5); // lwz @ 0x806D1878
    r0 = *(8 + r5); // lwz @ 0x806D187C
    *(0x20 + r1) = r30; // stw @ 0x806D1880
    *(0x24 + r1) = r12; // stw @ 0x806D1884
    *(0x28 + r1) = r11; // stw @ 0x806D1888
    *(0x14 + r1) = r10; // stw @ 0x806D188C
    *(0x18 + r1) = r9; // stw @ 0x806D1890
    *(0x1c + r1) = r8; // stw @ 0x806D1894
    *(8 + r1) = r7; // stw @ 0x806D1898
    *(0xc + r1) = r6; // stw @ 0x806D189C
    *(0x10 + r1) = r0; // stw @ 0x806D18A0
    *(0x6c + r31) = r4; // stw @ 0x806D18A4
    *(0x70 + r31) = r31; // stw @ 0x806D18A8
    *(0x74 + r31) = r7; // stw @ 0x806D18AC
    *(0x78 + r31) = r6; // stw @ 0x806D18B0
    *(0x7c + r31) = r0; // stw @ 0x806D18B4
    FUN_80669F74(); // bl 0x80669F74
    r29 = r31 + 0x2a4; // 0x806D18BC
    r3 = r29;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806D18C8
    r3 = r31 + 0x418; // 0x806D18CC
    r4 = r4 + 0; // 0x806D18D0
    *(0 + r29) = r4; // stw @ 0x806D18D4
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r31 + 0x58c; // 0x806D18DC
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r29 = r31 + 0x7e0; // 0x806D18E4
    r3 = r29;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806D18F0
    /* lis r5, 0 */ // 0x806D18F4
    /* lfs f0, 0(r3) */ // 0x806D18F8
    r5 = r5 + 0; // 0x806D18FC
    /* li r4, 0x7d1 */ // 0x806D1900
    /* li r0, 0 */ // 0x806D1904
    *(0 + r29) = r5; // stw @ 0x806D1908
    r3 = r31;
    *(0x254 + r29) = r4; // stw @ 0x806D1910
    *(0x258 + r29) = r0; // stw @ 0x806D1914
    /* stfs f0, 0x25c(r29) */ // 0x806D1918
    r31 = *(0x3c + r1); // lwz @ 0x806D191C
    r30 = *(0x38 + r1); // lwz @ 0x806D1920
    r29 = *(0x34 + r1); // lwz @ 0x806D1924
    r0 = *(0x44 + r1); // lwz @ 0x806D1928
    return;
}