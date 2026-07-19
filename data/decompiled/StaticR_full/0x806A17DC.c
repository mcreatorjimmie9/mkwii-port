/* Function at 0x806A17DC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806A17DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A17EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A17F4
    r30 = r3;
    if (==) goto 0x0x806a1840;
    /* lis r4, 0 */ // 0x806A1800
    /* li r5, 0x188 */ // 0x806A1804
    r4 = r4 + 0; // 0x806A1808
    /* li r6, 2 */ // 0x806A180C
    r3 = r3 + 0x2b4; // 0x806A1810
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x218; // 0x806A1818
    /* li r4, -1 */ // 0x806A181C
    FUN_806691A0(r6, r3, r3, r4); // bl 0x806691A0
    r3 = r30;
    /* li r4, 0 */ // 0x806A1828
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
}