/* Function at 0x806A553C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806A553C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A554C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A5554
    r30 = r3;
    if (==) goto 0x0x806a558c;
    if (==) goto 0x0x806a557c;
    /* li r4, -1 */ // 0x806A5564
    r3 = r3 + 0x174; // 0x806A5568
    FUN_806691A0(r4, r3); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x806A5574
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x806a558c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A5590
    r30 = *(8 + r1); // lwz @ 0x806A5594
    r0 = *(0x14 + r1); // lwz @ 0x806A5598
    return;
}