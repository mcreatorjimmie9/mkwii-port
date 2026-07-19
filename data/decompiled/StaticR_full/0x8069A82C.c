/* Function at 0x8069A82C, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069A82C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069A83C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069A844
    r30 = r3;
    if (==) goto 0x0x8069a888;
    /* lis r5, 0 */ // 0x8069A850
    /* lis r4, 0 */ // 0x8069A854
    r5 = r5 + 0; // 0x8069A858
    *(0 + r3) = r5; // stw @ 0x8069A85C
    r3 = *(0x188 + r3); // lwz @ 0x8069A860
    r4 = r4 + 0; // 0x8069A864
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    r3 = r30;
    /* li r4, 0 */ // 0x8069A870
    FUN_806A0540(r4, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x8069a888;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}