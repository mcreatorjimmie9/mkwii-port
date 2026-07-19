/* Function at 0x806F178C, size=456 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 11 function(s) */

int FUN_806F178C(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* slwi r5, r4, 2 */ // 0x806F1794
    *(0x44 + r1) = r0; // stw @ 0x806F1798
    /* slwi r0, r4, 3 */ // 0x806F179C
    /* stmw r21, 0x14(r1) */ // 0x806F17A0
    r24 = r3;
    r25 = r4;
    r28 = r3 + r5; // 0x806F17AC
    r29 = r24;
    r27 = r3 + r0; // 0x806F17B4
    /* li r26, 0 */ // 0x806F17B8
    /* lis r30, 0 */ // 0x806F17BC
    /* li r22, 1 */ // 0x806F17C0
    /* lis r31, 0 */ // 0x806F17C4
    /* lis r23, 0 */ // 0x806F17C8
    /* b 0x806f192c */ // 0x806F17CC
    r3 = *(0 + r30); // lwz @ 0x806F17D0
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1924;
    r3 = *(0 + r30); // lwz @ 0x806F17E4
    r4 = r26;
    FUN_806E4438(r4); // bl 0x806E4438
    if (!=) goto 0x0x806f1800;
    /* li r4, 0 */ // 0x806F17F8
    /* b 0x806f1914 */ // 0x806F17FC
    r3 = *(0 + r30); // lwz @ 0x806F1800
    r4 = r26;
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f181c;
    r4 = *(0x70 + r28); // lwz @ 0x806F1814
    /* b 0x806f1914 */ // 0x806F1818
    r3 = *(0 + r30); // lwz @ 0x806F181C
    r4 = r25;
    FUN_806E4530(r4); // bl 0x806E4530
    r21 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F182C
    /* li r4, 0 */ // 0x806F1830
    FUN_806E9970(r4, r4); // bl 0x806E9970
    if (==) goto 0x0x806f1854;
    r3 = *(0 + r31); // lwz @ 0x806F1840
    /* li r4, 1 */ // 0x806F1844
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806f186c;
    r3 = *(0 + r30); // lwz @ 0x806F1854
    r4 = r25;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1860
    /* lbzx r4, r24, r0 */ // 0x806F1864
    /* b 0x806f188c */ // 0x806F1868
    r3 = *(0 + r30); // lwz @ 0x806F186C
    r4 = r25;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1888;
    r4 = *(0x10 + r27); // lbz @ 0x806F1880
    /* b 0x806f188c */ // 0x806F1884
    /* li r4, 0 */ // 0x806F1888
    r3 = r29 + r21; // 0x806F188C
    r0 = *(0x16 + r3); // lbz @ 0x806F1890
    if (!=) goto 0x0x806f1910;
    r3 = *(0 + r30); // lwz @ 0x806F189C
    r4 = r25;
    FUN_806E44C0(r4); // bl 0x806E44C0
    if (==) goto 0x0x806f18cc;
    r3 = *(0 + r30); // lwz @ 0x806F18B0
    r4 = r25;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F18BC
    r3 = r24 + r0; // 0x806F18C0
    r0 = *(3 + r3); // lbz @ 0x806F18C4
    /* b 0x806f18ec */ // 0x806F18C8
    r3 = *(0 + r30); // lwz @ 0x806F18CC
    r4 = r25;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f18e8;
    r0 = *(0x13 + r27); // lbz @ 0x806F18E0
    /* b 0x806f18ec */ // 0x806F18E4
    /* li r0, 0 */ // 0x806F18E8
    if (!=) goto 0x0x806f1910;
    r0 = *(0x15 + r29); // lbz @ 0x806F18F4
    r3 = r22 << r21; // slw
    /* li r4, 2 */ // 0x806F18FC
    /* and. r0, r3, r0 */ // 0x806F1900
    if (==) goto 0x0x806f1914;
    /* li r4, 1 */ // 0x806F1908
    /* b 0x806f1914 */ // 0x806F190C
    /* li r4, 0 */ // 0x806F1910
    if (==) goto 0x0x806f1924;
    /* li r3, 0 */ // 0x806F191C
    /* b 0x806f1940 */ // 0x806F1920
    r29 = r29 + 8; // 0x806F1924
    r26 = r26 + 1; // 0x806F1928
    r3 = *(0 + r23); // lwz @ 0x806F192C
    r0 = *(0x24 + r3); // lbz @ 0x806F1930
    if (<) goto 0x0x806f17d0;
    /* li r3, 1 */ // 0x806F193C
    r0 = *(0x44 + r1); // lwz @ 0x806F1944
    return;
}