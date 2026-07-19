/* Function at 0x80840514, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80840514(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80840528
    r30 = r3;
    FUN_80842D58(); // bl 0x80842D58
    r4 = *(0 + r30); // lwz @ 0x80840534
    FUN_805E364C(); // bl 0x805E364C
    /* slwi r0, r3, 2 */ // 0x8084053C
    r4 = r30 + r0; // 0x80840540
    r0 = *(4 + r4); // lwz @ 0x80840544
    if (!=) goto 0x0x80840564;
    r0 = *(0 + r30); // lwz @ 0x80840550
    r3 = r3 + 1; // 0x80840554
    if (<) goto 0x0x80840564;
    /* li r3, 0 */ // 0x80840560
    /* slwi r0, r3, 2 */ // 0x80840564
    r31 = *(0xc + r1); // lwz @ 0x80840568
    r3 = r30 + r0; // 0x8084056C
    r30 = *(8 + r1); // lwz @ 0x80840570
    r0 = *(0x14 + r1); // lwz @ 0x80840574
    r3 = *(4 + r3); // lwz @ 0x80840578
    return;
}