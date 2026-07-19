/* Function at 0x805FB660, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805FB660(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805FB674
    r30 = r3;
    FUN_8062019C(); // bl 0x8062019C
    r3 = r30;
    r4 = r31;
    /* li r5, 0 */ // 0x805FB688
    FUN_806202AC(r3, r4, r5); // bl 0x806202AC
    r0 = *(0x14 + r1); // lwz @ 0x805FB690
    r31 = *(0xc + r1); // lwz @ 0x805FB694
    r30 = *(8 + r1); // lwz @ 0x805FB698
    return;
}