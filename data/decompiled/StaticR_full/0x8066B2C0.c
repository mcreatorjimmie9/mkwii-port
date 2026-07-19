/* Function at 0x8066B2C0, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_8066B2C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* li r6, 0 */ // 0x8066B2C8
    /* li r5, 1 */ // 0x8066B2CC
    *(0x34 + r1) = r0; // stw @ 0x8066B2D0
    r0 = r5 << r6; // slw
    /* stmw r27, 0x1c(r1) */ // 0x8066B2D8
    r27 = r3;
    r7 = *(4 + r3); // lwz @ 0x8066B2E0
    /* and. r0, r7, r0 */ // 0x8066B2E4
    if (==) goto 0x0x8066b2f0;
    /* li r6, 1 */ // 0x8066B2EC
    /* li r0, 1 */ // 0x8066B2F0
    r0 = r5 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B2F8
    if (==) goto 0x0x8066b304;
    r6 = r6 + 1; // 0x8066B300
    /* li r0, 2 */ // 0x8066B304
    r0 = r5 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B30C
    if (==) goto 0x0x8066b318;
    r6 = r6 + 1; // 0x8066B314
    /* li r0, 3 */ // 0x8066B318
    r0 = r5 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B320
    if (==) goto 0x0x8066b32c;
    r6 = r6 + 1; // 0x8066B328
    /* li r0, 4 */ // 0x8066B32C
    r0 = r5 << r0; // slw
    /* and. r0, r7, r0 */ // 0x8066B334
    if (==) goto 0x0x8066b340;
    r6 = r6 + 1; // 0x8066B33C
    if (<=) goto 0x0x8066b34c;
    /* li r4, 1 */ // 0x8066B348
    /* li r31, 0 */ // 0x8066B34C
    *(0xc + r3) = r31; // stb @ 0x8066B350
    r29 = r27;
    r30 = r3 + 0x5c; // 0x8066B358
    *(0xd + r3) = r4; // stb @ 0x8066B35C
    /* li r28, 0 */ // 0x8066B360
    r12 = *(0 + r30); // lwz @ 0x8066B364
    r3 = r30;
    r12 = *(0x14 + r12); // lwz @ 0x8066B36C
    /* mtctr r12 */ // 0x8066B370
    /* bctrl  */ // 0x8066B374
    r28 = r28 + 1; // 0x8066B378
    *(0xa4 + r29) = r31; // stb @ 0x8066B37C
    r30 = r30 + 0x5c; // 0x8066B384
    r29 = r29 + 0x5c; // 0x8066B388
    if (<) goto 0x0x8066b364;
    r4 = r27 + 0x10; // 0x8066B394
    FUN_805E3430(r3, r4); // bl 0x805E3430
}