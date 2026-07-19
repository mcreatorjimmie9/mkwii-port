/* Function at 0x808C1F68, size=544 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 8 function(s) */

int FUN_808C1F68(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808C1F84
    *(0x10 + r1) = r28; // stw @ 0x808C1F88
    r0 = *(0x240 + r4); // lwz @ 0x808C1F8C
    if (==) goto 0x0x808c1fb4;
    if (==) goto 0x0x808c1fe4;
    if (==) goto 0x0x808c2074;
    if (==) goto 0x0x808c2114;
    /* b 0x808c2168 */ // 0x808C1FB0
    r5 = r31;
    /* li r4, 0x61 */ // 0x808C1FB8
    FUN_808B3ADC(r5, r4); // bl 0x808B3ADC
    /* lis r4, 0 */ // 0x808C1FC0
    /* li r3, 0x41 */ // 0x808C1FC4
    r29 = *(0 + r4); // lwz @ 0x808C1FC8
    FUN_80694E54(r4, r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r29;
    /* li r5, 0 */ // 0x808C1FD8
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    /* b 0x808c2168 */ // 0x808C1FE0
    /* li r28, 0 */ // 0x808C1FE4
    /* lis r29, 0 */ // 0x808C1FE8
    FUN_808CFA50(r5); // bl 0x808CFA50
    /* clrlwi r5, r28, 0x18 */ // 0x808C1FF0
    /* clrlwi r6, r3, 0x18 */ // 0x808C1FF4
    /* mulli r0, r5, 0xf0 */ // 0x808C1FF8
    r3 = *(0 + r29); // lwz @ 0x808C1FFC
    /* subf r4, r6, r5 */ // 0x808C2000
    r28 = r28 + 1; // 0x808C2004
    /* orc r5, r5, r6 */ // 0x808C2008
    /* srwi r4, r4, 1 */ // 0x808C200C
    /* subf r4, r4, r5 */ // 0x808C2010
    r3 = r3 + r0; // 0x808C2014
    /* srwi r0, r4, 0x1f */ // 0x808C2018
    *(0xc28 + r3) = r0; // stw @ 0x808C2020
    if (<) goto 0x0x808c1fec;
    /* lis r8, 0 */ // 0x808C2028
    /* li r5, 1 */ // 0x808C202C
    r4 = *(0 + r8); // lwz @ 0x808C2030
    /* li r7, 2 */ // 0x808C2034
    /* li r0, 5 */ // 0x808C2038
    r3 = r30;
    *(0x1760 + r4) = r5; // stw @ 0x808C2040
    r5 = r31;
    /* li r4, 0x72 */ // 0x808C2048
    r6 = *(0 + r8); // lwz @ 0x808C204C
    *(0x175c + r6) = r7; // stw @ 0x808C2050
    r7 = *(0 + r8); // lwz @ 0x808C2054
    r6 = *(0x1780 + r7); // lwz @ 0x808C2058
    r6 = r6 rlwinm 0; // rlwinm
    *(0x1780 + r7) = r6; // stw @ 0x808C2060
    r6 = *(0 + r8); // lwz @ 0x808C2064
    *(0x1764 + r6) = r0; // stw @ 0x808C2068
    FUN_808B38C8(); // bl 0x808B38C8
    /* b 0x808c2168 */ // 0x808C2070
    /* li r28, 0 */ // 0x808C2074
    /* lis r29, 0 */ // 0x808C2078
    FUN_808CFA50(); // bl 0x808CFA50
    /* clrlwi r5, r28, 0x18 */ // 0x808C2080
    /* clrlwi r6, r3, 0x18 */ // 0x808C2084
    /* mulli r0, r5, 0xf0 */ // 0x808C2088
    r3 = *(0 + r29); // lwz @ 0x808C208C
    /* subf r4, r6, r5 */ // 0x808C2090
    r28 = r28 + 1; // 0x808C2094
    /* orc r5, r5, r6 */ // 0x808C2098
    /* srwi r4, r4, 1 */ // 0x808C209C
    /* subf r4, r4, r5 */ // 0x808C20A0
    r3 = r3 + r0; // 0x808C20A4
    /* srwi r0, r4, 0x1f */ // 0x808C20A8
    *(0xc28 + r3) = r0; // stw @ 0x808C20B0
    if (<) goto 0x0x808c207c;
    /* lis r8, 0 */ // 0x808C20B8
    /* li r5, 3 */ // 0x808C20BC
    r4 = *(0 + r8); // lwz @ 0x808C20C0
    /* li r7, 0 */ // 0x808C20C4
    /* li r0, 5 */ // 0x808C20C8
    r3 = r30;
    *(0x1760 + r4) = r5; // stw @ 0x808C20D0
    r5 = r31;
    /* li r4, 0x75 */ // 0x808C20D8
    r6 = *(0 + r8); // lwz @ 0x808C20DC
    *(0x175c + r6) = r7; // stw @ 0x808C20E0
    r7 = *(0 + r8); // lwz @ 0x808C20E4
    r6 = *(0x1780 + r7); // lwz @ 0x808C20E8
    r6 = r6 rlwinm 0; // rlwinm
    *(0x1780 + r7) = r6; // stw @ 0x808C20F0
    r6 = *(0 + r8); // lwz @ 0x808C20F4
    *(0x1764 + r6) = r0; // stw @ 0x808C20F8
    r6 = *(0 + r8); // lwz @ 0x808C20FC
    r0 = *(0x1780 + r6); // lwz @ 0x808C2100
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r0; // stw @ 0x808C2108
    FUN_808B38C8(); // bl 0x808B38C8
    /* b 0x808c2168 */ // 0x808C2110
    /* lis r8, 0 */ // 0x808C2114
    /* li r6, 4 */ // 0x808C2118
    r4 = *(0 + r8); // lwz @ 0x808C211C
    /* li r7, 1 */ // 0x808C2120
    /* li r0, 5 */ // 0x808C2124
    r5 = r31;
    *(0x1760 + r4) = r6; // stw @ 0x808C212C
    /* li r4, 0x61 */ // 0x808C2130
    r6 = *(0 + r8); // lwz @ 0x808C2134
    *(0x175c + r6) = r7; // stw @ 0x808C2138
    r7 = *(0 + r8); // lwz @ 0x808C213C
    r6 = *(0x1780 + r7); // lwz @ 0x808C2140
    r6 = r6 rlwinm 0; // rlwinm
    *(0x1780 + r7) = r6; // stw @ 0x808C2148
    r6 = *(0 + r8); // lwz @ 0x808C214C
    *(0x1764 + r6) = r0; // stw @ 0x808C2150
    r6 = *(0 + r8); // lwz @ 0x808C2154
    r0 = *(0x1780 + r6); // lwz @ 0x808C2158
    r0 = r0 rlwinm 0; // rlwinm
    *(0x1780 + r6) = r0; // stw @ 0x808C2160
    FUN_808B38C8(); // bl 0x808B38C8
    r0 = *(0x24 + r1); // lwz @ 0x808C2168
    r31 = *(0x1c + r1); // lwz @ 0x808C216C
    r30 = *(0x18 + r1); // lwz @ 0x808C2170
    r29 = *(0x14 + r1); // lwz @ 0x808C2174
    r28 = *(0x10 + r1); // lwz @ 0x808C2178
    return;
}