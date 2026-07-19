/* Function at 0x806C620C, size=1040 bytes */
/* Stack frame: 672 bytes */
/* Saved registers: r14 */
/* Calls: 16 function(s) */

int FUN_806C620C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -672(r1) */
    /* saved r14 */
    /* lis r8, 0 */ // 0x806C6214
    *(0x2a4 + r1) = r0; // stw @ 0x806C6218
    /* lis r0, 0 */ // 0x806C621C
    r8 = r8 + 0; // 0x806C6220
    /* stmw r14, 0x258(r1) */ // 0x806C6224
    r15 = r4;
    r4 = r0;
    r16 = r7;
    r17 = r6;
    r18 = r5;
    *(0x248 + r1) = r0; // stw @ 0x806C623C
    r4 = r4 + 0; // 0x806C6240
    r3 = r15;
    r5 = r17;
    *(0x248 + r1) = r4; // stw @ 0x806C624C
    r6 = r16;
    r4 = r8 + 0x80; // 0x806C6254
    /* li r7, 0 */ // 0x806C6258
    FUN_806A105C(r5, r6, r4, r7); // bl 0x806A105C
    /* lis r4, 1 */ // 0x806C6260
    /* lis r3, 0 */ // 0x806C6264
    r0 = r4 + -0x7340; // 0x806C6268
    r5 = *(0 + r3); // lwz @ 0x806C626C
    r0 = r18 * r0; // 0x806C6270
    /* lis r3, 0x524b */ // 0x806C6274
    r6 = *(0x14 + r5); // lwz @ 0x806C6278
    /* li r20, 0 */ // 0x806C627C
    r3 = r3 + 0x5044; // 0x806C6280
    r6 = r6 + 8; // 0x806C6284
    /* lwzx r6, r6, r0 */ // 0x806C6288
    /* addis r0, r6, -0x524b */ // 0x806C628C
    /* subf r3, r3, r6 */ // 0x806C6290
    /* cntlzw r3, r3 */ // 0x806C6294
    /* srwi r14, r3, 5 */ // 0x806C629C
    if (!=) goto 0x0x806c62b4;
    r0 = r4 + -0x6c10; // 0x806C62A4
    r0 = r18 * r0; // 0x806C62A8
    r3 = r5 + r0; // 0x806C62AC
    r20 = r3 + 0x38; // 0x806C62B0
    /* lis r18, 0 */ // 0x806C62B4
    /* cntlzw r0, r14 */ // 0x806C62B8
    r3 = r15;
    /* srwi r5, r0, 5 */ // 0x806C62C8
    FUN_806A11CC(r3, r4); // bl 0x806A11CC
    r3 = r15;
    /* li r5, 0x1781 */ // 0x806C62D8
    /* li r6, 0 */ // 0x806C62DC
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r3 = r15;
    r5 = r14;
    FUN_806A11CC(r6, r3, r5, r4); // bl 0x806A11CC
    if (==) goto 0x0x806c6348;
    r3 = r17;
    r4 = r16;
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    /* neg r0, r3 */ // 0x806C6308
    r0 = r0 | r3; // 0x806C630C
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x806C6310
    if (==) goto 0x0x806c6348;
    FUN_80654ECC(r3); // bl 0x80654ECC
    r3 = r17;
    r4 = r16;
    FUN_8066E0EC(r3, r3, r4); // bl 0x8066E0EC
    *(0x1cc + r1) = r3; // stw @ 0x806C632C
    r3 = r15;
    /* li r5, 0x251d */ // 0x806C633C
    FUN_806A093C(r3, r4, r6, r5); // bl 0x806A093C
    /* b 0x806c635c */ // 0x806C6344
    /* lis r4, 0 */ // 0x806C6348
    r3 = r15;
    r4 = r4 + 0; // 0x806C6350
    r4 = r4 + 0x97; // 0x806C6354
    FUN_806A0B6C(r4, r3, r4, r4); // bl 0x806A0B6C
    r3 = *(0x248 + r1); // lwz @ 0x806C635C
    /* li r0, 0 */ // 0x806C6360
    /* lis r4, 0 */ // 0x806C6364
    *(0x18 + r1) = r0; // stw @ 0x806C6368
    r5 = r3 + 0x68; // 0x806C636C
    r6 = r3 + 0x30; // 0x806C6370
    r12 = *(4 + r5); // lwz @ 0x806C6374
    r7 = r3 + 0x78; // 0x806C6378
    r11 = *(8 + r5); // lwz @ 0x806C637C
    r4 = r4 + 0; // 0x806C6380
    r10 = *(0xc + r5); // lwz @ 0x806C6384
    r4 = r4 + 0x9e; // 0x806C6388
    r5 = *(0x248 + r1); // lwz @ 0x806C638C
    r23 = *(0x30 + r3); // lwz @ 0x806C6390
    r18 = *(0x68 + r3); // lwz @ 0x806C6394
    r9 = *(0x78 + r5); // lwz @ 0x806C639C
    r22 = *(4 + r6); // lwz @ 0x806C63A0
    r21 = *(8 + r6); // lwz @ 0x806C63A4
    r19 = *(0xc + r6); // lwz @ 0x806C63A8
    r8 = *(4 + r7); // lwz @ 0x806C63AC
    r6 = *(8 + r7); // lwz @ 0x806C63B0
    r5 = *(0xc + r7); // lwz @ 0x806C63B4
    *(0x70 + r1) = r23; // stw @ 0x806C63B8
    *(0x74 + r1) = r22; // stw @ 0x806C63BC
    *(0x78 + r1) = r21; // stw @ 0x806C63C0
    *(0x7c + r1) = r19; // stw @ 0x806C63C4
    *(0x60 + r1) = r18; // stw @ 0x806C63C8
    *(0x64 + r1) = r12; // stw @ 0x806C63CC
    *(0x68 + r1) = r11; // stw @ 0x806C63D0
    *(0x6c + r1) = r10; // stw @ 0x806C63D4
    *(0x50 + r1) = r9; // stw @ 0x806C63D8
    *(0x54 + r1) = r8; // stw @ 0x806C63DC
    *(0x58 + r1) = r6; // stw @ 0x806C63E0
    *(0x5c + r1) = r5; // stw @ 0x806C63E4
    *(0x1c + r1) = r0; // stw @ 0x806C63E8
    FUN_80665D1C(); // bl 0x80665D1C
    r19 = r3;
    if (!=) goto 0x0x806c6404;
    /* li r19, 0 */ // 0x806C63FC
    /* b 0x806c6454 */ // 0x806C6400
    /* lis r18, 0 */ // 0x806C6404
    if (==) goto 0x0x806c6450;
    r12 = *(0 + r3); // lwz @ 0x806C6410
    r12 = *(0xc + r12); // lwz @ 0x806C6414
    /* mtctr r12 */ // 0x806C6418
    /* bctrl  */ // 0x806C641C
    /* b 0x806c6438 */ // 0x806C6420
    if (!=) goto 0x0x806c6434;
    /* li r0, 1 */ // 0x806C642C
    /* b 0x806c6444 */ // 0x806C6430
    r3 = *(0 + r3); // lwz @ 0x806C6434
    if (!=) goto 0x0x806c6424;
    /* li r0, 0 */ // 0x806C6440
    if (==) goto 0x0x806c6450;
    /* b 0x806c6454 */ // 0x806C644C
    /* li r19, 0 */ // 0x806C6450
    /* lis r4, 0 */ // 0x806C6454
    *(0x40 + r1) = r19; // stw @ 0x806C6458
    r4 = r4 + 0; // 0x806C645C
    r4 = r4 + 0xa9; // 0x806C6464
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    r19 = r3;
    if (!=) goto 0x0x806c6480;
    /* li r19, 0 */ // 0x806C6478
    /* b 0x806c64d0 */ // 0x806C647C
    /* lis r18, 0 */ // 0x806C6480
    if (==) goto 0x0x806c64cc;
    r12 = *(0 + r3); // lwz @ 0x806C648C
    r12 = *(0xc + r12); // lwz @ 0x806C6490
    /* mtctr r12 */ // 0x806C6494
    /* bctrl  */ // 0x806C6498
    /* b 0x806c64b4 */ // 0x806C649C
    if (!=) goto 0x0x806c64b0;
    /* li r0, 1 */ // 0x806C64A8
    /* b 0x806c64c0 */ // 0x806C64AC
    r3 = *(0 + r3); // lwz @ 0x806C64B0
    if (!=) goto 0x0x806c64a0;
    /* li r0, 0 */ // 0x806C64BC
    if (==) goto 0x0x806c64cc;
    /* b 0x806c64d0 */ // 0x806C64C8
    /* li r19, 0 */ // 0x806C64CC
    /* lis r4, 0 */ // 0x806C64D0
    *(0x44 + r1) = r19; // stw @ 0x806C64D4
    r4 = r4 + 0; // 0x806C64D8
    r4 = r4 + 0xb6; // 0x806C64E0
    FUN_80665D1C(r4, r4, r3, r4); // bl 0x80665D1C
    r19 = r3;
    if (!=) goto 0x0x806c64fc;
    /* li r19, 0 */ // 0x806C64F4
    /* b 0x806c654c */ // 0x806C64F8
    /* lis r18, 0 */ // 0x806C64FC
    if (==) goto 0x0x806c6548;
    r12 = *(0 + r3); // lwz @ 0x806C6508
    r12 = *(0xc + r12); // lwz @ 0x806C650C
    /* mtctr r12 */ // 0x806C6510
    /* bctrl  */ // 0x806C6514
    /* b 0x806c6530 */ // 0x806C6518
    if (!=) goto 0x0x806c652c;
    /* li r0, 1 */ // 0x806C6524
    /* b 0x806c653c */ // 0x806C6528
    r3 = *(0 + r3); // lwz @ 0x806C652C
    if (!=) goto 0x0x806c651c;
    /* li r0, 0 */ // 0x806C6538
    if (==) goto 0x0x806c6548;
    /* b 0x806c654c */ // 0x806C6544
    /* li r19, 0 */ // 0x806C6548
    /* lis r27, 0 */ // 0x806C654C
    /* lis r25, 0 */ // 0x806C6550
    *(0x48 + r1) = r19; // stw @ 0x806C6554
    r27 = r27 + 0; // 0x806C6558
    r25 = r25 + 0; // 0x806C655C
    /* li r19, 0 */ // 0x806C6568
    /* li r31, 0 */ // 0x806C656C
    /* li r30, 0 */ // 0x806C6570
    if (==) goto 0x0x806c6854;
    if (!=) goto 0x0x806c659c;
    /* addis r3, r20, 1 */ // 0x806C6584
    /* li r4, 0x34 */ // 0x806C6588
    r3 = r3 + -0x7008; // 0x806C658C
    FUN_805D84B0(r4, r3); // bl 0x805D84B0
    if (==) goto 0x0x806c6854;
    /* lwzx r4, r3, r30 */ // 0x806C65A4
    r3 = r15;
    /* lwzx r5, r5, r30 */ // 0x806C65AC
    /* li r6, 0 */ // 0x806C65B0
    FUN_806A093C(r5, r3, r6); // bl 0x806A093C
    r3 = r20 + r31; // 0x806C65B8
    r22 = r3 + 0x20; // 0x806C65C0
    /* li r18, 0 */ // 0x806C65C4
    /* li r29, 0 */ // 0x806C65C8
    /* lwzx r6, r23, r30 */ // 0x806C65CC
    r7 = r18;
    r5 = r27 + 0xc3; // 0x806C65D8
    /* li r4, 0xf */ // 0x806C65DC
    /* crclr cr1eq */ // 0x806C65E0
    FUN_805E3430(r7, r3, r5, r4); // bl 0x805E3430
    r3 = r15;
    /* li r5, 0 */ // 0x806C65F0
    FUN_806A11CC(r3, r4, r5); // bl 0x806A11CC
    if (>=) goto 0x0x806c6614;
    if (>=) goto 0x0x806c662c;
    if (>=) goto 0x0x806c6624;
    /* b 0x806c6680 */ // 0x806C6610
    if (>=) goto 0x0x806c6680;
}