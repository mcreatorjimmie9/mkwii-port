/* Function at 0x806885D8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806885D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806885E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806885F0
    r30 = r3;
    if (==) goto 0x0x80688630;
    /* lis r4, 0 */ // 0x806885FC
    /* li r5, 0x174 */ // 0x80688600
    r4 = r4 + 0; // 0x80688604
    /* li r6, 6 */ // 0x80688608
    r3 = r3 + 0x1f0; // 0x8068860C
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x80688618
    FUN_806A0540(r6, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x80688630;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}