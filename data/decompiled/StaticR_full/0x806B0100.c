/* Function at 0x806B0100, size=656 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806B0100(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806B010C
    r31 = r3;
    r0 = *(0x1c8 + r3); // lwz @ 0x806B0114
    if (==) goto 0x0x806b012c;
    if (==) goto 0x0x806b0398;
    /* b 0x806b03d4 */ // 0x806B0128
    /* lis r3, 0 */ // 0x806B012C
    r3 = *(0 + r3); // lwz @ 0x806B0130
    r4 = *(0 + r3); // lwz @ 0x806B0134
    r8 = *(0 + r4); // lwz @ 0x806B0138
    if (<) goto 0x0x806b014c;
    if (<=) goto 0x0x806b0160;
    /* cmpwi cr1, r8, 0x70 */
    if (<) goto 0x0x806b03d4;
    if (<=) goto 0x0x806b01e4;
    /* b 0x806b03d4 */ // 0x806B015C
    /* lis r4, 0 */ // 0x806B0160
    r4 = *(0 + r4); // lwz @ 0x806B0164
    r0 = *(0x291c + r4); // lwz @ 0x806B0168
    /* mulli r0, r0, 0x58 */ // 0x806B016C
    r4 = r4 + r0; // 0x806B0170
    r0 = *(0x40 + r4); // lwz @ 0x806B0174
    if (<=) goto 0x0x806b018c;
    r0 = *(0x8b + r4); // lbz @ 0x806B0180
    if (==) goto 0x0x806b03d4;
    r0 = r8 + -0x68; // 0x806B018C
    /* li r4, -1 */ // 0x806B0190
    if (>) goto 0x0x806b01d0;
    /* lis r5, 0 */ // 0x806B019C
    /* slwi r0, r0, 2 */ // 0x806B01A0
    r5 = r5 + 0; // 0x806B01A4
    /* lwzx r5, r5, r0 */ // 0x806B01A8
    /* mtctr r5 */ // 0x806B01AC
    /* bctr  */ // 0x806B01B0
    /* li r4, 0x58 */ // 0x806B01B4
    /* b 0x806b01d0 */ // 0x806B01B8
    /* li r4, 0x5e */ // 0x806B01BC
    /* b 0x806b01d0 */ // 0x806B01C0
    /* li r4, 0x59 */ // 0x806B01C4
    /* b 0x806b01d0 */ // 0x806B01C8
    /* li r4, 0x5f */ // 0x806B01CC
    /* li r5, 0 */ // 0x806B01D0
    FUN_80698C44(r4, r4, r5); // bl 0x80698C44
    /* li r0, 1 */ // 0x806B01D8
    *(0x1c8 + r31) = r0; // stw @ 0x806B01DC
    /* b 0x806b03d4 */ // 0x806B01E0
    /* lis r4, 0 */ // 0x806B01E4
    r4 = *(0 + r4); // lwz @ 0x806B01E8
    r0 = *(0x291c + r4); // lwz @ 0x806B01EC
    /* mulli r0, r0, 0x58 */ // 0x806B01F0
    r4 = r4 + r0; // 0x806B01F4
    r0 = *(0x40 + r4); // lwz @ 0x806B01F8
    if (<=) goto 0x0x806b021c;
    r0 = *(0x48 + r4); // lwz @ 0x806B0204
    /* clrlwi. r0, r0, 0x1f */ // 0x806B0208
    if (==) goto 0x0x806b021c;
    r0 = *(0x5a + r4); // lbz @ 0x806B0210
    if (==) goto 0x0x806b0268;
    if (<) goto 0x0x806b022c;
    if (<=) goto 0x0x806b0240;
    if (<) goto 0x0x806b025c;
    if (<=) goto 0x0x806b0250;
    /* b 0x806b025c */ // 0x806B023C
    /* li r4, 0x56 */ // 0x806B0240
    /* li r5, 0 */ // 0x806B0244
    FUN_80698C44(r4, r5); // bl 0x80698C44
    /* b 0x806b025c */ // 0x806B024C
    /* li r4, 0x5c */ // 0x806B0250
    /* li r5, 0 */ // 0x806B0254
    FUN_80698C44(r5, r4, r5); // bl 0x80698C44
    /* li r0, 1 */ // 0x806B025C
    *(0x1c8 + r31) = r0; // stw @ 0x806B0260
    /* b 0x806b03d4 */ // 0x806B0264
    r0 = *(0x8b + r4); // lbz @ 0x806B0268
    if (==) goto 0x0x806b03d4;
    /* li r4, -1 */ // 0x806B0278
    /* li r6, 0 */ // 0x806B027C
    if (>=) goto 0x0x806b0294;
    if (>=) goto 0x0x806b02c4;
    if (>=) goto 0x0x806b02a4;
    /* b 0x806b02e8 */ // 0x806B0290
    if (>=) goto 0x0x806b02e8;
    if (>=) goto 0x0x806b02c4;
    r6 = *(0x98 + r3); // lwz @ 0x806B02A4
    /* li r0, 3 */ // 0x806B02A8
    /* li r5, 0 */ // 0x806B02AC
    r7 = *(0x2d0 + r6); // lwz @ 0x806B02B0
    r6 = r7 >> 0x1f; // srawi
    /* subfc r0, r0, r7 */ // 0x806B02B8
    /* adde r6, r6, r5 */ // 0x806B02BC
    /* b 0x806b02e8 */ // 0x806B02C0
    r5 = *(0x98 + r3); // lwz @ 0x806B02C4
    /* li r6, 1 */ // 0x806B02C8
    r0 = *(0x68 + r5); // lwz @ 0x806B02CC
    if (>=) goto 0x0x806b02e8;
    r0 = *(0x6c + r5); // lwz @ 0x806B02D8
    if (>=) goto 0x0x806b02e8;
    /* li r6, 0 */ // 0x806B02E4
    if (==) goto 0x0x806b0324;
    if (<) goto 0x0x806b0300;
    if (<=) goto 0x0x806b0314;
    if (<) goto 0x0x806b0384;
    if (<=) goto 0x0x806b031c;
    /* b 0x806b0384 */ // 0x806B0310
    /* li r4, 0x56 */ // 0x806B0314
    /* b 0x806b0384 */ // 0x806B0318
    /* li r4, 0x5c */ // 0x806B031C
    /* b 0x806b0384 */ // 0x806B0320
    r0 = r8 + -0x70; // 0x806B0324
    if (>) goto 0x0x806b0384;
    /* lis r5, 0 */ // 0x806B0330
    /* slwi r0, r0, 2 */ // 0x806B0334
    r5 = r5 + 0; // 0x806B0338
    /* lwzx r5, r5, r0 */ // 0x806B033C
    /* mtctr r5 */ // 0x806B0340
    /* bctr  */ // 0x806B0344
    /* li r4, 0x60 */ // 0x806B0348
    /* b 0x806b0384 */ // 0x806B034C
    /* li r4, 0x61 */ // 0x806B0350
    /* b 0x806b0384 */ // 0x806B0354
    /* li r4, 0x62 */ // 0x806B0358
    /* b 0x806b0384 */ // 0x806B035C
    /* li r4, 0x63 */ // 0x806B0360
    /* b 0x806b0384 */ // 0x806B0364
    /* li r4, 0x64 */ // 0x806B0368
    /* b 0x806b0384 */ // 0x806B036C
    /* li r4, 0x65 */ // 0x806B0370
    /* b 0x806b0384 */ // 0x806B0374
    /* li r4, 0x66 */ // 0x806B0378
    /* b 0x806b0384 */ // 0x806B037C
    /* li r4, 0x67 */ // 0x806B0380
    /* li r5, 0 */ // 0x806B0384
    FUN_80698C44(r4, r4, r5); // bl 0x80698C44
    /* li r0, 1 */ // 0x806B038C
}