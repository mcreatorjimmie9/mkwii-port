/* Function at 0x808D6184, size=632 bytes */
/* Stack frame: 288 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 16 function(s) */

int FUN_808D6184(int r3, int r4, int r5)
{
    /* Stack frame: -288(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x114 + r1) = r29; // stw @ 0x808D619C
    r12 = *(0 + r3); // lwz @ 0x808D61A0
    r12 = *(0x3c + r12); // lwz @ 0x808D61A4
    /* mtctr r12 */ // 0x808D61A8
    /* bctrl  */ // 0x808D61AC
    r3 = r30;
    FUN_80876FEC(r3); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x808D61B8
    r0 = *(0x19c + r30); // lbz @ 0x808D61BC
    r5 = *(0 + r4); // lwz @ 0x808D61C0
    r4 = r3 rlwinm 2; // rlwinm
    /* li r3, 0 */ // 0x808D61CC
    r5 = *(0xc + r5); // lwz @ 0x808D61D0
    /* lwzx r4, r5, r4 */ // 0x808D61D4
    r31 = *(0x26 + r4); // lbz @ 0x808D61D8
    if (==) goto 0x0x808d61f0;
    r0 = *(0x270 + r30); // lwz @ 0x808D61E0
    if (==) goto 0x0x808d61f0;
    /* li r3, 1 */ // 0x808D61EC
    if (==) goto 0x0x808d63e0;
    r3 = *(0x199 + r30); // lbz @ 0x808D61F8
    if (==) goto 0x0x808d63e0;
    r0 = r3 + -1; // 0x808D6204
    /* mulli r0, r0, 0xc */ // 0x808D620C
    r4 = r30 + 0x280; // 0x808D6210
    r5 = r30 + r0; // 0x808D6214
    r5 = r5 + 0x204; // 0x808D6218
    FUN_808D63FC(r3, r4, r5); // bl 0x808D63FC
    r0 = *(0x30 + r1); // lhz @ 0x808D6220
    /* lis r4, 0 */ // 0x808D6224
    *(0x284 + r30) = r0; // sth @ 0x808D6228
    r4 = r4 + 0; // 0x808D622C
    /* li r0, 0 */ // 0x808D6230
    r3 = r30;
    r5 = *(0x32 + r1); // lbz @ 0x808D6238
    *(0x286 + r30) = r5; // stb @ 0x808D623C
    r5 = *(0x34 + r1); // lhz @ 0x808D6240
    *(0x288 + r30) = r5; // sth @ 0x808D6244
    r5 = *(0x36 + r1); // lbz @ 0x808D6248
    *(0x28a + r30) = r5; // stb @ 0x808D624C
    *(0x38 + r1) = r4; // stw @ 0x808D6250
    *(0x42 + r1) = r0; // stb @ 0x808D6254
    *(0x3c + r1) = r0; // sth @ 0x808D6258
    *(0x3e + r1) = r0; // stb @ 0x808D625C
    *(0x40 + r1) = r0; // sth @ 0x808D6260
    r29 = *(0x199 + r30); // lbz @ 0x808D6264
    FUN_80876FEC(); // bl 0x80876FEC
    /* lis r4, 0 */ // 0x808D626C
    r0 = r3 rlwinm 2; // rlwinm
    r3 = *(0 + r4); // lwz @ 0x808D6274
    r4 = r29;
    r3 = *(0xc + r3); // lwz @ 0x808D6280
    /* lwzx r3, r3, r0 */ // 0x808D6284
    FUN_805C4C84(r4, r5); // bl 0x805C4C84
    r4 = r30 + 0x274; // 0x808D6290
    FUN_808D63FC(r3, r4, r5); // bl 0x808D63FC
    r0 = *(0x24 + r1); // lhz @ 0x808D629C
    *(0x278 + r30) = r0; // sth @ 0x808D62A4
    r0 = *(0x26 + r1); // lbz @ 0x808D62A8
    *(0x27a + r30) = r0; // stb @ 0x808D62AC
    r0 = *(0x28 + r1); // lhz @ 0x808D62B0
    *(0x27c + r30) = r0; // sth @ 0x808D62B4
    r0 = *(0x2a + r1); // lbz @ 0x808D62B8
    *(0x27e + r30) = r0; // stb @ 0x808D62BC
    FUN_80654ECC(); // bl 0x80654ECC
    r0 = *(0x27e + r30); // lbz @ 0x808D62C4
    if (!=) goto 0x0x808d62d8;
    /* li r0, 0 */ // 0x808D62D0
    /* b 0x808d6340 */ // 0x808D62D4
    r0 = *(0x28a + r30); // lbz @ 0x808D62D8
    if (!=) goto 0x0x808d62ec;
    /* li r0, 1 */ // 0x808D62E4
    /* b 0x808d6340 */ // 0x808D62E8
    r0 = *(0x284 + r30); // lhz @ 0x808D62EC
    r3 = *(0x278 + r30); // lhz @ 0x808D62F0
    if (>=) goto 0x0x808d6304;
    /* li r0, 1 */ // 0x808D62FC
    /* b 0x808d6340 */ // 0x808D6300
    if (!=) goto 0x0x808d633c;
    r0 = *(0x286 + r30); // lbz @ 0x808D6308
    r3 = *(0x27a + r30); // lbz @ 0x808D630C
    if (>=) goto 0x0x808d6320;
    /* li r0, 1 */ // 0x808D6318
    /* b 0x808d6340 */ // 0x808D631C
    if (!=) goto 0x0x808d633c;
    r3 = *(0x27c + r30); // lhz @ 0x808D6324
    r0 = *(0x288 + r30); // lhz @ 0x808D6328
    if (>=) goto 0x0x808d633c;
    /* li r0, 1 */ // 0x808D6334
    /* b 0x808d6340 */ // 0x808D6338
    /* li r0, 0 */ // 0x808D633C
    if (==) goto 0x0x808d6394;
    r3 = r30 + 0x98; // 0x808D6348
    /* li r4, 0 */ // 0x808D634C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x808D6354
    /* li r4, 0 */ // 0x808D6358
    /* lfs f1, 0(r5) */ // 0x808D635C
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r4 = r30 + 0x280; // 0x808D6368
    r5 = r30 + 0x274; // 0x808D636C
    FUN_808D649C(r3, r4, r5); // bl 0x808D649C
    FUN_808CFD38(r4, r5, r3, r4); // bl 0x808CFD38
    r3 = r30;
    /* li r4, 0x25b3 */ // 0x808D6388
    FUN_806A0A34(r4, r3, r5, r4); // bl 0x806A0A34
    /* b 0x808d63dc */ // 0x808D6390
    r4 = r30 + 0x274; // 0x808D6398
    r5 = r30 + 0x280; // 0x808D639C
    FUN_808D649C(r3, r4, r5); // bl 0x808D649C
    FUN_808CFD38(r4, r5, r3, r4); // bl 0x808CFD38
    r3 = r30 + 0x98; // 0x808D63B0
    /* li r4, 0 */ // 0x808D63B4
    FUN_8069F4A0(r3, r4, r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x808D63BC
    /* li r4, 1 */ // 0x808D63C0
    /* lfs f1, 0(r5) */ // 0x808D63C4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r30;
    /* li r4, 0x25b4 */ // 0x808D63D4
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    *(0x199 + r30) = r31; // stb @ 0x808D63DC
    r0 = *(0x124 + r1); // lwz @ 0x808D63E0
    r31 = *(0x11c + r1); // lwz @ 0x808D63E4
    r30 = *(0x118 + r1); // lwz @ 0x808D63E8
    r29 = *(0x114 + r1); // lwz @ 0x808D63EC
    return;
}