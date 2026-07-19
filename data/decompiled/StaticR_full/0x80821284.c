/* Function at 0x80821284, size=344 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80821284(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80821298
    r30 = r3;
    r9 = *(0x14 + r3); // lwz @ 0x808212A0
    r7 = *(0x10 + r3); // lwz @ 0x808212A4
    /* slwi r10, r9, 2 */ // 0x808212A8
    r6 = r9;
    /* subf r0, r9, r7 */ // 0x808212B0
    r8 = r10;
    /* mtctr r0 */ // 0x808212B8
    if (>=) goto 0x0x808212e4;
    r5 = *(4 + r3); // lwz @ 0x808212C4
    /* lwzx r0, r5, r8 */ // 0x808212C8
    if (!=) goto 0x0x808212d8;
    /* b 0x808212e8 */ // 0x808212D4
    r8 = r8 + 4; // 0x808212D8
    r6 = r6 + 1; // 0x808212DC
    if (counter-- != 0) goto 0x0x808212c4;
    r6 = r7;
    if (>=) goto 0x0x80821310;
    r7 = *(4 + r3); // lwz @ 0x808212F0
    /* slwi r0, r6, 2 */ // 0x808212F4
    /* lwzx r5, r7, r10 */ // 0x808212F8
    /* stwx r5, r7, r0 */ // 0x808212FC
    r0 = *(0x14 + r3); // lwz @ 0x80821300
    r5 = *(4 + r3); // lwz @ 0x80821304
    /* slwi r0, r0, 2 */ // 0x80821308
    /* stwx r4, r5, r0 */ // 0x8082130C
    r5 = *(0x14 + r3); // lwz @ 0x80821310
    r0 = r5 + 1; // 0x80821314
    *(0x14 + r3) = r0; // stw @ 0x80821318
    r0 = *(0x7c + r4); // lwz @ 0x8082131C
    /* clrlwi. r0, r0, 0x1f */ // 0x80821320
    if (!=) goto 0x0x80821350;
    r3 = *(0x78 + r4); // lwz @ 0x80821328
    /* clrlwi. r0, r3, 0x1f */ // 0x8082132C
    if (==) goto 0x0x80821350;
    r4 = r3 rlwinm 0; // rlwinm
    r3 = r31;
    /* neg r0, r4 */ // 0x8082133C
    r0 = r0 | r4; // 0x80821340
    /* srwi r4, r0, 0x1f */ // 0x80821344
    FUN_80825D54(r3); // bl 0x80825D54
    *(0xc + r31) = r3; // sth @ 0x8082134C
    r0 = *(0x78 + r31); // lwz @ 0x80821350
    /* lis r4, 0 */ // 0x80821354
    /* lis r3, 0 */ // 0x80821358
    r0 = r0 | 2; // 0x8082135C
    *(0x78 + r31) = r0; // stw @ 0x80821360
    r4 = r4 + 0; // 0x80821364
    /* lfs f0, 0(r3) */ // 0x80821368
    r0 = *(0 + r30); // lwz @ 0x8082136C
    /* mulli r0, r0, 0x74 */ // 0x80821370
    r3 = r4 + r0; // 0x80821374
    /* lfs f1, 0x40(r3) */ // 0x80821378
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8082137C
    if (<=) goto 0x0x808213a8;
    r0 = *(0xb0 + r31); // lwz @ 0x80821384
    if (!=) goto 0x0x808213a8;
    r3 = r31;
    /* li r4, 0 */ // 0x80821394
    FUN_80829EC4(r3, r4); // bl 0x80829EC4
    r0 = *(0x7c + r31); // lwz @ 0x8082139C
    r0 = r0 | 0x800; // 0x808213A0
    *(0x7c + r31) = r0; // stw @ 0x808213A4
    /* li r0, 0 */ // 0x808213A8
    *(0x160 + r31) = r0; // stw @ 0x808213AC
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x808213B4
    r12 = *(0x1c + r12); // lwz @ 0x808213B8
    /* mtctr r12 */ // 0x808213BC
    /* bctrl  */ // 0x808213C0
    r0 = *(0x14 + r1); // lwz @ 0x808213C4
    r31 = *(0xc + r1); // lwz @ 0x808213C8
    r30 = *(8 + r1); // lwz @ 0x808213CC
    return;
}