/* Function at 0x808E6EE8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808E6EE8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808E6EF8
    *(8 + r1) = r30; // stw @ 0x808E6EFC
    r30 = r3;
    if (==) goto 0x0x808e6f14;
    if (==) goto 0x0x808e6f78;
    /* b 0x808e7030 */ // 0x808E6F10
    /* li r3, 0x254 */ // 0x808E6F14
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808e6f30;
    FUN_806497A4(r3); // bl 0x806497A4
    r31 = r3;
    r4 = *(0x654 + r30); // lwz @ 0x808E6F30
    r3 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x808E6F3C
}