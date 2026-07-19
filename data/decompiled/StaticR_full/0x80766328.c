/* Function at 0x80766328, size=212 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_80766328(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    *(0x8c + r1) = r31; // stw @ 0x80766334
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8076633C
    r12 = *(0xc + r12); // lwz @ 0x80766340
    /* mtctr r12 */ // 0x80766344
    /* bctrl  */ // 0x80766348
    r12 = *(0 + r31); // lwz @ 0x8076634C
    r3 = r31;
    /* li r4, 1 */ // 0x80766354
    r12 = *(0x68 + r12); // lwz @ 0x80766358
    /* mtctr r12 */ // 0x8076635C
    /* bctrl  */ // 0x80766360
    /* li r0, 0 */ // 0x80766364
    *(0xf9 + r31) = r0; // stb @ 0x80766368
    /* lis r3, 0 */ // 0x8076636C
    r0 = *(0xf8 + r31); // lbz @ 0x80766370
    r4 = *(0 + r3); // lwz @ 0x80766374
    /* li r3, 2 */ // 0x80766378
    r4 = *(0x25 + r4); // lbz @ 0x80766380
    r0 = r4 + -2; // 0x80766384
    /* orc r3, r4, r3 */ // 0x80766388
    /* srwi r0, r0, 1 */ // 0x8076638C
    /* subf r0, r0, r3 */ // 0x80766390
    /* srwi r0, r0, 0x1f */ // 0x80766394
    if (!=) goto 0x0x807663e4;
    if (!=) goto 0x0x807663e4;
    /* lis r4, 0 */ // 0x807663A4
    r4 = r4 + 0; // 0x807663AC
    /* li r5, 0 */ // 0x807663B0
    r4 = r4 + 0x4c; // 0x807663B4
    FUN_805E3430(r4, r3, r4, r5, r4); // bl 0x805E3430
    FUN_805E3430(r4, r5, r4, r3); // bl 0x805E3430
    r4 = r31 + 0x30; // 0x807663C8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* li r4, -1 */ // 0x807663DC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    r3 = *(0xd0 + r31); // lwz @ 0x807663E4
    r12 = *(0 + r3); // lwz @ 0x807663E8
    r12 = *(0xc + r12); // lwz @ 0x807663EC
    /* mtctr r12 */ // 0x807663F0
    /* bctrl  */ // 0x807663F4
    r3 = *(0xd0 + r31); // lwz @ 0x807663F8
}