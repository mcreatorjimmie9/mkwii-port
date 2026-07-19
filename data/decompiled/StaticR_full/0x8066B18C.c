/* Function at 0x8066B18C, size=240 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_8066B18C(int r3, int r4, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* saved r26 */
    /* li r8, 0 */ // 0x8066B194
    /* li r7, 1 */ // 0x8066B198
    *(0x34 + r1) = r0; // stw @ 0x8066B19C
    r0 = r7 << r8; // slw
    /* and. r0, r4, r0 */ // 0x8066B1A4
    /* stmw r26, 0x18(r1) */ // 0x8066B1A8
    r26 = r3;
    if (==) goto 0x0x8066b1b8;
    /* li r8, 1 */ // 0x8066B1B4
    /* li r0, 1 */ // 0x8066B1B8
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066B1C0
    if (==) goto 0x0x8066b1cc;
    r8 = r8 + 1; // 0x8066B1C8
    /* li r0, 2 */ // 0x8066B1CC
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066B1D4
    if (==) goto 0x0x8066b1e0;
    r8 = r8 + 1; // 0x8066B1DC
    /* li r0, 3 */ // 0x8066B1E0
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066B1E8
    if (==) goto 0x0x8066b1f4;
    r8 = r8 + 1; // 0x8066B1F0
    /* li r0, 4 */ // 0x8066B1F4
    r0 = r7 << r0; // slw
    /* and. r0, r4, r0 */ // 0x8066B1FC
    if (==) goto 0x0x8066b208;
    r8 = r8 + 1; // 0x8066B204
    if (<=) goto 0x0x8066b214;
    /* li r6, 1 */ // 0x8066B210
    /* li r30, 0 */ // 0x8066B214
    *(4 + r3) = r4; // stw @ 0x8066B218
    r28 = r26;
    r29 = r3 + 0x5c; // 0x8066B220
    *(8 + r3) = r5; // stw @ 0x8066B224
    /* li r27, 0 */ // 0x8066B228
    /* li r31, -1 */ // 0x8066B22C
    *(0xc + r3) = r30; // stb @ 0x8066B230
    *(0xd + r3) = r6; // stb @ 0x8066B234
    r12 = *(0 + r29); // lwz @ 0x8066B238
    r3 = r29;
    r12 = *(0x14 + r12); // lwz @ 0x8066B240
    /* mtctr r12 */ // 0x8066B244
    /* bctrl  */ // 0x8066B248
    *(0xa4 + r28) = r30; // stb @ 0x8066B24C
    r27 = r27 + 1; // 0x8066B250
    r29 = r29 + 0x5c; // 0x8066B258
    *(0x98 + r28) = r30; // stb @ 0x8066B25C
    *(0x54 + r28) = r30; // stw @ 0x8066B260
    *(0x58 + r28) = r31; // stw @ 0x8066B264
    r28 = r28 + 0x5c; // 0x8066B268
    if (<) goto 0x0x8066b238;
    r4 = r26 + 0x10; // 0x8066B274
    FUN_805E3430(r3, r4); // bl 0x805E3430
}