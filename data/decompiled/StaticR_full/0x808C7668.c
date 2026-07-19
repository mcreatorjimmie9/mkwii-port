/* Function at 0x808C7668, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C7668(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C7678
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C7680
    r30 = r3;
    if (==) goto 0x0x808c7714;
    /* lis r4, 0 */ // 0x808C768C
    /* li r5, 0x474 */ // 0x808C7690
    r4 = r4 + 0; // 0x808C7694
    /* li r6, 1 */ // 0x808C7698
    r3 = r3 + 0x1984; // 0x808C769C
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808C76A4
    r3 = r30 + 0x13bc; // 0x808C76A8
    r4 = r4 + 0; // 0x808C76AC
    /* li r5, 0x5c8 */ // 0x808C76B0
    /* li r6, 1 */ // 0x808C76B4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808C76BC
}