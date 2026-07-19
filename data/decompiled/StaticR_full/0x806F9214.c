/* Function at 0x806F9214, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806F9214(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806F9228
    r30 = r3;
    r0 = *(0x41f4 + r3); // lwz @ 0x806F9230
    if (!=) goto 0x0x806f9324;
    /* addis r5, r3, 1 */ // 0x806F923C
    r0 = *(0x58 + r3); // lwz @ 0x806F9240
    r5 = *(-0x7500 + r5); // lwz @ 0x806F9244
    if (>) goto 0x0x806f9278;
    r0 = *(0x55 + r3); // lbz @ 0x806F9250
    if (==) goto 0x0x806f9268;
    if (==) goto 0x0x806f9270;
    /* b 0x806f9278 */ // 0x806F9264
    /* li r0, 1 */ // 0x806F9268
    /* b 0x806f927c */ // 0x806F926C
    /* li r0, 2 */ // 0x806F9270
    /* b 0x806f927c */ // 0x806F9274
    /* li r0, 3 */ // 0x806F9278
    *(0xc + r4) = r0; // stw @ 0x806F927C
    r0 = *(0x58 + r3); // lwz @ 0x806F9284
    *(8 + r4) = r0; // stw @ 0x806F9288
    if (==) goto 0x0x806f92c8;
    /* lis r3, 0 */ // 0x806F9290
    r4 = r0;
    r3 = *(0 + r3); // lwz @ 0x806F9298
    /* addis r3, r3, 2 */ // 0x806F929C
    r3 = *(0x4ffc + r3); // lwz @ 0x806F92A0
    /* addis r3, r3, 2 */ // 0x806F92A4
    r3 = r3 + 0x3308; // 0x806F92A8
    FUN_805D76F0(r3); // bl 0x805D76F0
    /* extsh r3, r3 */ // 0x806F92B0
    r0 = r3 + 1; // 0x806F92B4
    /* cntlzw r0, r0 */ // 0x806F92B8
    /* srwi r0, r0, 5 */ // 0x806F92BC
    *(0x18 + r31) = r0; // stb @ 0x806F92C0
    /* b 0x806f92d0 */ // 0x806F92C4
    /* li r0, 1 */ // 0x806F92C8
    *(0x18 + r4) = r0; // stb @ 0x806F92CC
    r0 = *(0xc + r31); // lwz @ 0x806F92D0
    if (!=) goto 0x0x806f92f0;
    /* li r0, 0 */ // 0x806F92DC
    *(0x10 + r31) = r0; // stw @ 0x806F92E0
    /* li r3, 1 */ // 0x806F92E4
    *(0x14 + r31) = r0; // stw @ 0x806F92E8
    /* b 0x806f9328 */ // 0x806F92EC
    r4 = *(0x7588 + r30); // lwz @ 0x806F92F0
    r3 = r31;
    FUN_805E37AC(r3, r3); // bl 0x805E37AC
    r3 = r30 + 0x290; // 0x806F92FC
    *(0x10 + r31) = r3; // stw @ 0x806F9300
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* li r0, 0x3f */ // 0x806F9308
    *(0x14 + r31) = r3; // stw @ 0x806F930C
    r5 = r0 >> 0x1f; // srawi
    /* srwi r4, r3, 0x1f */ // 0x806F9314
    /* subfc r0, r3, r0 */ // 0x806F9318
    /* adde r3, r5, r4 */ // 0x806F931C
    /* b 0x806f9328 */ // 0x806F9320
}