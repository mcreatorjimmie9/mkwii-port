/* Function at 0x806E17E8, size=576 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r24 */
/* Calls: 10 function(s) */

int FUN_806E17E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r24 */
    /* stmw r24, 0xd0(r1) */ // 0x806E17F4
    r31 = r3;
    r0 = *(0x15f4 + r3); // lbz @ 0x806E17FC
    if (==) goto 0x0x806e1958;
    /* lis r3, 0 */ // 0x806E1808
    /* li r28, 0 */ // 0x806E180C
    r3 = *(0 + r3); // lwz @ 0x806E1810
    /* li r27, 0 */ // 0x806E1814
    r3 = *(0x98 + r3); // lwz @ 0x806E1818
    r26 = *(0x70 + r3); // lwz @ 0x806E181C
    if (!=) goto 0x0x806e1844;
    /* li r27, 0x4c2 */ // 0x806E1828
    /* li r28, 0 */ // 0x806E182C
    /* li r3, 0xf0 */ // 0x806E1830
    /* li r4, 0 */ // 0x806E1834
    /* li r5, 0 */ // 0x806E1838
    FUN_807A0CA4(r3, r4, r5); // bl 0x807A0CA4
    /* b 0x806e1918 */ // 0x806E1840
    /* li r25, 0 */ // 0x806E1844
    /* li r24, 0 */ // 0x806E1848
    /* lis r30, 0 */ // 0x806E184C
    /* lis r29, 0 */ // 0x806E1850
    /* b 0x806e188c */ // 0x806E1854
    r3 = *(0 + r30); // lwz @ 0x806E1858
    /* clrlwi r4, r24, 0x18 */ // 0x806E185C
    FUN_806E9970(); // bl 0x806E9970
    /* clrlwi r0, r3, 0x18 */ // 0x806E1864
    r3 = *(0 + r29); // lwz @ 0x806E1868
    /* mulli r0, r0, 0xf0 */ // 0x806E186C
    r3 = r3 + r0; // 0x806E1870
    r0 = *(0xf4 + r3); // lwz @ 0x806E1874
    if (!=) goto 0x0x806e1888;
    /* li r25, 1 */ // 0x806E1880
    /* b 0x806e189c */ // 0x806E1884
    r24 = r24 + 1; // 0x806E1888
    r0 = *(0x15f5 + r31); // lbz @ 0x806E188C
    /* clrlwi r3, r24, 0x18 */ // 0x806E1890
    if (<) goto 0x0x806e1858;
    if (==) goto 0x0x806e18e0;
    if (==) goto 0x0x806e18b8;
    if (==) goto 0x0x806e18c4;
    /* b 0x806e18cc */ // 0x806E18B4
    /* li r28, 0x4c0 */ // 0x806E18B8
    /* li r27, 0x534 */ // 0x806E18BC
    /* b 0x806e18cc */ // 0x806E18C0
    /* li r28, 0x4c1 */ // 0x806E18C4
    /* li r27, 0x535 */ // 0x806E18C8
    /* li r3, 0xef */ // 0x806E18CC
    /* li r4, 0 */ // 0x806E18D0
    /* li r5, 0 */ // 0x806E18D4
    FUN_807A0CA4(r3, r4, r5); // bl 0x807A0CA4
    /* b 0x806e1918 */ // 0x806E18DC
    if (==) goto 0x0x806e18f4;
    if (==) goto 0x0x806e1900;
    /* b 0x806e1908 */ // 0x806E18F0
    /* li r28, 0x4ca */ // 0x806E18F4
    /* li r27, 0x535 */ // 0x806E18F8
    /* b 0x806e1908 */ // 0x806E18FC
    /* li r28, 0x4c9 */ // 0x806E1900
    /* li r27, 0x534 */ // 0x806E1904
    /* li r3, 0xf0 */ // 0x806E1908
    /* li r4, 0 */ // 0x806E190C
    /* li r5, 0 */ // 0x806E1910
    FUN_807A0CA4(r3, r4, r5); // bl 0x807A0CA4
    FUN_80654ECC(r3, r4, r5, r3); // bl 0x80654ECC
    /* lis r29, 0 */ // 0x806E1920
    *(0x2c + r1) = r28; // stw @ 0x806E1924
    r29 = r29 + 0; // 0x806E1928
    r5 = r27;
    r3 = r31 + 0x310; // 0x806E1930
    r4 = r29 + 0x168; // 0x806E1938
    FUN_806A093C(r5, r3, r6, r4); // bl 0x806A093C
    r5 = r28;
    r3 = r31 + 0x310; // 0x806E1944
    r4 = r29 + 0x170; // 0x806E1948
    /* li r6, 0 */ // 0x806E194C
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    /* b 0x806e1a14 */ // 0x806E1954
    /* li r24, 0xc */ // 0x806E1958
    /* li r25, 0 */ // 0x806E195C
    /* lis r29, 0 */ // 0x806E1960
    /* lis r30, 0 */ // 0x806E1964
    /* b 0x806e19a0 */ // 0x806E1968
    r3 = *(0 + r29); // lwz @ 0x806E196C
    /* clrlwi r4, r25, 0x18 */ // 0x806E1970
    FUN_806E9970(); // bl 0x806E9970
    /* clrlwi r0, r3, 0x18 */ // 0x806E1978
    r4 = *(0 + r30); // lwz @ 0x806E197C
    /* mulli r3, r0, 0xf0 */ // 0x806E1980
    /* clrlwi r0, r24, 0x18 */ // 0x806E1984
    r3 = r4 + r3; // 0x806E1988
    r3 = *(0xcf8 + r3); // lbz @ 0x806E198C
    if (>=) goto 0x0x806e199c;
    r24 = r3;
    r25 = r25 + 1; // 0x806E199C
    r0 = *(0x15f5 + r31); // lbz @ 0x806E19A0
    /* clrlwi r3, r25, 0x18 */ // 0x806E19A4
    if (<) goto 0x0x806e196c;
    /* clrlwi r0, r24, 0x18 */ // 0x806E19B0
    /* li r24, 0xee */ // 0x806E19B4
    if (==) goto 0x0x806e19d4;
    if (==) goto 0x0x806e19e0;
    if (==) goto 0x0x806e19e8;
    /* b 0x806e19f0 */ // 0x806E19D0
    /* li r4, 0x4c3 */ // 0x806E19D4
    /* li r24, 0xef */ // 0x806E19D8
    /* b 0x806e19f8 */ // 0x806E19DC
    /* li r4, 0x4c4 */ // 0x806E19E0
    /* b 0x806e19f8 */ // 0x806E19E4
    /* li r4, 0x4c5 */ // 0x806E19E8
    /* b 0x806e19f8 */ // 0x806E19EC
    /* li r4, 0x4c6 */ // 0x806E19F0
    /* li r24, 0xf0 */ // 0x806E19F4
    r3 = r31 + 0x310; // 0x806E19F8
    /* li r5, 0 */ // 0x806E19FC
    FUN_806A0A34(r4, r3, r5); // bl 0x806A0A34
    r3 = r24;
    /* li r4, 0 */ // 0x806E1A08
    /* li r5, 0 */ // 0x806E1A0C
    FUN_807A0CA4(r5, r3, r4, r5); // bl 0x807A0CA4
    r0 = *(0xf4 + r1); // lwz @ 0x806E1A18
    return;
}