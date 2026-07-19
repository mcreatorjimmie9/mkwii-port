/* Function at 0x8083441C, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_8083441C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80834430
    /* li r30, 0 */ // 0x80834434
    *(0x14 + r1) = r29; // stw @ 0x80834438
    /* lis r29, 0 */ // 0x8083443C
    r29 = r29 + 0; // 0x80834440
    *(0x10 + r1) = r28; // stw @ 0x80834444
    r28 = *(0x280 + r3); // lwz @ 0x80834448
    r3 = r28;
    FUN_8061EB90(r3); // bl 0x8061EB90
    if (!=) goto 0x0x80834468;
    r0 = *(0x240 + r28); // lwz @ 0x8083445C
    if (<=) goto 0x0x8083446c;
    /* li r30, 1 */ // 0x80834468
    if (==) goto 0x0x8083447c;
    /* li r3, 1 */ // 0x80834474
    /* b 0x808344e4 */ // 0x80834478
    r3 = *(0x7c + r31); // lwz @ 0x8083447C
    /* clrlwi. r0, r3, 0x1f */ // 0x80834480
    if (==) goto 0x0x808344c8;
    r3 = *(0x280 + r31); // lwz @ 0x80834488
    r0 = *(0x1a + r3); // lbz @ 0x8083448C
    if (==) goto 0x0x808344b0;
    /* lfs f1, 0xb4(r29) */ // 0x80834498
    r3 = r31;
    /* lfs f2, 0xcc(r29) */ // 0x808344A0
    /* li r4, 0 */ // 0x808344A4
    FUN_80838594(r3, r4); // bl 0x80838594
    /* b 0x808344e4 */ // 0x808344AC
    /* lfs f1, 0xb4(r29) */ // 0x808344B0
    r3 = r31;
    /* lfs f2, 0xcc(r29) */ // 0x808344B8
    /* li r4, 1 */ // 0x808344BC
    FUN_80838594(r3, r4); // bl 0x80838594
    /* b 0x808344e4 */ // 0x808344C4
    r0 = r3 rlwinm 0; // rlwinm
    /* lfs f1, 0xb4(r29) */ // 0x808344CC
    /* cntlzw r0, r0 */ // 0x808344D0
    /* lfs f2, 0xcc(r29) */ // 0x808344D4
    r3 = r31;
    /* srwi r4, r0, 5 */ // 0x808344DC
    FUN_80838594(r3); // bl 0x80838594
    r0 = *(0x1cf + r31); // lbz @ 0x808344E4
    if (==) goto 0x0x808344f4;
    /* li r3, 1 */ // 0x808344F0
    if (==) goto 0x0x80834558;
    r0 = *(0x7c + r31); // lwz @ 0x808344FC
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80834500
    if (==) goto 0x0x80834528;
    r3 = *(0x280 + r31); // lwz @ 0x80834508
    r0 = *(0x1a + r3); // lbz @ 0x8083450C
    if (!=) goto 0x0x80834528;
    r0 = *(0xc + r31); // lha @ 0x80834518
    /* li r3, 1 */ // 0x8083451C
    /* clrlwi r4, r0, 0x10 */ // 0x80834520
    FUN_808276B4(r3); // bl 0x808276B4
    r3 = r31;
    FUN_80839500(r3, r3); // bl 0x80839500
    /* lfs f0, 0(r29) */ // 0x80834530
    /* li r4, 6 */ // 0x80834534
    /* li r3, 0xff */ // 0x80834538
    /* li r0, 1 */ // 0x8083453C
    *(0x2b8 + r31) = r4; // stw @ 0x80834540
    *(0x268 + r31) = r3; // stb @ 0x80834544
    *(0x269 + r31) = r0; // stb @ 0x80834548
    /* stfs f0, 0x26c(r31) */ // 0x8083454C
    /* stfs f0, 0x270(r31) */ // 0x80834550
    /* stfs f0, 0x274(r31) */ // 0x80834554
    r0 = *(0x24 + r1); // lwz @ 0x80834558
    r31 = *(0x1c + r1); // lwz @ 0x8083455C
    r30 = *(0x18 + r1); // lwz @ 0x80834560
    r29 = *(0x14 + r1); // lwz @ 0x80834564
    r28 = *(0x10 + r1); // lwz @ 0x80834568
    return;
}