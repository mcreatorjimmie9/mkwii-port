/* Function at 0x806B909C, size=516 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806B909C(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806B90A4
    r31 = r3;
    *(0xd8 + r1) = r30; // stw @ 0x806B90B4
    *(0xd4 + r1) = r29; // stw @ 0x806B90B8
    r3 = *(0 + r4); // lwz @ 0x806B90BC
    r4 = r31 + 0x80; // 0x806B90C0
    FUN_80700E54(r4); // bl 0x80700E54
    if (==) goto 0x0x806b919c;
    /* lis r3, 0 */ // 0x806B90D0
    r3 = *(0 + r3); // lwz @ 0x806B90D4
    r3 = *(0 + r3); // lwz @ 0x806B90D8
    r29 = *(0x144 + r3); // lwz @ 0x806B90DC
    if (!=) goto 0x0x806b90f0;
    /* li r29, 0 */ // 0x806B90E8
    /* b 0x806b9144 */ // 0x806B90EC
    /* lis r30, 0 */ // 0x806B90F0
    r30 = r30 + 0; // 0x806B90F4
    if (==) goto 0x0x806b9140;
    r12 = *(0 + r29); // lwz @ 0x806B90FC
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B9104
    /* mtctr r12 */ // 0x806B9108
    /* bctrl  */ // 0x806B910C
    /* b 0x806b9128 */ // 0x806B9110
    if (!=) goto 0x0x806b9124;
    /* li r0, 1 */ // 0x806B911C
    /* b 0x806b9134 */ // 0x806B9120
    r3 = *(0 + r3); // lwz @ 0x806B9124
    if (!=) goto 0x0x806b9114;
    /* li r0, 0 */ // 0x806B9130
    if (==) goto 0x0x806b9140;
    /* b 0x806b9144 */ // 0x806B913C
    /* li r29, 0 */ // 0x806B9140
    r12 = *(0 + r29); // lwz @ 0x806B9144
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B914C
    /* mtctr r12 */ // 0x806B9150
    /* bctrl  */ // 0x806B9154
    r12 = *(0 + r29); // lwz @ 0x806B9158
    r3 = r29;
    /* li r4, 0x1997 */ // 0x806B9160
    /* li r5, 0 */ // 0x806B9164
    r12 = *(0x68 + r12); // lwz @ 0x806B9168
    /* mtctr r12 */ // 0x806B916C
    /* bctrl  */ // 0x806B9170
    r12 = *(0 + r31); // lwz @ 0x806B9174
    r3 = r31;
    /* li r4, 0x4f */ // 0x806B917C
    /* li r5, 0 */ // 0x806B9180
    r12 = *(0x24 + r12); // lwz @ 0x806B9184
    /* mtctr r12 */ // 0x806B9188
    /* bctrl  */ // 0x806B918C
    /* li r0, 3 */ // 0x806B9190
    *(0x7c + r31) = r0; // stw @ 0x806B9194
    /* b 0x806b9284 */ // 0x806B9198
    /* lis r3, 0 */ // 0x806B919C
    r3 = *(0 + r3); // lwz @ 0x806B91A0
    r3 = *(0 + r3); // lwz @ 0x806B91A4
    r29 = *(0x14c + r3); // lwz @ 0x806B91A8
    if (!=) goto 0x0x806b91bc;
    /* li r29, 0 */ // 0x806B91B4
    /* b 0x806b9210 */ // 0x806B91B8
    /* lis r30, 0 */ // 0x806B91BC
    r30 = r30 + 0; // 0x806B91C0
    if (==) goto 0x0x806b920c;
    r12 = *(0 + r29); // lwz @ 0x806B91C8
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806B91D0
    /* mtctr r12 */ // 0x806B91D4
    /* bctrl  */ // 0x806B91D8
    /* b 0x806b91f4 */ // 0x806B91DC
    if (!=) goto 0x0x806b91f0;
    /* li r0, 1 */ // 0x806B91E8
    /* b 0x806b9200 */ // 0x806B91EC
    r3 = *(0 + r3); // lwz @ 0x806B91F0
    if (!=) goto 0x0x806b91e0;
    /* li r0, 0 */ // 0x806B91FC
    if (==) goto 0x0x806b920c;
    /* b 0x806b9210 */ // 0x806B9208
    /* li r29, 0 */ // 0x806B920C
    r12 = *(0 + r29); // lwz @ 0x806B9210
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806B9218
    /* mtctr r12 */ // 0x806B921C
    /* bctrl  */ // 0x806B9220
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806B922C
    r3 = *(0 + r3); // lwz @ 0x806B9230
    FUN_806F590C(r3, r3); // bl 0x806F590C
    *(8 + r1) = r3; // stw @ 0x806B9238
    r3 = r29;
    /* li r4, 0x1998 */ // 0x806B9244
    r12 = *(0 + r29); // lwz @ 0x806B9248
    r12 = *(0x68 + r12); // lwz @ 0x806B924C
    /* mtctr r12 */ // 0x806B9250
    /* bctrl  */ // 0x806B9254
    r0 = r31 + 0x44; // 0x806B9258
    *(0x188 + r29) = r0; // stw @ 0x806B925C
    r3 = r31;
    /* li r4, 0x51 */ // 0x806B9264
    r12 = *(0 + r31); // lwz @ 0x806B9268
    /* li r5, 0 */ // 0x806B926C
    r12 = *(0x24 + r12); // lwz @ 0x806B9270
    /* mtctr r12 */ // 0x806B9274
    /* bctrl  */ // 0x806B9278
    /* li r0, 6 */ // 0x806B927C
    *(0x7c + r31) = r0; // stw @ 0x806B9280
    r0 = *(0xe4 + r1); // lwz @ 0x806B9284
    r31 = *(0xdc + r1); // lwz @ 0x806B9288
    r30 = *(0xd8 + r1); // lwz @ 0x806B928C
    r29 = *(0xd4 + r1); // lwz @ 0x806B9290
    return;
}