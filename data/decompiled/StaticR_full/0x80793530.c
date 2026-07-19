/* Function at 0x80793530, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793530(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r6 = r4;
    *(0x14 + r1) = r0; // stw @ 0x80793540
    *(0xc + r1) = r31; // stw @ 0x80793544
    if (>=) goto 0x0x8079355c;
    /* slwi r0, r5, 2 */ // 0x8079354C
    r4 = r3 + r0; // 0x80793550
    r31 = r4 + 0x80; // 0x80793554
    /* b 0x80793560 */ // 0x80793558
    /* li r31, 0 */ // 0x8079355C
    if (==) goto 0x0x80793580;
    r5 = r6;
    r4 = r31;
    /* li r6, 0 */ // 0x80793570
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80793584 */ // 0x8079357C
    /* li r3, 0 */ // 0x80793580
    r0 = *(0x14 + r1); // lwz @ 0x80793584
    r31 = *(0xc + r1); // lwz @ 0x80793588
}