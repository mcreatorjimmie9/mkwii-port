/* Function at 0x80782300, size=292 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80782300(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x80782310
    *(8 + r1) = r30; // stw @ 0x80782314
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8078231C
    r12 = *(0x30 + r12); // lwz @ 0x80782320
    /* mtctr r12 */ // 0x80782324
    /* bctrl  */ // 0x80782328
    /* lis r4, 0x101 */ // 0x8078232C
    r0 = *(0x20 + r3); // lwz @ 0x80782330
    r3 = r4 + 0x101; // 0x80782334
    /* andc. r0, r3, r0 */ // 0x80782338
    if (!=) goto 0x0x80782358;
    /* lis r3, 0 */ // 0x80782340
    r3 = *(0 + r3); // lwz @ 0x80782344
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80782358;
    /* li r31, 1 */ // 0x80782354
    r0 = *(0xb4 + r30); // lbz @ 0x80782358
    if (!=) goto 0x0x80782398;
    /* lis r31, 0 */ // 0x80782364
    r4 = r30 + 0x30; // 0x80782368
    r3 = *(0 + r31); // lwz @ 0x8078236C
    r12 = *(0 + r3); // lwz @ 0x80782370
    r12 = *(0x74 + r12); // lwz @ 0x80782374
    /* mtctr r12 */ // 0x80782378
    /* bctrl  */ // 0x8078237C
    r3 = *(0 + r31); // lwz @ 0x80782380
    r12 = *(0 + r3); // lwz @ 0x80782384
    r12 = *(0x80 + r12); // lwz @ 0x80782388
    /* mtctr r12 */ // 0x8078238C
    /* bctrl  */ // 0x80782390
    /* b 0x807823f8 */ // 0x80782394
    if (!=) goto 0x0x807823b8;
    r3 = *(0xb0 + r30); // lwz @ 0x807823A0
    r12 = *(0 + r3); // lwz @ 0x807823A4
    r12 = *(0xc + r12); // lwz @ 0x807823A8
    /* mtctr r12 */ // 0x807823AC
    /* bctrl  */ // 0x807823B0
    /* b 0x807823cc */ // 0x807823B4
    r3 = *(0xb0 + r30); // lwz @ 0x807823B8
    r12 = *(0 + r3); // lwz @ 0x807823BC
    r12 = *(0x10 + r12); // lwz @ 0x807823C0
    /* mtctr r12 */ // 0x807823C4
    /* bctrl  */ // 0x807823C8
    r3 = *(0xb0 + r30); // lwz @ 0x807823CC
    r4 = r30 + 0x30; // 0x807823D0
    r12 = *(0 + r3); // lwz @ 0x807823D4
    r12 = *(0x14 + r12); // lwz @ 0x807823D8
    /* mtctr r12 */ // 0x807823DC
    /* bctrl  */ // 0x807823E0
    r3 = *(0xb0 + r30); // lwz @ 0x807823E4
    r12 = *(0 + r3); // lwz @ 0x807823E8
    r12 = *(0x1c + r12); // lwz @ 0x807823EC
    /* mtctr r12 */ // 0x807823F0
    /* bctrl  */ // 0x807823F4
    /* lis r4, 0 */ // 0x807823F8
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x80782400
    /* li r4, 0x1d8 */ // 0x80782404
    FUN_808A0AA8(r4, r3, r4); // bl 0x808A0AA8
    r0 = *(0x14 + r1); // lwz @ 0x8078240C
    r31 = *(0xc + r1); // lwz @ 0x80782410
    r30 = *(8 + r1); // lwz @ 0x80782414
    return;
}