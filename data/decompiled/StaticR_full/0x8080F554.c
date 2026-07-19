/* Function at 0x8080F554, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8080F554(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8080F564
    *(8 + r1) = r30; // stw @ 0x8080F568
    r30 = r3;
    r12 = *(0 + r3); // lwz @ 0x8080F570
    r12 = *(0x30 + r12); // lwz @ 0x8080F574
    /* mtctr r12 */ // 0x8080F578
    /* bctrl  */ // 0x8080F57C
    /* lis r4, 0x101 */ // 0x8080F580
    r0 = *(0x20 + r3); // lwz @ 0x8080F584
    r3 = r4 + 0x101; // 0x8080F588
    /* andc. r0, r3, r0 */ // 0x8080F58C
    if (!=) goto 0x0x8080f5ac;
    /* lis r3, 0 */ // 0x8080F594
    r3 = *(0 + r3); // lwz @ 0x8080F598
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x8080f5ac;
    /* li r31, 1 */ // 0x8080F5A8
    if (!=) goto 0x0x8080f60c;
    r3 = *(0xb8 + r30); // lwz @ 0x8080F5B4
    r12 = *(0 + r3); // lwz @ 0x8080F5B8
    r12 = *(0xc + r12); // lwz @ 0x8080F5BC
    /* mtctr r12 */ // 0x8080F5C0
    /* bctrl  */ // 0x8080F5C4
    r3 = *(0xb8 + r30); // lwz @ 0x8080F5C8
    r4 = r30 + 0x30; // 0x8080F5CC
    r12 = *(0 + r3); // lwz @ 0x8080F5D0
    r12 = *(0x74 + r12); // lwz @ 0x8080F5D4
    /* mtctr r12 */ // 0x8080F5D8
    /* bctrl  */ // 0x8080F5DC
    r3 = *(0xb8 + r30); // lwz @ 0x8080F5E0
    r4 = r30 + 0x3c; // 0x8080F5E4
    r12 = *(0 + r3); // lwz @ 0x8080F5E8
    r12 = *(0x70 + r12); // lwz @ 0x8080F5EC
    /* mtctr r12 */ // 0x8080F5F0
    /* bctrl  */ // 0x8080F5F4
    r3 = *(0xb8 + r30); // lwz @ 0x8080F5F8
    r12 = *(0 + r3); // lwz @ 0x8080F5FC
    r12 = *(0x80 + r12); // lwz @ 0x8080F600
    /* mtctr r12 */ // 0x8080F604
    /* bctrl  */ // 0x8080F608
    r0 = *(0x14 + r1); // lwz @ 0x8080F60C
    r31 = *(0xc + r1); // lwz @ 0x8080F610
    r30 = *(8 + r1); // lwz @ 0x8080F614
    return;
}