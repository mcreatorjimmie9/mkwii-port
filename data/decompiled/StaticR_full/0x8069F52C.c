/* Function at 0x8069F52C, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8069F52C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8069F53C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8069F544
    r30 = r3;
    if (==) goto 0x0x8069f580;
    r3 = *(0 + r3); // lwz @ 0x8069F550
    if (==) goto 0x0x8069f564;
    r3 = r3 + -0x10; // 0x8069F55C
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30 + 8; // 0x8069F564
    /* li r4, -1 */ // 0x8069F568
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8069f580;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8069F584
    r30 = *(8 + r1); // lwz @ 0x8069F588
}