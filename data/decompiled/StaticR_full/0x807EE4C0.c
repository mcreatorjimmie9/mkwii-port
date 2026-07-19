/* Function at 0x807EE4C0, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_807EE4C0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x807EE4D4
    *(0x14 + r1) = r29; // stw @ 0x807EE4D8
    r4 = *(0xc0 + r3); // lwz @ 0x807EE4DC
    /* addic. r0, r4, -1 */ // 0x807EE4E0
    *(0xc0 + r3) = r0; // stw @ 0x807EE4E4
    if (>) goto 0x0x807ee594;
    r5 = *(0xa0 + r3); // lwz @ 0x807EE4EC
    /* li r4, 0 */ // 0x807EE4F0
    r30 = *(0xc4 + r3); // lwz @ 0x807EE4F4
    r5 = *(0 + r5); // lwz @ 0x807EE4F8
    r0 = *(0x34 + r5); // lha @ 0x807EE500
    *(0xc0 + r3) = r0; // stw @ 0x807EE504
    if (<) goto 0x0x807ee51c;
    r0 = *(0xb4 + r3); // lwz @ 0x807EE50C
    if (>=) goto 0x0x807ee51c;
    /* li r4, 1 */ // 0x807EE518
    if (!=) goto 0x0x807ee534;
    r12 = *(0xb0 + r3); // lwzu @ 0x807EE524
    r12 = *(0x18 + r12); // lwz @ 0x807EE528
    /* mtctr r12 */ // 0x807EE52C
    /* bctrl  */ // 0x807EE530
    r4 = *(0xb8 + r31); // lwz @ 0x807EE534
    /* slwi r0, r30, 2 */ // 0x807EE538
    /* lis r3, 0 */ // 0x807EE53C
    /* li r30, 1 */ // 0x807EE540
    /* lwzx r29, r4, r0 */ // 0x807EE544
    /* li r4, 0 */ // 0x807EE548
    /* lfs f1, 0(r3) */ // 0x807EE54C
    *(0xc8 + r29) = r30; // stw @ 0x807EE550
    *(0xb0 + r29) = r30; // stw @ 0x807EE554
    r3 = *(0x20 + r29); // lwz @ 0x807EE558
    r12 = *(0 + r3); // lwz @ 0x807EE55C
    r12 = *(0x10 + r12); // lwz @ 0x807EE560
    /* mtctr r12 */ // 0x807EE564
    /* bctrl  */ // 0x807EE568
    r3 = *(0x20 + r29); // lwz @ 0x807EE56C
    *(0x17 + r3) = r30; // stb @ 0x807EE570
    r3 = *(0xc4 + r31); // lwz @ 0x807EE574
    r0 = *(0xbc + r31); // lwz @ 0x807EE578
    r3 = r3 + 1; // 0x807EE57C
    *(0xc4 + r31) = r3; // stw @ 0x807EE580
    if (!=) goto 0x0x807ee594;
    /* li r0, 0 */ // 0x807EE58C
    *(0xc4 + r31) = r0; // stw @ 0x807EE590
    r0 = *(0x24 + r1); // lwz @ 0x807EE594
    r31 = *(0x1c + r1); // lwz @ 0x807EE598
    r30 = *(0x18 + r1); // lwz @ 0x807EE59C
    r29 = *(0x14 + r1); // lwz @ 0x807EE5A0
    return;
}