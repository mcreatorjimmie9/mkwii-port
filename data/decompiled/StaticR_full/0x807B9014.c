/* Function at 0x807B9014, size=476 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_807B9014(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807B9028
    *(0x24 + r1) = r29; // stw @ 0x807B902C
    r4 = *(0x38 + r3); // lwz @ 0x807B9030
    r5 = *(0x194 + r3); // lwz @ 0x807B9034
    r4 = *(0 + r4); // lwz @ 0x807B9038
    r30 = *(0xc + r5); // lwz @ 0x807B903C
    r4 = *(0x10 + r4); // lwz @ 0x807B9040
    r29 = *(0x14c + r4); // lwz @ 0x807B9048
    if (==) goto 0x0x807b9060;
    r0 = *(0x24 + r5); // lwz @ 0x807B9050
    if (!=) goto 0x0x807b9060;
    /* b 0x807b90f0 */ // 0x807B905C
    r30 = *(0x10 + r5); // lwz @ 0x807B9060
    if (==) goto 0x0x807b907c;
    r0 = *(0x28 + r5); // lwz @ 0x807B906C
    if (!=) goto 0x0x807b907c;
    /* b 0x807b90f0 */ // 0x807B9078
    r30 = *(0x14 + r5); // lwz @ 0x807B907C
    if (==) goto 0x0x807b9098;
    r0 = *(0x2c + r5); // lwz @ 0x807B9088
    if (!=) goto 0x0x807b9098;
    /* b 0x807b90f0 */ // 0x807B9094
    r30 = *(0x18 + r5); // lwz @ 0x807B9098
    if (==) goto 0x0x807b90b4;
    r0 = *(0x30 + r5); // lwz @ 0x807B90A4
    if (!=) goto 0x0x807b90b4;
    /* b 0x807b90f0 */ // 0x807B90B0
    r30 = *(0x1c + r5); // lwz @ 0x807B90B4
    if (==) goto 0x0x807b90d0;
    r0 = *(0x34 + r5); // lwz @ 0x807B90C0
    if (!=) goto 0x0x807b90d0;
    /* b 0x807b90f0 */ // 0x807B90CC
    r30 = *(0x20 + r5); // lwz @ 0x807B90D0
    if (==) goto 0x0x807b90ec;
    r0 = *(0x38 + r5); // lwz @ 0x807B90DC
    if (!=) goto 0x0x807b90ec;
    /* b 0x807b90f0 */ // 0x807B90E8
    /* li r30, 0 */ // 0x807B90EC
    r3 = *(0x19c + r3); // lwz @ 0x807B90F0
    r12 = *(0 + r3); // lwz @ 0x807B90F4
    r12 = *(0xc + r12); // lwz @ 0x807B90F8
    /* mtctr r12 */ // 0x807B90FC
    /* bctrl  */ // 0x807B9100
    if (==) goto 0x0x807b9134;
    r4 = *(0x19c + r31); // lwz @ 0x807B910C
    FUN_807B8BB4(r3); // bl 0x807B8BB4
    r3 = *(0x50 + r31); // lwz @ 0x807B9118
    /* lfs f0, 8(r1) */ // 0x807B911C
    /* stfs f0, 0(r3) */ // 0x807B9120
    /* lfs f0, 0xc(r1) */ // 0x807B9124
    /* stfs f0, 4(r3) */ // 0x807B9128
    /* lfs f0, 0x10(r1) */ // 0x807B912C
    /* stfs f0, 8(r3) */ // 0x807B9130
    if (==) goto 0x0x807b91b8;
    r4 = *(0x194 + r31); // lwz @ 0x807B913C
    r3 = r29;
    *(8 + r4) = r30; // stw @ 0x807B9144
    FUN_807BDB48(r3); // bl 0x807BDB48
    r4 = *(0x10 + r30); // lwz @ 0x807B914C
    r30 = r3;
    r3 = *(0x14c + r4); // lwz @ 0x807B9154
    FUN_807BDB48(); // bl 0x807BDB48
    /* lis r6, 0 */ // 0x807B915C
    /* lis r4, 0 */ // 0x807B9160
    /* slwi r5, r30, 2 */ // 0x807B9164
    /* slwi r0, r3, 2 */ // 0x807B9168
    r6 = r6 + 0; // 0x807B916C
    r4 = r4 + 0; // 0x807B9170
    /* lwzx r5, r6, r5 */ // 0x807B9174
    /* lwzx r3, r6, r0 */ // 0x807B9178
    /* slwi r0, r5, 4 */ // 0x807B917C
    r0 = r0 + r5; // 0x807B9180
    r0 = r4 + r0; // 0x807B9184
    /* lbzx r0, r3, r0 */ // 0x807B9188
    if (>) goto 0x0x807b91a4;
    r3 = r31;
    r4 = r31 + 0x13c; // 0x807B9198
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807b91b8 */ // 0x807B91A0
    if (!=) goto 0x0x807b91b8;
    r3 = r31;
    r4 = r31 + 0x168; // 0x807B91B0
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r3 = r29;
    FUN_807BDA8C(r3, r4, r3); // bl 0x807BDA8C
    if (==) goto 0x0x807b91d4;
    r3 = r31;
    r4 = r31 + 0x8c; // 0x807B91CC
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x34 + r1); // lwz @ 0x807B91D4
    r31 = *(0x2c + r1); // lwz @ 0x807B91D8
    r30 = *(0x28 + r1); // lwz @ 0x807B91DC
    r29 = *(0x24 + r1); // lwz @ 0x807B91E0
    return;
}