/* Function at 0x805CF2C4, size=316 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805CF2C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    r30 = r6;
    *(0x94 + r1) = r29; // stw @ 0x805CF2E0
    r29 = r5;
    *(0x90 + r1) = r28; // stw @ 0x805CF2E8
    r28 = r4;
    r7 = *(4 + r3); // lwz @ 0x805CF2F0
    r3 = *(4 + r7); // lwz @ 0x805CF2F4
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805cf454;
    r3 = *(4 + r31); // lwz @ 0x805CF304
    r3 = *(4 + r3); // lwz @ 0x805CF308
    r12 = *(0 + r3); // lwz @ 0x805CF30C
    r12 = *(0xc + r12); // lwz @ 0x805CF310
    /* mtctr r12 */ // 0x805CF314
    /* bctrl  */ // 0x805CF318
    if (!=) goto 0x0x805cf358;
    r0 = *(0x5a4 + r31); // lwz @ 0x805CF324
    /* cmpwi cr6, r0, 2 */
    if (!=) goto 0x0x805cf358;
    r0 = *(0x5a0 + r31); // lwz @ 0x805CF330
    if (!=) goto 0x0x805cf358;
    r3 = *(4 + r31); // lwz @ 0x805CF33C
    r3 = *(4 + r3); // lwz @ 0x805CF340
    if (!=) goto 0x0x805cf454;
    r4 = *(0x5a8 + r31); // lwz @ 0x805CF348
    r5 = r29;
    FUN_805BA714(r5); // bl 0x805BA714
    /* b 0x805cf454 */ // 0x805CF354
    if (==) goto 0x0x805cf3a4;
    /* lis r4, 0 */ // 0x805CF360
    /* lis r5, 0 */ // 0x805CF364
    /* slwi r0, r28, 2 */ // 0x805CF368
    r4 = r4 + 0; // 0x805CF370
    r5 = r5 + 0; // 0x805CF374
    /* lwzx r6, r4, r0 */ // 0x805CF378
    /* li r4, 0x80 */ // 0x805CF37C
    /* crclr cr1eq */ // 0x805CF380
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    r3 = *(4 + r31); // lwz @ 0x805CF388
    r3 = *(4 + r3); // lwz @ 0x805CF390
    FUN_805BA490(r4); // bl 0x805BA490
    if (!=) goto 0x0x805cf3a4;
    /* li r30, 0 */ // 0x805CF3A0
    if (!=) goto 0x0x805cf3d8;
    /* lis r4, 0 */ // 0x805CF3AC
    /* lis r5, 0 */ // 0x805CF3B0
    /* slwi r0, r28, 2 */ // 0x805CF3B4
    r4 = r4 + 0; // 0x805CF3BC
    r5 = r5 + 0; // 0x805CF3C0
    /* lwzx r6, r4, r0 */ // 0x805CF3C4
    r5 = r5 + 0x11; // 0x805CF3C8
    /* li r4, 0x80 */ // 0x805CF3CC
    /* crclr cr1eq */ // 0x805CF3D0
    FUN_805E3430(r5, r5, r4); // bl 0x805E3430
    r6 = *(4 + r31); // lwz @ 0x805CF3D8
    r3 = r31 + 0x3ec; // 0x805CF3DC
    /* li r5, 0x40 */ // 0x805CF3E4
    r30 = *(4 + r6); // lwz @ 0x805CF3E8
    *(0x3e0 + r31) = r30; // stw @ 0x805CF3EC
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805CF3F4
    *(0x42c + r31) = r29; // stw @ 0x805CF3F8
    r3 = *(0x584 + r31); // lwz @ 0x805CF3FC
}