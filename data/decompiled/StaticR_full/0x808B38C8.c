/* Function at 0x808B38C8, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808B38C8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x808B38D4
    *(0x10 + r1) = r30; // stw @ 0x808B38DC
    r30 = r4;
    *(0xc + r1) = r29; // stw @ 0x808B38E4
    r29 = r3;
    r3 = r5;
    FUN_8064A384(r3); // bl 0x8064A384
    *(0x3e8 + r29) = r30; // stw @ 0x808B38F4
    /* lis r3, 0 */ // 0x808B38F8
    /* slwi r0, r30, 2 */ // 0x808B38FC
    /* fmr f31, f1 */ // 0x808B3900
    r3 = *(0 + r3); // lwz @ 0x808B3904
    r3 = *(0 + r3); // lwz @ 0x808B3908
    r3 = r3 + r0; // 0x808B390C
    r30 = *(8 + r3); // lwz @ 0x808B3910
    if (!=) goto 0x0x808b3924;
    /* li r30, 0 */ // 0x808B391C
    /* b 0x808b3978 */ // 0x808B3920
    /* lis r31, 0 */ // 0x808B3924
    r31 = r31 + 0; // 0x808B3928
    if (==) goto 0x0x808b3974;
    r12 = *(0 + r30); // lwz @ 0x808B3930
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808B3938
    /* mtctr r12 */ // 0x808B393C
    /* bctrl  */ // 0x808B3940
    /* b 0x808b395c */ // 0x808B3944
    if (!=) goto 0x0x808b3958;
    /* li r0, 1 */ // 0x808B3950
    /* b 0x808b3968 */ // 0x808B3954
    r3 = *(0 + r3); // lwz @ 0x808B3958
    if (!=) goto 0x0x808b3948;
    /* li r0, 0 */ // 0x808B3964
    if (==) goto 0x0x808b3974;
    /* b 0x808b3978 */ // 0x808B3970
    /* li r30, 0 */ // 0x808B3974
    if (==) goto 0x0x808b3988;
    r0 = *(4 + r29); // lwz @ 0x808B3980
    *(0x3ec + r30) = r0; // stw @ 0x808B3984
    r0 = *(0x42c + r29); // lbz @ 0x808B3988
    if (!=) goto 0x0x808b39b8;
    r0 = *(8 + r29); // lwz @ 0x808B3994
    if (!=) goto 0x0x808b39b8;
    /* fmr f1, f31 */ // 0x808B39A0
    r3 = r29;
    /* li r4, 0 */ // 0x808B39A8
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* li r0, 1 */ // 0x808B39B0
    *(0x42c + r29) = r0; // stb @ 0x808B39B4
    r0 = *(0x24 + r1); // lwz @ 0x808B39B8
    /* lfd f31, 0x18(r1) */ // 0x808B39BC
    r31 = *(0x14 + r1); // lwz @ 0x808B39C0
    r30 = *(0x10 + r1); // lwz @ 0x808B39C4
    r29 = *(0xc + r1); // lwz @ 0x808B39C8
    return;
}