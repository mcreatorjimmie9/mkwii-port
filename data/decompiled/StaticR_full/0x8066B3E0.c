/* Function at 0x8066B3E0, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8066B3E0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r6, 0 */ // 0x8066B3E8
    /* li r4, 1 */ // 0x8066B3EC
    r0 = r4 << r6; // slw
    *(0x1c + r1) = r31; // stw @ 0x8066B3F8
    *(0x18 + r1) = r30; // stw @ 0x8066B3FC
    *(0x14 + r1) = r29; // stw @ 0x8066B400
    r29 = r3;
    r7 = *(4 + r3); // lwz @ 0x8066B408
    r5 = *(0xd + r3); // lbz @ 0x8066B40C
    /* and. r0, r7, r0 */ // 0x8066B410
    if (==) goto 0x0x8066b41c;
    /* li r6, 1 */ // 0x8066B418
    /* li r0, 1 */ // 0x8066B41C
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B424
    if (==) goto 0x0x8066b430;
    r6 = r6 + 1; // 0x8066B42C
    /* li r0, 2 */ // 0x8066B430
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B438
    if (==) goto 0x0x8066b444;
    r6 = r6 + 1; // 0x8066B440
    /* li r0, 3 */ // 0x8066B444
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B44C
    if (==) goto 0x0x8066b458;
    r6 = r6 + 1; // 0x8066B454
    /* li r0, 4 */ // 0x8066B458
    r0 = r4 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B460
    if (==) goto 0x0x8066b46c;
    r6 = r6 + 1; // 0x8066B468
    if (<=) goto 0x0x8066b478;
    /* li r5, 1 */ // 0x8066B474
    /* li r0, 0 */ // 0x8066B478
    *(0xc + r3) = r0; // stb @ 0x8066B47C
    r31 = r3 + 0x5c; // 0x8066B480
    /* li r30, 0 */ // 0x8066B484
    *(0xd + r3) = r5; // stb @ 0x8066B488
    r12 = *(0 + r31); // lwz @ 0x8066B48C
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x8066B494
    /* mtctr r12 */ // 0x8066B498
    /* bctrl  */ // 0x8066B49C
    r30 = r30 + 1; // 0x8066B4A0
    r31 = r31 + 0x5c; // 0x8066B4A4
    if (<) goto 0x0x8066b48c;
    r4 = r29 + 0x10; // 0x8066B4B4
    FUN_805E3430(r3, r4); // bl 0x805E3430
}