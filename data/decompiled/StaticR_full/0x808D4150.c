/* Function at 0x808D4150, size=328 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_808D4150(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x808D4160
    *(8 + r1) = r30; // stw @ 0x808D4164
    r3 = *(0 + r31); // lwz @ 0x808D4168
    r3 = *(0 + r3); // lwz @ 0x808D416C
    r3 = *(0 + r3); // lwz @ 0x808D4170
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808d424c;
    r3 = *(0 + r31); // lwz @ 0x808D4180
    r3 = *(0 + r3); // lwz @ 0x808D4184
    r30 = *(0x248 + r3); // lwz @ 0x808D4188
    if (==) goto 0x0x808d424c;
    r0 = *(0 + r3); // lwz @ 0x808D4194
    if (<) goto 0x0x808d41a8;
    if (<=) goto 0x0x808d41c8;
    if (<) goto 0x0x808d41b8;
    if (<=) goto 0x0x808d41c8;
    if (==) goto 0x0x808d41c8;
    if (!=) goto 0x0x808d4244;
    if (!=) goto 0x0x808d41d8;
    /* li r30, 0 */ // 0x808D41D0
    /* b 0x808d422c */ // 0x808D41D4
    /* lis r31, 0 */ // 0x808D41D8
    r31 = r31 + 0; // 0x808D41DC
    if (==) goto 0x0x808d4228;
    r12 = *(0 + r30); // lwz @ 0x808D41E4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808D41EC
    /* mtctr r12 */ // 0x808D41F0
    /* bctrl  */ // 0x808D41F4
    /* b 0x808d4210 */ // 0x808D41F8
    if (!=) goto 0x0x808d420c;
    /* li r0, 1 */ // 0x808D4204
    /* b 0x808d421c */ // 0x808D4208
    r3 = *(0 + r3); // lwz @ 0x808D420C
    if (!=) goto 0x0x808d41fc;
    /* li r0, 0 */ // 0x808D4218
    if (==) goto 0x0x808d4228;
    /* b 0x808d422c */ // 0x808D4224
    /* li r30, 0 */ // 0x808D4228
    r3 = r30;
    FUN_806B18CC(r3); // bl 0x806B18CC
    r0 = r3 + -3; // 0x808D4234
    /* cntlzw r0, r0 */ // 0x808D4238
    /* srwi r3, r0, 5 */ // 0x808D423C
    /* b 0x808d4280 */ // 0x808D4240
    /* li r3, 0 */ // 0x808D4244
    /* b 0x808d4280 */ // 0x808D4248
    /* lis r3, 0 */ // 0x808D424C
    r3 = *(0 + r3); // lwz @ 0x808D4250
    r3 = *(0 + r3); // lwz @ 0x808D4254
    r3 = *(0 + r3); // lwz @ 0x808D4258
    FUN_808CF8D8(r3); // bl 0x808CF8D8
    if (!=) goto 0x0x808d427c;
    /* lis r3, 0 */ // 0x808D4268
    r3 = *(0 + r3); // lwz @ 0x808D426C
    r0 = *(0x1780 + r3); // lwz @ 0x808D4270
    /* clrlwi r3, r0, 0x1f */ // 0x808D4274
    /* b 0x808d4280 */ // 0x808D4278
    /* li r3, 0 */ // 0x808D427C
    r0 = *(0x14 + r1); // lwz @ 0x808D4280
    r31 = *(0xc + r1); // lwz @ 0x808D4284
    r30 = *(8 + r1); // lwz @ 0x808D4288
    return;
}