/* Function at 0x807DC118, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807DC118(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807DC128
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807DC130
    r30 = r3;
    if (==) goto 0x0x807dc194;
    /* lis r5, 0 */ // 0x807DC13C
    /* lis r4, 0 */ // 0x807DC140
    r5 = r5 + 0; // 0x807DC144
    *(0 + r3) = r5; // stw @ 0x807DC148
    r3 = *(0 + r4); // lwz @ 0x807DC14C
    if (==) goto 0x0x807dc178;
    /* li r0, 0 */ // 0x807DC158
    *(0 + r4) = r0; // stw @ 0x807DC15C
    if (==) goto 0x0x807dc178;
    r12 = *(0x10 + r3); // lwz @ 0x807DC164
    /* li r4, 1 */ // 0x807DC168
    r12 = *(8 + r12); // lwz @ 0x807DC16C
    /* mtctr r12 */ // 0x807DC170
    /* bctrl  */ // 0x807DC174
    r3 = r30;
    /* li r4, 0 */ // 0x807DC17C
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807dc194;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807DC198
    r30 = *(8 + r1); // lwz @ 0x807DC19C
}