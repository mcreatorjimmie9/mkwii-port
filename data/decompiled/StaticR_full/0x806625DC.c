/* Function at 0x806625DC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806625DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806625EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806625F4
    r30 = r3;
    if (==) goto 0x0x80662644;
    /* li r4, -1 */ // 0x80662600
    r3 = r3 + 0x1c8; // 0x80662604
    FUN_806A0540(r4, r3); // bl 0x806A0540
    /* addic. r3, r30, 0x54 */ // 0x8066260C
    if (==) goto 0x0x8066261c;
    /* li r4, 0 */ // 0x80662614
    FUN_806A0540(r3, r4); // bl 0x806A0540
    r3 = r30 + 0x44; // 0x8066261C
    /* li r4, -1 */ // 0x80662620
    FUN_80668158(r4, r3, r4); // bl 0x80668158
    r3 = r30;
    /* li r4, 0 */ // 0x8066262C
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80662644;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80662648
    r30 = *(8 + r1); // lwz @ 0x8066264C
    r0 = *(0x14 + r1); // lwz @ 0x80662650
    return;
}