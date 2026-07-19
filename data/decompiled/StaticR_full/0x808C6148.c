/* Function at 0x808C6148, size=1228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_808C6148(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* lis r3, 0 */ // 0x808C6150
    *(0x34 + r1) = r0; // stw @ 0x808C6158
    /* li r9, 0xc */ // 0x808C615C
    /* stmw r27, 0x1c(r1) */ // 0x808C6160
    r29 = r4;
    r3 = *(0 + r3); // lwz @ 0x808C6168
    r3 = *(0x98 + r3); // lwz @ 0x808C616C
    *(0x124 + r3) = r4; // stw @ 0x808C6170
    if (!=) goto 0x0x808c617c;
    /* li r9, 0xc */ // 0x808C6178
    if (!=) goto 0x0x808c6188;
    /* li r9, 0xc */ // 0x808C6184
    /* li r0, 4 */ // 0x808C6188
    /* li r10, 0 */ // 0x808C618C
    /* li r6, 5 */ // 0x808C6190
    /* lis r5, 0 */ // 0x808C6194
    /* li r7, 1 */ // 0x808C6198
    /* li r8, 0 */ // 0x808C619C
    /* mtctr r0 */ // 0x808C61A0
    /* clrlwi r0, r10, 0x18 */ // 0x808C61A4
    if (>=) goto 0x0x808c61c4;
    /* mulli r0, r0, 0xf0 */ // 0x808C61B0
    r3 = *(0 + r5); // lwz @ 0x808C61B4
    r3 = r3 + r0; // 0x808C61B8
    *(0xc28 + r3) = r8; // stw @ 0x808C61BC
    /* b 0x808c61f0 */ // 0x808C61C0
    if (>=) goto 0x0x808c61e0;
    /* mulli r0, r0, 0xf0 */ // 0x808C61CC
    r3 = *(0 + r5); // lwz @ 0x808C61D0
    r3 = r3 + r0; // 0x808C61D4
    *(0xc28 + r3) = r7; // stw @ 0x808C61D8
    /* b 0x808c61f0 */ // 0x808C61DC
    /* mulli r0, r0, 0xf0 */ // 0x808C61E0
    r3 = *(0 + r5); // lwz @ 0x808C61E4
    r3 = r3 + r0; // 0x808C61E8
    *(0xc28 + r3) = r6; // stw @ 0x808C61EC
    /* clrlwi r0, r10, 0x18 */ // 0x808C61F4
    if (>=) goto 0x0x808c6214;
    /* mulli r0, r0, 0xf0 */ // 0x808C6200
    r3 = *(0 + r5); // lwz @ 0x808C6204
    r3 = r3 + r0; // 0x808C6208
    *(0xc28 + r3) = r8; // stw @ 0x808C620C
    /* b 0x808c6240 */ // 0x808C6210
    if (>=) goto 0x0x808c6230;
    /* mulli r0, r0, 0xf0 */ // 0x808C621C
    r3 = *(0 + r5); // lwz @ 0x808C6220
    r3 = r3 + r0; // 0x808C6224
    *(0xc28 + r3) = r7; // stw @ 0x808C6228
    /* b 0x808c6240 */ // 0x808C622C
    /* mulli r0, r0, 0xf0 */ // 0x808C6230
    r3 = *(0 + r5); // lwz @ 0x808C6234
    r3 = r3 + r0; // 0x808C6238
    *(0xc28 + r3) = r6; // stw @ 0x808C623C
    /* clrlwi r0, r10, 0x18 */ // 0x808C6244
    if (>=) goto 0x0x808c6264;
    /* mulli r0, r0, 0xf0 */ // 0x808C6250
    r3 = *(0 + r5); // lwz @ 0x808C6254
    r3 = r3 + r0; // 0x808C6258
    *(0xc28 + r3) = r8; // stw @ 0x808C625C
    /* b 0x808c6290 */ // 0x808C6260
    if (>=) goto 0x0x808c6280;
    /* mulli r0, r0, 0xf0 */ // 0x808C626C
    r3 = *(0 + r5); // lwz @ 0x808C6270
    r3 = r3 + r0; // 0x808C6274
    *(0xc28 + r3) = r7; // stw @ 0x808C6278
    /* b 0x808c6290 */ // 0x808C627C
    /* mulli r0, r0, 0xf0 */ // 0x808C6280
    r3 = *(0 + r5); // lwz @ 0x808C6284
    r3 = r3 + r0; // 0x808C6288
    *(0xc28 + r3) = r6; // stw @ 0x808C628C
    if (counter-- != 0) goto 0x0x808c61a4;
    r28 = r29;
    /* lis r27, 0 */ // 0x808C629C
    /* b 0x808c62b8 */ // 0x808C62A0
    r3 = *(0 + r27); // lwz @ 0x808C62A4
    r4 = r28;
    r3 = r3 + 0x34; // 0x808C62AC
    FUN_8067F828(r4, r3); // bl 0x8067F828
    r28 = r28 + 1; // 0x808C62B4
    if (<=) goto 0x0x808c62a4;
    /* lis r6, 0 */ // 0x808C62C0
    r5 = *(0 + r6); // lwzu @ 0x808C62C4
    *(8 + r1) = r5; // stw @ 0x808C62C8
    /* li r30, 0 */ // 0x808C62CC
    r4 = *(4 + r6); // lwz @ 0x808C62D0
    /* li r31, 0 */ // 0x808C62D4
    r3 = *(8 + r6); // lwz @ 0x808C62D8
    /* li r28, -1 */ // 0x808C62DC
    r0 = *(0xc + r6); // lwz @ 0x808C62E0
    /* lis r27, 0 */ // 0x808C62E4
    *(0xc + r1) = r4; // stw @ 0x808C62E8
    *(0x10 + r1) = r3; // stw @ 0x808C62EC
    *(0x14 + r1) = r0; // stw @ 0x808C62F0
    /* b 0x808c6390 */ // 0x808C62F4
    r3 = *(0 + r27); // lwz @ 0x808C62F8
    r0 = *(0x98 + r3); // lwz @ 0x808C62FC
    r3 = r0 + r31; // 0x808C6300
    r3 = *(0x12c + r3); // lwz @ 0x808C6304
    if (==) goto 0x0x808c632c;
    FUN_8089E314(); // bl 0x8089E314
    if (!=) goto 0x0x808c632c;
    r3 = *(0 + r27); // lwz @ 0x808C631C
    r0 = *(0x98 + r3); // lwz @ 0x808C6320
    r3 = r0 + r31; // 0x808C6324
    *(0x12c + r3) = r28; // stw @ 0x808C6328
    r4 = *(0 + r27); // lwz @ 0x808C632C
    r3 = *(8 + r1); // lwz @ 0x808C6330
    r0 = *(0x98 + r4); // lwz @ 0x808C6334
    r4 = r0 + r31; // 0x808C6338
    r0 = *(0x12c + r4); // lwz @ 0x808C633C
    if (!=) goto 0x0x808c634c;
    *(8 + r1) = r28; // stw @ 0x808C6348
    r3 = *(0xc + r1); // lwz @ 0x808C634C
    r0 = *(0x12c + r4); // lwz @ 0x808C6350
    if (!=) goto 0x0x808c6360;
    *(0xc + r1) = r28; // stw @ 0x808C635C
    r3 = *(0x10 + r1); // lwz @ 0x808C6360
    r0 = *(0x12c + r4); // lwz @ 0x808C6364
    if (!=) goto 0x0x808c6374;
    *(0x10 + r1) = r28; // stw @ 0x808C6370
    r3 = *(0x14 + r1); // lwz @ 0x808C6374
    r0 = *(0x12c + r4); // lwz @ 0x808C6378
    if (!=) goto 0x0x808c6388;
    *(0x14 + r1) = r28; // stw @ 0x808C6384
    r31 = r31 + 4; // 0x808C6388
    r30 = r30 + 1; // 0x808C638C
    if (<) goto 0x0x808c62f8;
    /* li r10, 0 */ // 0x808C639C
    /* li r7, 0 */ // 0x808C63A0
    /* li r3, -1 */ // 0x808C63A4
    /* lis r6, 0 */ // 0x808C63A8
    /* li r0, 4 */ // 0x808C63AC
    /* b 0x808c640c */ // 0x808C63B0
    r4 = *(0 + r6); // lwz @ 0x808C63B4
    r4 = *(0x98 + r4); // lwz @ 0x808C63B8
    r9 = r4 + r7; // 0x808C63BC
    r4 = *(0x12c + r9); // lwz @ 0x808C63C0
    if (!=) goto 0x0x808c6404;
    /* li r11, 0 */ // 0x808C63D0
    /* mtctr r0 */ // 0x808C63D4
    r4 = *(0 + r5); // lwz @ 0x808C63D8
    if (==) goto 0x0x808c63f8;
    /* slwi r5, r11, 2 */ // 0x808C63E4
    /* lwzx r4, r8, r5 */ // 0x808C63E8
    *(0x12c + r9) = r4; // stw @ 0x808C63EC
    /* stwx r3, r8, r5 */ // 0x808C63F0
    /* b 0x808c6404 */ // 0x808C63F4
    r5 = r5 + 4; // 0x808C63F8
    if (counter-- != 0) goto 0x0x808c63d8;
    r7 = r7 + 4; // 0x808C6404
    if (<) goto 0x0x808c63b4;
    if (>=) goto 0x0x808c6600;
    /* subfic r5, r29, 4 */ // 0x808C641C
    if (<=) goto 0x0x808c65bc;
    /* li r3, 0 */ // 0x808C642C
    /* li r4, 0 */ // 0x808C6430
    /* li r0, 0 */ // 0x808C6434
    if (>=) goto 0x0x808c6440;
    /* li r0, 1 */ // 0x808C643C
    if (==) goto 0x0x808c6458;
    /* addis r0, r29, -0x8000 */ // 0x808C6448
    if (==) goto 0x0x808c6458;
    /* li r4, 1 */ // 0x808C6454
    if (==) goto 0x0x808c6488;
    /* neg r0, r29 */ // 0x808C6460
    /* li r4, 1 */ // 0x808C6464
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x808C6468
    if (!=) goto 0x0x808c647c;
    /* rlwinm. r0, r5, 0, 0, 0 */ // 0x808C6470
    if (==) goto 0x0x808c647c;
    /* li r4, 0 */ // 0x808C6478
    if (==) goto 0x0x808c6488;
    /* li r3, 1 */ // 0x808C6484
    if (==) goto 0x0x808c65bc;
    /* subfic r5, r29, 3 */ // 0x808C6490
    /* slwi r4, r29, 2 */ // 0x808C6494
    /* srwi r5, r5, 3 */ // 0x808C6498
    /* lis r3, 0 */ // 0x808C649C
    /* li r0, -1 */ // 0x808C64A0
    /* mtctr r5 */ // 0x808C64A4
    if (>=) goto 0x0x808c65bc;
    r5 = *(0 + r3); // lwz @ 0x808C64B0
    r29 = r29 + 8; // 0x808C64B4
    r5 = *(0x98 + r5); // lwz @ 0x808C64B8
    r5 = r5 + r4; // 0x808C64BC
    *(0x12c + r5) = r0; // stw @ 0x808C64C0
    r5 = *(0 + r3); // lwz @ 0x808C64C4
    r5 = *(0x98 + r5); // lwz @ 0x808C64C8
    r5 = r5 + r4; // 0x808C64CC
    *(0x13c + r5) = r0; // stw @ 0x808C64D0
    r5 = *(0 + r3); // lwz @ 0x808C64D4
    r5 = *(0x98 + r5); // lwz @ 0x808C64D8
    r5 = r5 + r4; // 0x808C64DC
    *(0x130 + r5) = r0; // stw @ 0x808C64E0
    r5 = *(0 + r3); // lwz @ 0x808C64E4
    r5 = *(0x98 + r5); // lwz @ 0x808C64E8
    r5 = r5 + r4; // 0x808C64EC
    *(0x140 + r5) = r0; // stw @ 0x808C64F0
    r5 = *(0 + r3); // lwz @ 0x808C64F4
    r5 = *(0x98 + r5); // lwz @ 0x808C64F8
    r5 = r5 + r4; // 0x808C64FC
    *(0x134 + r5) = r0; // stw @ 0x808C6500
    r5 = *(0 + r3); // lwz @ 0x808C6504
    r5 = *(0x98 + r5); // lwz @ 0x808C6508
    r5 = r5 + r4; // 0x808C650C
    *(0x144 + r5) = r0; // stw @ 0x808C6510
    r5 = *(0 + r3); // lwz @ 0x808C6514
    r5 = *(0x98 + r5); // lwz @ 0x808C6518
    r5 = r5 + r4; // 0x808C651C
    *(0x138 + r5) = r0; // stw @ 0x808C6520
    r5 = *(0 + r3); // lwz @ 0x808C6524
    r5 = *(0x98 + r5); // lwz @ 0x808C6528
    r5 = r5 + r4; // 0x808C652C
    *(0x148 + r5) = r0; // stw @ 0x808C6530
    r5 = *(0 + r3); // lwz @ 0x808C6534
    r5 = *(0x98 + r5); // lwz @ 0x808C6538
    r5 = r5 + r4; // 0x808C653C
    *(0x13c + r5) = r0; // stw @ 0x808C6540
    r5 = *(0 + r3); // lwz @ 0x808C6544
    r5 = *(0x98 + r5); // lwz @ 0x808C6548
    r5 = r5 + r4; // 0x808C654C
    *(0x14c + r5) = r0; // stw @ 0x808C6550
    r5 = *(0 + r3); // lwz @ 0x808C6554
    r5 = *(0x98 + r5); // lwz @ 0x808C6558
    r5 = r5 + r4; // 0x808C655C
    *(0x140 + r5) = r0; // stw @ 0x808C6560
    r5 = *(0 + r3); // lwz @ 0x808C6564
    r5 = *(0x98 + r5); // lwz @ 0x808C6568
    r5 = r5 + r4; // 0x808C656C
    *(0x150 + r5) = r0; // stw @ 0x808C6570
    r5 = *(0 + r3); // lwz @ 0x808C6574
    r5 = *(0x98 + r5); // lwz @ 0x808C6578
    r5 = r5 + r4; // 0x808C657C
    *(0x144 + r5) = r0; // stw @ 0x808C6580
    r5 = *(0 + r3); // lwz @ 0x808C6584
    r5 = *(0x98 + r5); // lwz @ 0x808C6588
    r5 = r5 + r4; // 0x808C658C
    *(0x154 + r5) = r0; // stw @ 0x808C6590
    r5 = *(0 + r3); // lwz @ 0x808C6594
    r5 = *(0x98 + r5); // lwz @ 0x808C6598
    r5 = r5 + r4; // 0x808C659C
    *(0x148 + r5) = r0; // stw @ 0x808C65A0
    r5 = *(0 + r3); // lwz @ 0x808C65A4
    r5 = *(0x98 + r5); // lwz @ 0x808C65A8
    r5 = r5 + r4; // 0x808C65AC
    r4 = r4 + 0x20; // 0x808C65B0
    *(0x158 + r5) = r0; // stw @ 0x808C65B4
    if (counter-- != 0) goto 0x0x808c64b0;
    /* subfic r0, r29, 4 */ // 0x808C65BC
    /* slwi r6, r29, 2 */ // 0x808C65C0
    /* li r5, -1 */ // 0x808C65C4
    /* lis r4, 0 */ // 0x808C65C8
    /* mtctr r0 */ // 0x808C65CC
    if (>=) goto 0x0x808c6600;
    r3 = *(0 + r4); // lwz @ 0x808C65D8
    r0 = *(0x98 + r3); // lwz @ 0x808C65DC
    r3 = r0 + r6; // 0x808C65E0
    *(0x12c + r3) = r5; // stw @ 0x808C65E4
    r3 = *(0 + r4); // lwz @ 0x808C65E8
    r0 = *(0x98 + r3); // lwz @ 0x808C65EC
    r3 = r0 + r6; // 0x808C65F0
    r6 = r6 + 4; // 0x808C65F4
    *(0x13c + r3) = r5; // stw @ 0x808C65F8
    if (counter-- != 0) goto 0x0x808c65d8;
    r0 = *(0x34 + r1); // lwz @ 0x808C6604
    return;
}