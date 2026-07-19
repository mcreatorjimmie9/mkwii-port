/* Function at 0x8070D524, size=228 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_8070D524(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x8070D530
    r27 = r3;
    r0 = *(4 + r3); // lwz @ 0x8070D538
    if (==) goto 0x0x8070d658;
    /* lis r5, 0 */ // 0x8070D544
    /* lis r4, 0x2020 */ // 0x8070D548
    r5 = *(0 + r5); // lwz @ 0x8070D54C
    r26 = r4 + 0x2020; // 0x8070D550
    r31 = r27;
    /* li r28, 0 */ // 0x8070D558
    r4 = *(0x10 + r5); // lwz @ 0x8070D55C
    r29 = *(0x68 + r4); // lwz @ 0x8070D560
    /* mulli r0, r29, 0xc8 */ // 0x8070D564
    r30 = r3 + r0; // 0x8070D568
    /* b 0x8070d64c */ // 0x8070D56C
    r3 = *(0x78 + r31); // lwz @ 0x8070D570
    r12 = *(0 + r3); // lwz @ 0x8070D574
    r12 = *(0x30 + r12); // lwz @ 0x8070D578
    /* mtctr r12 */ // 0x8070D57C
    /* bctrl  */ // 0x8070D580
    if (==) goto 0x0x8070d658;
    r0 = *(0x20 + r3); // lwz @ 0x8070D58C
    /* and. r0, r0, r26 */ // 0x8070D590
    if (!=) goto 0x0x8070d658;
    r3 = *(0x78 + r31); // lwz @ 0x8070D598
    r12 = *(0 + r3); // lwz @ 0x8070D59C
    r12 = *(0x30 + r12); // lwz @ 0x8070D5A0
    /* mtctr r12 */ // 0x8070D5A4
    /* bctrl  */ // 0x8070D5A8
    r3 = r29 + r3; // 0x8070D5AC
    r4 = r29 + -1; // 0x8070D5B0
    r0 = *(0x20 + r3); // lbz @ 0x8070D5B4
    /* clrlwi r25, r0, 0x1f */ // 0x8070D5BC
    if (!=) goto 0x0x8070d5cc;
    r3 = *(4 + r27); // lwz @ 0x8070D5C4
    r4 = r3 + -1; // 0x8070D5C8
    /* mulli r4, r4, 0xc8 */ // 0x8070D5CC
    r0 = r28 + r27; // 0x8070D5D0
    r3 = *(0x398 + r31); // lwz @ 0x8070D5D4
    r4 = r4 + r0; // 0x8070D5D8
    r3 = r3 + 0x74; // 0x8070D5DC
    r24 = *(0x6b8 + r4); // lbz @ 0x8070D5E0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8070d5f8;
    /* li r3, 0 */ // 0x8070D5F0
    /* b 0x8070d5fc */ // 0x8070D5F4
    r3 = *(0xc + r3); // lwz @ 0x8070D5F8
    /* li r0, 0 */ // 0x8070D600
    if (==) goto 0x0x8070d610;
}