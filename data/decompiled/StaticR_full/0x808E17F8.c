/* Function at 0x808E17F8, size=444 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_808E17F8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808E180C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808E1814
    /* li r29, 0 */ // 0x808E1818
    /* b 0x808e1840 */ // 0x808E181C
    r3 = *(0x48 + r30); // lwz @ 0x808E1820
    r0 = r29 rlwinm 2; // rlwinm
    /* lwzx r3, r3, r0 */ // 0x808E1828
    if (==) goto 0x0x808e183c;
    /* li r4, 0 */ // 0x808E1834
    FUN_805EF06C(r4); // bl 0x805EF06C
    r29 = r29 + 1; // 0x808E183C
    r0 = *(8 + r30); // lbz @ 0x808E1840
    /* clrlwi r3, r29, 0x18 */ // 0x808E1844
    if (<) goto 0x0x808e1820;
    r3 = *(0x4c + r30); // lwz @ 0x808E1850
    if (==) goto 0x0x808e1864;
    /* li r4, 0 */ // 0x808E185C
    FUN_805EF06C(r4); // bl 0x805EF06C
    r3 = *(0x50 + r30); // lwz @ 0x808E1864
    if (==) goto 0x0x808e1878;
    /* li r4, 0 */ // 0x808E1870
    FUN_805EF06C(r4); // bl 0x805EF06C
    /* li r29, 0 */ // 0x808E1878
    /* b 0x808e18b4 */ // 0x808E187C
    /* clrlwi r0, r29, 0x18 */ // 0x808E1880
    r3 = *(4 + r30); // lwz @ 0x808E1884
    /* mulli r0, r0, 0x28 */ // 0x808E1888
    r3 = r3 + r0; // 0x808E188C
    r0 = *(4 + r3); // lwz @ 0x808E1890
    if (==) goto 0x0x808e18b0;
    r12 = *(0 + r3); // lwz @ 0x808E189C
    /* li r4, 0 */ // 0x808E18A0
    r12 = *(0x18 + r12); // lwz @ 0x808E18A4
    /* mtctr r12 */ // 0x808E18A8
    /* bctrl  */ // 0x808E18AC
    r29 = r29 + 1; // 0x808E18B0
    r0 = *(9 + r30); // lbz @ 0x808E18B4
    /* clrlwi r3, r29, 0x18 */ // 0x808E18B8
    if (<) goto 0x0x808e1880;
    /* mulli r0, r31, 0xc */ // 0x808E18C4
    r29 = r30 + r0; // 0x808E18C8
    r3 = *(0x10 + r29); // lwz @ 0x808E18CC
    FUN_805B7218(); // bl 0x805B7218
    if (==) goto 0x0x808e1928;
    /* mulli r0, r31, 0xc */ // 0x808E18DC
    r29 = r30 + r0; // 0x808E18E0
    r3 = *(0x18 + r29); // lwz @ 0x808E18E4
    r0 = *(4 + r3); // lwz @ 0x808E18E8
    if (==) goto 0x0x808e1998;
    r12 = *(0 + r3); // lwz @ 0x808E18F4
    r4 = *(0x14 + r29); // lbz @ 0x808E18F8
    r12 = *(0x18 + r12); // lwz @ 0x808E18FC
    /* mtctr r12 */ // 0x808E1900
    /* bctrl  */ // 0x808E1904
    r3 = *(0x48 + r30); // lwz @ 0x808E1908
    /* slwi r0, r31, 2 */ // 0x808E190C
    /* lwzx r3, r3, r0 */ // 0x808E1910
    if (==) goto 0x0x808e1998;
    r4 = *(0x14 + r29); // lbz @ 0x808E191C
    FUN_805EF06C(); // bl 0x805EF06C
    /* b 0x808e1998 */ // 0x808E1924
    /* mulli r0, r31, 0xc */ // 0x808E1928
    r31 = r30 + r0; // 0x808E192C
    r3 = *(0x18 + r31); // lwz @ 0x808E1930
    r4 = *(0x14 + r31); // lbz @ 0x808E1934
    r12 = *(0 + r3); // lwz @ 0x808E1938
    r12 = *(0x18 + r12); // lwz @ 0x808E193C
    /* mtctr r12 */ // 0x808E1940
    /* bctrl  */ // 0x808E1944
    r0 = *(0x10 + r29); // lwz @ 0x808E1948
    if (!=) goto 0x0x808e1998;
    r4 = *(0x18 + r31); // lwz @ 0x808E1954
    r3 = *(4 + r30); // lwz @ 0x808E1958
    r4 = *(4 + r4); // lwz @ 0x808E195C
    r0 = *(0x20c + r3); // lwz @ 0x808E1960
    if (!=) goto 0x0x808e1984;
    r3 = *(0x4c + r30); // lwz @ 0x808E196C
    if (==) goto 0x0x808e1998;
    r4 = *(0x14 + r31); // lbz @ 0x808E1978
    FUN_805EF06C(); // bl 0x805EF06C
    /* b 0x808e1998 */ // 0x808E1980
    r3 = *(0x50 + r30); // lwz @ 0x808E1984
    if (==) goto 0x0x808e1998;
    r4 = *(0x14 + r31); // lbz @ 0x808E1990
    FUN_805EF06C(); // bl 0x805EF06C
    r0 = *(0x24 + r1); // lwz @ 0x808E1998
    r31 = *(0x1c + r1); // lwz @ 0x808E199C
    r30 = *(0x18 + r1); // lwz @ 0x808E19A0
    r29 = *(0x14 + r1); // lwz @ 0x808E19A4
    return;
}