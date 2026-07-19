/* Function at 0x80680470, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_80680470(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8068047C
    /* lis r30, 0 */ // 0x80680480
    /* li r31, 0 */ // 0x80680484
    /* li r28, 0 */ // 0x80680488
    /* li r27, 0 */ // 0x8068048C
    /* li r29, 0 */ // 0x80680490
    r3 = *(0 + r30); // lwz @ 0x80680494
    r3 = r3 + 0x34; // 0x80680498
    FUN_8067FA20(r3); // bl 0x8067FA20
    if (==) goto 0x0x806804c0;
    r3 = *(0 + r30); // lwz @ 0x806804A8
    r3 = *(0 + r3); // lwz @ 0x806804AC
    FUN_8068608C(); // bl 0x8068608C
    if (==) goto 0x0x806804c0;
    /* li r29, 1 */ // 0x806804BC
    if (==) goto 0x0x80680504;
    /* lis r3, 0 */ // 0x806804C8
    r3 = *(0 + r3); // lwz @ 0x806804CC
    r3 = *(0 + r3); // lwz @ 0x806804D0
    FUN_8068608C(r3); // bl 0x8068608C
    r0 = *(8 + r3); // lwz @ 0x806804D8
    /* li r4, 0 */ // 0x806804DC
    if (!=) goto 0x0x806804f8;
    r0 = *(0xc + r3); // lbz @ 0x806804E8
    if (!=) goto 0x0x806804f8;
    /* li r4, 1 */ // 0x806804F4
    if (==) goto 0x0x80680504;
    /* li r27, 1 */ // 0x80680500
    if (==) goto 0x0x80680524;
    /* lis r3, 0 */ // 0x8068050C
    r3 = *(0 + r3); // lwz @ 0x80680510
    r0 = *(0x30 + r3); // lwz @ 0x80680514
    if (!=) goto 0x0x80680524;
    /* li r28, 1 */ // 0x80680520
    if (==) goto 0x0x80680564;
    /* lis r3, 0 */ // 0x8068052C
    r3 = *(0 + r3); // lwz @ 0x80680530
    r3 = *(0x54 + r3); // lwz @ 0x80680534
    r3 = *(0x24 + r3); // lwz @ 0x80680538
    r12 = *(0 + r3); // lwz @ 0x8068053C
    r12 = *(0xc + r12); // lwz @ 0x80680540
    /* mtctr r12 */ // 0x80680544
    /* bctrl  */ // 0x80680548
    /* subfic r4, r3, 1 */ // 0x8068054C
    r0 = r3 + -1; // 0x80680550
    r0 = r4 | r0; // 0x80680554
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80680558
    if (!=) goto 0x0x80680564;
    /* li r31, 1 */ // 0x80680560
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x8068056C
    return;
}