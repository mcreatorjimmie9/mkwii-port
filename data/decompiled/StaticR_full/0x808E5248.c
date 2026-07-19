/* Function at 0x808E5248, size=252 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808E5248(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808E5250
    *(0x18 + r1) = r30; // stw @ 0x808E525C
    *(0x14 + r1) = r29; // stw @ 0x808E5260
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x808E5268
    r3 = *(0 + r3); // lwz @ 0x808E526C
    r30 = *(0x250 + r3); // lwz @ 0x808E5270
    if (!=) goto 0x0x808e5284;
    /* li r30, 0 */ // 0x808E527C
    /* b 0x808e52d8 */ // 0x808E5280
    /* lis r31, 0 */ // 0x808E5284
    r31 = r31 + 0; // 0x808E5288
    if (==) goto 0x0x808e52d4;
    r12 = *(0 + r30); // lwz @ 0x808E5290
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808E5298
    /* mtctr r12 */ // 0x808E529C
    /* bctrl  */ // 0x808E52A0
    /* b 0x808e52bc */ // 0x808E52A4
    if (!=) goto 0x0x808e52b8;
    /* li r0, 1 */ // 0x808E52B0
    /* b 0x808e52c8 */ // 0x808E52B4
    r3 = *(0 + r3); // lwz @ 0x808E52B8
    if (!=) goto 0x0x808e52a8;
    /* li r0, 0 */ // 0x808E52C4
    if (==) goto 0x0x808e52d4;
    /* b 0x808e52d8 */ // 0x808E52D0
    /* li r30, 0 */ // 0x808E52D4
    r3 = r30;
    /* li r4, -1 */ // 0x808E52DC
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    r3 = *(0x1754 + r29); // lwz @ 0x808E52E4
    if (==) goto 0x0x808e530c;
    r0 = *(8 + r3); // lwz @ 0x808E52F0
    if (!=) goto 0x0x808e530c;
    /* lis r4, 0 */ // 0x808E52FC
    /* lfs f1, 0(r4) */ // 0x808E5300
    /* li r4, -1 */ // 0x808E5304
    FUN_80671C48(r4, r4); // bl 0x80671C48
    /* lis r4, 0 */ // 0x808E530C
    /* li r0, -1 */ // 0x808E5310
    /* lfs f1, 0(r4) */ // 0x808E5314
    r3 = r29;
    *(0x3e8 + r29) = r0; // stw @ 0x808E531C
    /* li r4, 0 */ // 0x808E5320
    FUN_80671C48(r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x808E5328
    r31 = *(0x1c + r1); // lwz @ 0x808E532C
    r30 = *(0x18 + r1); // lwz @ 0x808E5330
    r29 = *(0x14 + r1); // lwz @ 0x808E5334
    return;
}