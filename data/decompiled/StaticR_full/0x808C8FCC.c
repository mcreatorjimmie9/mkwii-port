/* Function at 0x808C8FCC, size=440 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_808C8FCC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808C8FD8
    r29 = r3;
    r30 = r4;
    r12 = *(0 + r3); // lwz @ 0x808C8FE4
    r12 = *(0x64 + r12); // lwz @ 0x808C8FE8
    /* mtctr r12 */ // 0x808C8FEC
    /* bctrl  */ // 0x808C8FF0
    r31 = r3;
    if (==) goto 0x0x808c9170;
    r3 = *(0x7c + r29); // lwz @ 0x808C9000
    /* li r0, 0 */ // 0x808C9004
    if (==) goto 0x0x808c9020;
    r3 = *(8 + r3); // lwz @ 0x808C9010
    if (<) goto 0x0x808c9020;
    /* li r0, 1 */ // 0x808C901C
    if (!=) goto 0x0x808c9170;
    /* lis r3, 0 */ // 0x808C9028
    r3 = *(0 + r3); // lwz @ 0x808C902C
    r0 = *(0x28 + r3); // lwz @ 0x808C9030
    if (==) goto 0x0x808c9088;
    /* lis r4, 0 */ // 0x808C903C
    r4 = *(0 + r4); // lwz @ 0x808C9040
    r0 = *(0xb74 + r4); // lwz @ 0x808C9044
    if (==) goto 0x0x808c905c;
    r0 = *(0x38 + r4); // lwz @ 0x808C9050
    if (!=) goto 0x0x808c9170;
    /* li r4, 4 */ // 0x808C905C
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x808c9170;
    r12 = *(0 + r29); // lwz @ 0x808C906C
    r3 = r29;
    r12 = *(0x7c + r12); // lwz @ 0x808C9074
    /* mtctr r12 */ // 0x808C9078
    /* bctrl  */ // 0x808C907C
    if (!=) goto 0x0x808c9170;
    /* lis r3, 0 */ // 0x808C9088
    /* slwi r0, r31, 2 */ // 0x808C908C
    r3 = *(0 + r3); // lwz @ 0x808C9090
    r3 = *(0 + r3); // lwz @ 0x808C9094
    r3 = r3 + r0; // 0x808C9098
    r27 = *(8 + r3); // lwz @ 0x808C909C
    if (!=) goto 0x0x808c90b0;
    /* li r27, 0 */ // 0x808C90A8
    /* b 0x808c9104 */ // 0x808C90AC
    /* lis r28, 0 */ // 0x808C90B0
    r28 = r28 + 0; // 0x808C90B4
    if (==) goto 0x0x808c9100;
    r12 = *(0 + r27); // lwz @ 0x808C90BC
    r3 = r27;
    r12 = *(0x60 + r12); // lwz @ 0x808C90C4
    /* mtctr r12 */ // 0x808C90C8
    /* bctrl  */ // 0x808C90CC
    /* b 0x808c90e8 */ // 0x808C90D0
    if (!=) goto 0x0x808c90e4;
    /* li r0, 1 */ // 0x808C90DC
    /* b 0x808c90f4 */ // 0x808C90E0
    r3 = *(0 + r3); // lwz @ 0x808C90E4
    if (!=) goto 0x0x808c90d4;
    /* li r0, 0 */ // 0x808C90F0
    if (==) goto 0x0x808c9100;
    /* b 0x808c9104 */ // 0x808C90FC
    /* li r27, 0 */ // 0x808C9100
    /* lis r3, 0 */ // 0x808C9104
    r3 = *(0 + r3); // lwz @ 0x808C9108
    r0 = *(0xb74 + r3); // lwz @ 0x808C910C
    if (!=) goto 0x0x808c914c;
    /* lis r3, 0 */ // 0x808C9118
    r3 = *(0 + r3); // lwz @ 0x808C911C
    r3 = *(0 + r3); // lwz @ 0x808C9120
    r0 = *(0 + r3); // lwz @ 0x808C9124
    if (==) goto 0x0x808c914c;
    if (==) goto 0x0x808c914c;
    if (==) goto 0x0x808c914c;
    /* lis r3, 0 */ // 0x808C9140
    r3 = *(0 + r3); // lwz @ 0x808C9144
    FUN_808CF530(r3); // bl 0x808CF530
    *(0x44 + r27) = r30; // stw @ 0x808C914C
    r3 = r29;
    r4 = r31;
    /* li r5, 0 */ // 0x808C9158
    r12 = *(0 + r29); // lwz @ 0x808C915C
    r12 = *(0x24 + r12); // lwz @ 0x808C9160
    /* mtctr r12 */ // 0x808C9164
    /* bctrl  */ // 0x808C9168
    *(0x7c + r29) = r3; // stw @ 0x808C916C
    r0 = *(0x24 + r1); // lwz @ 0x808C9174
    return;
}