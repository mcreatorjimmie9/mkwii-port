/* Function at 0x8089F464, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8089F464(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x8089F478
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8089F480
    r29 = r3;
    r0 = *(4 + r3); // lwz @ 0x8089F488
    if (!=) goto 0x0x8089f49c;
    /* li r3, 0 */ // 0x8089F494
    /* b 0x8089f52c */ // 0x8089F498
    /* lis r3, 0 */ // 0x8089F49C
    r4 = *(0xc + r29); // lwz @ 0x8089F4A0
    r3 = *(0 + r3); // lwz @ 0x8089F4A4
    FUN_8061D97C(r3, r3); // bl 0x8061D97C
    FUN_8061ED38(r3); // bl 0x8061ED38
    r7 = *(0 + r3); // lwz @ 0x8089F4B0
    r4 = r30;
    r0 = *(4 + r3); // lwz @ 0x8089F4B8
    r6 = r31;
    *(0xc + r1) = r0; // stw @ 0x8089F4C0
    *(8 + r1) = r7; // stw @ 0x8089F4C8
    r0 = *(8 + r3); // lwz @ 0x8089F4CC
    *(0x10 + r1) = r0; // stw @ 0x8089F4D0
    r3 = *(4 + r29); // lwz @ 0x8089F4D4
    r12 = *(0 + r3); // lwz @ 0x8089F4D8
    r12 = *(0x10 + r12); // lwz @ 0x8089F4DC
    /* mtctr r12 */ // 0x8089F4E0
    /* bctrl  */ // 0x8089F4E4
    r3 = *(4 + r29); // lwz @ 0x8089F4E8
    r12 = *(0 + r3); // lwz @ 0x8089F4EC
    r12 = *(0x24 + r12); // lwz @ 0x8089F4F0
    /* mtctr r12 */ // 0x8089F4F4
    /* bctrl  */ // 0x8089F4F8
    r3 = *(4 + r29); // lwz @ 0x8089F4FC
    /* lfs f0, 8(r1) */ // 0x8089F500
    r12 = *(0 + r3); // lwz @ 0x8089F504
    /* fmuls f1, f0, f1 */ // 0x8089F508
    r12 = *(0x20 + r12); // lwz @ 0x8089F50C
    /* mtctr r12 */ // 0x8089F510
    /* bctrl  */ // 0x8089F514
    /* lis r3, 0 */ // 0x8089F518
    r4 = *(8 + r29); // lwz @ 0x8089F51C
    r3 = *(0 + r3); // lwz @ 0x8089F520
    r5 = *(4 + r29); // lwz @ 0x8089F524
    FUN_808AB090(r3); // bl 0x808AB090
    r0 = *(0x34 + r1); // lwz @ 0x8089F52C
    r31 = *(0x2c + r1); // lwz @ 0x8089F530
    r30 = *(0x28 + r1); // lwz @ 0x8089F534
    r29 = *(0x24 + r1); // lwz @ 0x8089F538
    return;
}