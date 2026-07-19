/* Function at 0x8068864C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8068864C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8068865C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80688664
    r30 = r3;
    if (==) goto 0x0x806886b8;
    /* lis r4, 0 */ // 0x80688670
    /* li r5, 0xb90 */ // 0x80688674
    r4 = r4 + 0; // 0x80688678
    /* li r6, 2 */ // 0x8068867C
    r3 = r3 + 0x1a0; // 0x80688680
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (==) goto 0x0x806886a8;
    r3 = r30 + 0x5c; // 0x80688690
    /* li r4, -1 */ // 0x80688694
    FUN_806688C8(r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x806886A0
}