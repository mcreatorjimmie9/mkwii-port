/* Function at 0x808064C0, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808064C0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x808064D4
    r30 = r3;
    r4 = *(0xe0 + r3); // lwz @ 0x808064DC
    if (==) goto 0x0x808064f4;
    r0 = *(0x14c + r3); // lwz @ 0x808064E8
    if (<=) goto 0x0x808064fc;
    /* li r3, 0 */ // 0x808064F4
    /* b 0x80806548 */ // 0x808064F8
    if (!=) goto 0x0x80806544;
    if (==) goto 0x0x80806544;
    r4 = *(8 + r3); // lwz @ 0x8080650C
    /* lis r3, 0 */ // 0x80806510
    /* lis r5, 0 */ // 0x80806514
    /* lfs f1, 0(r3) */ // 0x80806518
    r3 = *(0x28 + r4); // lwz @ 0x8080651C
    /* li r4, 1 */ // 0x80806520
    /* lfs f2, 0(r5) */ // 0x80806524
    /* li r5, 1 */ // 0x80806528
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* lis r3, 0 */ // 0x80806530
    /* li r0, 1 */ // 0x80806534
    r3 = *(0 + r3); // lwz @ 0x80806538
    *(0xf4 + r30) = r3; // stw @ 0x8080653C
    *(0xf0 + r30) = r0; // stb @ 0x80806540
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x80806548
    r31 = *(0xc + r1); // lwz @ 0x8080654C
    r30 = *(8 + r1); // lwz @ 0x80806550
    return;
}