/* Function at 0x806742C0, size=336 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806742C0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806742D4
    r0 = *(0xbe8 + r3); // lwz @ 0x806742D8
    if (==) goto 0x0x806742f8;
    if (==) goto 0x0x80674350;
    if (==) goto 0x0x806743f8;
    /* b 0x8067442c */ // 0x806742F4
    /* lis r3, 0 */ // 0x806742F8
    r3 = *(0 + r3); // lwz @ 0x806742FC
    r3 = r3 + 0x34; // 0x80674300
    FUN_8067FCB8(r3, r3); // bl 0x8067FCB8
    if (==) goto 0x0x80674318;
    /* li r0, 0 */ // 0x80674310
    *(0xbe8 + r31) = r0; // stw @ 0x80674314
    /* lis r3, 0 */ // 0x80674318
    r3 = *(0 + r3); // lwz @ 0x8067431C
    FUN_805B43B4(r3); // bl 0x805B43B4
    if (==) goto 0x0x80674338;
    if (==) goto 0x0x80674344;
    /* b 0x8067442c */ // 0x80674334
    /* li r0, 2 */ // 0x80674338
    *(0xbe8 + r31) = r0; // stw @ 0x8067433C
    /* b 0x8067442c */ // 0x80674340
    /* li r0, 2 */ // 0x80674344
    *(0xbe8 + r31) = r0; // stw @ 0x80674348
    /* b 0x8067442c */ // 0x8067434C
    /* lis r30, 0 */ // 0x80674350
    r3 = *(0 + r30); // lwz @ 0x80674354
    r3 = r3 + 0x34; // 0x80674358
    FUN_8067FCB8(r3); // bl 0x8067FCB8
    if (==) goto 0x0x806743c0;
    /* li r0, 0 */ // 0x80674368
    *(0xbe8 + r31) = r0; // stw @ 0x8067436C
    r3 = r31 + 0x690; // 0x80674370
    /* li r4, 2 */ // 0x80674374
    FUN_8069F4B0(r3, r4); // bl 0x8069F4B0
    r4 = *(0 + r3); // lwz @ 0x8067437C
    r30 = r3;
    r3 = *(0x10 + r4); // lwz @ 0x80674384
    FUN_805E3430(r4); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x8067438C
    /* lis r0, 0x4330 */ // 0x80674390
    /* lis r3, 0 */ // 0x80674394
    *(0xc + r1) = r4; // stw @ 0x80674398
    /* lfd f2, 0(r3) */ // 0x8067439C
    *(8 + r1) = r0; // stw @ 0x806743A0
    r3 = *(0 + r30); // lwz @ 0x806743A4
    /* lfd f1, 8(r1) */ // 0x806743A8
    /* lfs f0, 0x18(r3) */ // 0x806743AC
    /* fsubs f1, f1, f2 */ // 0x806743B0
    /* fdivs f0, f1, f0 */ // 0x806743B4
    /* stfs f0, 0xbec(r31) */ // 0x806743B8
    /* b 0x8067442c */ // 0x806743BC
    r3 = *(0 + r30); // lwz @ 0x806743C0
    r3 = *(0 + r3); // lwz @ 0x806743C4
    r3 = *(0x380 + r3); // lwz @ 0x806743C8
    r0 = *(8 + r3); // lwz @ 0x806743CC
    if (<) goto 0x0x8067442c;
    if (>) goto 0x0x8067442c;
    /* lis r3, 0 */ // 0x806743E0
    /* li r0, 3 */ // 0x806743E4
    /* lfs f0, 0(r3) */ // 0x806743E8
    *(0xbe8 + r31) = r0; // stw @ 0x806743EC
    /* stfs f0, 0xbec(r31) */ // 0x806743F0
    /* b 0x8067442c */ // 0x806743F4
    /* lis r3, 0 */ // 0x806743F8
    r3 = *(0 + r3); // lwz @ 0x806743FC
    FUN_805B4410(r3); // bl 0x805B4410
    if (==) goto 0x0x80674418;
}