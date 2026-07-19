/* Function at 0x805AB510, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805AB510(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x805AB518
    *(0xc + r1) = r31; // stw @ 0x805AB520
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805AB528
    r30 = r3;
    r3 = *(0 + r6); // lwz @ 0x805AB530
    /* li r6, 0 */ // 0x805AB534
    r3 = *(0x54 + r3); // lwz @ 0x805AB538
    r3 = *(0xc + r3); // lwz @ 0x805AB53C
    r0 = *(0x28 + r3); // lwz @ 0x805AB540
    if (==) goto 0x0x805ab558;
    if (==) goto 0x0x805ab558;
    r6 = r3;
    /* slwi r0, r5, 2 */ // 0x805AB558
    r4 = r31;
    r3 = r6 + r0; // 0x805AB560
    /* li r5, -8 */ // 0x805AB564
    r3 = *(0xc94 + r3); // lwz @ 0x805AB568
    r12 = *(0 + r3); // lwz @ 0x805AB56C
    r12 = *(0x14 + r12); // lwz @ 0x805AB570
    /* mtctr r12 */ // 0x805AB574
    /* bctrl  */ // 0x805AB578
    r4 = r31;
    /* li r5, 0 */ // 0x805AB580
    FUN_805E3430(r4, r5); // bl 0x805E3430
}