/* Function at 0x808BE06C, size=280 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_808BE06C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x808BE088
    r28 = r3;
    r0 = *(0x240 + r4); // lwz @ 0x808BE090
    if (==) goto 0x0x808be164;
    *(0x6f4 + r3) = r0; // stw @ 0x808BE09C
    /* li r4, 0 */ // 0x808BE0A0
    r3 = r3 + 0x24; // 0x808BE0A4
    FUN_8064E1CC(r4, r3); // bl 0x8064E1CC
    r30 = r3;
    if (!=) goto 0x0x808be0c0;
    /* li r30, 0 */ // 0x808BE0B8
    /* b 0x808be110 */ // 0x808BE0BC
    /* lis r31, 0 */ // 0x808BE0C0
    r31 = r31 + 0; // 0x808BE0C4
    if (==) goto 0x0x808be10c;
    r12 = *(0 + r3); // lwz @ 0x808BE0CC
    r12 = *(0x28 + r12); // lwz @ 0x808BE0D0
    /* mtctr r12 */ // 0x808BE0D4
    /* bctrl  */ // 0x808BE0D8
    /* b 0x808be0f4 */ // 0x808BE0DC
    if (!=) goto 0x0x808be0f0;
    /* li r0, 1 */ // 0x808BE0E8
    /* b 0x808be100 */ // 0x808BE0EC
    r3 = *(0 + r3); // lwz @ 0x808BE0F0
    if (!=) goto 0x0x808be0e0;
    /* li r0, 0 */ // 0x808BE0FC
    if (==) goto 0x0x808be10c;
    /* b 0x808be110 */ // 0x808BE108
    /* li r30, 0 */ // 0x808BE10C
    r3 = *(0x6f4 + r28); // lwz @ 0x808BE110
    FUN_808AF680(); // bl 0x808AF680
    r4 = r3;
    r3 = r30;
    /* li r5, 0 */ // 0x808BE120
    FUN_806A0A34(r4, r3, r5); // bl 0x806A0A34
    r0 = *(8 + r28); // lwz @ 0x808BE128
    if (<=) goto 0x0x808be164;
    r4 = *(0x6f4 + r28); // lwz @ 0x808BE134
    r3 = r28 + 0x6f8; // 0x808BE138
    FUN_806CAD80(r3); // bl 0x806CAD80
    /* lis r3, 0 */ // 0x808BE140
    /* slwi r0, r29, 2 */ // 0x808BE144
    r4 = *(0 + r3); // lwz @ 0x808BE148
    r3 = r28 + 0x87c; // 0x808BE14C
    r5 = *(0x6f4 + r28); // lwz @ 0x808BE150
    r4 = *(0x98 + r4); // lwz @ 0x808BE154
    r4 = r4 + r0; // 0x808BE158
    r4 = *(0x12c + r4); // lwz @ 0x808BE15C
    FUN_808D3DE8(r3); // bl 0x808D3DE8
    r0 = *(0x24 + r1); // lwz @ 0x808BE164
    r31 = *(0x1c + r1); // lwz @ 0x808BE168
    r30 = *(0x18 + r1); // lwz @ 0x808BE16C
    r29 = *(0x14 + r1); // lwz @ 0x808BE170
    r28 = *(0x10 + r1); // lwz @ 0x808BE174
    return;
}