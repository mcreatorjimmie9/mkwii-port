/* Function at 0x80834270, size=396 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80834270(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8083427C
    r31 = r3;
    r0 = *(0x78 + r3); // lwz @ 0x80834284
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80834288
    if (!=) goto 0x0x80834298;
    r0 = *(0x6c + r3); // lbz @ 0x80834290
    /* b 0x8083429c */ // 0x80834294
    /* li r0, 0xc */ // 0x80834298
    if (<) goto 0x0x808342ac;
    /* li r0, 0xc */ // 0x808342A4
    /* b 0x80834300 */ // 0x808342A8
    /* lis r3, 0 */ // 0x808342AC
    r0 = r0 rlwinm 2; // rlwinm
    r5 = *(0 + r3); // lwz @ 0x808342B4
    r3 = *(0xc + r5); // lwz @ 0x808342B8
    /* lwzx r3, r3, r0 */ // 0x808342BC
    r3 = *(0x20 + r3); // lbz @ 0x808342C0
    r0 = r3 + -1; // 0x808342C4
    /* clrlwi r4, r0, 0x18 */ // 0x808342C8
    if (>=) goto 0x0x808342dc;
    /* lis r3, 0 */ // 0x808342D4
    r4 = *(0 + r3); // lbz @ 0x808342D8
    /* lis r3, 0 */ // 0x808342DC
    r0 = *(0 + r3); // lbz @ 0x808342E0
    if (<=) goto 0x0x808342fc;
    r0 = *(0x18 + r5); // lwz @ 0x808342EC
    r3 = r4 + r0; // 0x808342F0
    r0 = *(-1 + r3); // lbz @ 0x808342F4
    /* b 0x80834300 */ // 0x808342F8
    /* li r0, 0xc */ // 0x808342FC
    /* lis r3, 0 */ // 0x80834300
    /* lis r4, 0 */ // 0x80834304
    /* lfs f1, 0(r3) */ // 0x80834308
    r3 = r31;
    /* lfs f2, 0(r4) */ // 0x80834310
    /* clrlwi r4, r0, 0x18 */ // 0x80834314
    /* li r5, 0 */ // 0x80834318
    FUN_8083A6A8(r3, r5); // bl 0x8083A6A8
    r0 = *(0x74 + r31); // lwz @ 0x80834320
    /* clrlwi. r0, r0, 0x1f */ // 0x80834324
    if (!=) goto 0x0x808343e8;
    r0 = *(0x2bc + r31); // lwz @ 0x8083432C
    if (<=) goto 0x0x8083434c;
    r3 = r31;
    FUN_8083A96C(r3); // bl 0x8083A96C
    /* li r0, 1 */ // 0x80834340
    *(0x2b8 + r31) = r0; // stw @ 0x80834344
    /* b 0x808343e8 */ // 0x80834348
    if (<=) goto 0x0x8083439c;
    r3 = r31;
    /* li r4, 1 */ // 0x80834358
    /* li r5, 1 */ // 0x8083435C
    FUN_808391EC(r3, r4, r5); // bl 0x808391EC
    if (==) goto 0x0x808343e8;
    r0 = *(0x7c + r31); // lwz @ 0x8083436C
    /* li r3, 4 */ // 0x80834370
    *(0x2b8 + r31) = r3; // stw @ 0x80834374
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80834378
    if (==) goto 0x0x808343e8;
    r4 = *(0x280 + r31); // lwz @ 0x80834380
    /* li r3, 1 */ // 0x80834384
    r0 = *(0xc + r31); // lha @ 0x80834388
    r4 = *(0x18 + r4); // lbz @ 0x8083438C
    /* clrlwi r5, r0, 0x10 */ // 0x80834390
    FUN_808275E8(r3); // bl 0x808275E8
    /* b 0x808343e8 */ // 0x80834398
    if (<=) goto 0x0x808343e8;
    r3 = r31;
    /* li r4, 1 */ // 0x808343A8
    /* li r5, 0 */ // 0x808343AC
    FUN_808391EC(r3, r4, r5); // bl 0x808391EC
    if (==) goto 0x0x808343e8;
    r0 = *(0x7c + r31); // lwz @ 0x808343BC
    /* li r3, 4 */ // 0x808343C0
    *(0x2b8 + r31) = r3; // stw @ 0x808343C4
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x808343C8
    if (==) goto 0x0x808343e8;
    r4 = *(0x280 + r31); // lwz @ 0x808343D0
    /* li r3, 1 */ // 0x808343D4
    r0 = *(0xc + r31); // lha @ 0x808343D8
    r4 = *(0x18 + r4); // lbz @ 0x808343DC
    /* clrlwi r5, r0, 0x10 */ // 0x808343E0
    FUN_808275E8(r3); // bl 0x808275E8
    r0 = *(0x14 + r1); // lwz @ 0x808343E8
    r31 = *(0xc + r1); // lwz @ 0x808343EC
    return;
}