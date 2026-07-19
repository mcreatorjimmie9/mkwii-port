/* Function at 0x808B4128, size=444 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_808B4128(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* lis r7, 0 */ // 0x808B4130
    *(0x34 + r1) = r0; // stw @ 0x808B4134
    /* stfd f31, 0x28(r1) */ // 0x808B4138
    /* fmr f31, f1 */ // 0x808B413C
    /* stmw r26, 0x10(r1) */ // 0x808B4140
    r31 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r7 = *(0 + r7); // lwz @ 0x808B4154
    r3 = *(0 + r7); // lwz @ 0x808B4158
    r29 = *(0x14c + r3); // lwz @ 0x808B415C
    if (!=) goto 0x0x808b4170;
    /* li r29, 0 */ // 0x808B4168
    /* b 0x808b41c4 */ // 0x808B416C
    /* lis r30, 0 */ // 0x808B4170
    r30 = r30 + 0; // 0x808B4174
    if (==) goto 0x0x808b41c0;
    r12 = *(0 + r29); // lwz @ 0x808B417C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B4184
    /* mtctr r12 */ // 0x808B4188
    /* bctrl  */ // 0x808B418C
    /* b 0x808b41a8 */ // 0x808B4190
    if (!=) goto 0x0x808b41a4;
    /* li r0, 1 */ // 0x808B419C
    /* b 0x808b41b4 */ // 0x808B41A0
    r3 = *(0 + r3); // lwz @ 0x808B41A4
    if (!=) goto 0x0x808b4194;
    /* li r0, 0 */ // 0x808B41B0
    if (==) goto 0x0x808b41c0;
    /* b 0x808b41c4 */ // 0x808B41BC
    /* li r29, 0 */ // 0x808B41C0
    r12 = *(0 + r29); // lwz @ 0x808B41C4
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x808B41CC
    /* mtctr r12 */ // 0x808B41D0
    /* bctrl  */ // 0x808B41D4
    r12 = *(0 + r31); // lwz @ 0x808B41D8
    r3 = r31;
    r12 = *(0x68 + r12); // lwz @ 0x808B41E0
    /* mtctr r12 */ // 0x808B41E4
    /* bctrl  */ // 0x808B41E8
    *(0x1a0 + r29) = r3; // stw @ 0x808B41EC
    r3 = r29;
    r4 = r26;
    r5 = r27;
    r12 = *(0 + r29); // lwz @ 0x808B41FC
    r12 = *(0x68 + r12); // lwz @ 0x808B4200
    /* mtctr r12 */ // 0x808B4204
    /* bctrl  */ // 0x808B4208
    *(0x604 + r29) = r28; // stw @ 0x808B420C
    /* li r0, 0x51 */ // 0x808B4210
    /* lis r3, 0 */ // 0x808B4214
    *(0x3e8 + r31) = r0; // stw @ 0x808B4218
    r3 = *(0 + r3); // lwz @ 0x808B421C
    r3 = *(0 + r3); // lwz @ 0x808B4220
    r29 = *(0x14c + r3); // lwz @ 0x808B4224
    if (!=) goto 0x0x808b4238;
    /* li r29, 0 */ // 0x808B4230
    /* b 0x808b428c */ // 0x808B4234
    /* lis r30, 0 */ // 0x808B4238
    r30 = r30 + 0; // 0x808B423C
    if (==) goto 0x0x808b4288;
    r12 = *(0 + r29); // lwz @ 0x808B4244
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808B424C
    /* mtctr r12 */ // 0x808B4250
    /* bctrl  */ // 0x808B4254
    /* b 0x808b4270 */ // 0x808B4258
    if (!=) goto 0x0x808b426c;
    /* li r0, 1 */ // 0x808B4264
    /* b 0x808b427c */ // 0x808B4268
    r3 = *(0 + r3); // lwz @ 0x808B426C
    if (!=) goto 0x0x808b425c;
    /* li r0, 0 */ // 0x808B4278
    if (==) goto 0x0x808b4288;
    /* b 0x808b428c */ // 0x808B4284
    /* li r29, 0 */ // 0x808B4288
    if (==) goto 0x0x808b429c;
    r0 = *(4 + r31); // lwz @ 0x808B4294
    *(0x3ec + r29) = r0; // stw @ 0x808B4298
    r0 = *(0x42c + r31); // lbz @ 0x808B429C
    if (!=) goto 0x0x808b42cc;
    r0 = *(8 + r31); // lwz @ 0x808B42A8
    if (!=) goto 0x0x808b42cc;
    /* fmr f1, f31 */ // 0x808B42B4
    r3 = r31;
    /* li r4, 0 */ // 0x808B42BC
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B42C4
    *(0x42c + r31) = r0; // stb @ 0x808B42C8
    /* lfd f31, 0x28(r1) */ // 0x808B42CC
    r0 = *(0x34 + r1); // lwz @ 0x808B42D4
    return;
}