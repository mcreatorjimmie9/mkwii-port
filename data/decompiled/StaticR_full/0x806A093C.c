/* Function at 0x806A093C, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806A093C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x806A0958
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x806A0960
    r28 = r3;
    r3 = r3 + 0xa8; // 0x806A0968
    FUN_806669DC(r3); // bl 0x806669DC
    if (==) goto 0x0x806a0990;
    r6 = r29;
    r7 = r30;
    r4 = r28 + 0x144; // 0x806A0980
    r5 = r28 + 0x158; // 0x806A0984
    FUN_80655280(r6, r7, r4, r5); // bl 0x80655280
    /* b 0x806a0a14 */ // 0x806A098C
    r4 = r31;
    r3 = r28 + 0xa8; // 0x806A0994
    FUN_80665D1C(r5, r4, r3); // bl 0x80665D1C
    r30 = r3;
    if (!=) goto 0x0x806a09b0;
    /* li r30, 0 */ // 0x806A09A8
    /* b 0x806a0a00 */ // 0x806A09AC
    /* lis r31, 0 */ // 0x806A09B0
    r31 = r31 + 0; // 0x806A09B4
    if (==) goto 0x0x806a09fc;
    r12 = *(0 + r3); // lwz @ 0x806A09BC
    r12 = *(0xc + r12); // lwz @ 0x806A09C0
    /* mtctr r12 */ // 0x806A09C4
    /* bctrl  */ // 0x806A09C8
    /* b 0x806a09e4 */ // 0x806A09CC
    if (!=) goto 0x0x806a09e0;
    /* li r0, 1 */ // 0x806A09D8
    /* b 0x806a09f0 */ // 0x806A09DC
    r3 = *(0 + r3); // lwz @ 0x806A09E0
    if (!=) goto 0x0x806a09d0;
    /* li r0, 0 */ // 0x806A09EC
    if (==) goto 0x0x806a09fc;
    /* b 0x806a0a00 */ // 0x806A09F8
    /* li r30, 0 */ // 0x806A09FC
    r3 = r30;
    r6 = r29;
    r4 = r28 + 0x144; // 0x806A0A08
    r5 = r28 + 0x158; // 0x806A0A0C
    FUN_806651B8(r3, r6, r4, r5); // bl 0x806651B8
    r0 = *(0x24 + r1); // lwz @ 0x806A0A14
    r31 = *(0x1c + r1); // lwz @ 0x806A0A18
    r30 = *(0x18 + r1); // lwz @ 0x806A0A1C
    r29 = *(0x14 + r1); // lwz @ 0x806A0A20
    r28 = *(0x10 + r1); // lwz @ 0x806A0A24
    return;
}