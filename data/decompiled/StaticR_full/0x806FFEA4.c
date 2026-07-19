/* Function at 0x806FFEA4, size=52 bytes */
/* Stack frame: 736 bytes */
/* Saved registers: r15 */
/* Calls: 1 function(s) */

int FUN_806FFEA4(int r3, int r4, int r5)
{
    /* Stack frame: -736(r1) */
    /* saved r15 */
    /* lis r5, 0 */ // 0x806FFEAC
    *(0x2e4 + r1) = r0; // stw @ 0x806FFEB0
    r5 = r5 + 0; // 0x806FFEB4
    /* stmw r15, 0x29c(r1) */ // 0x806FFEB8
    r16 = r3;
    r17 = r4;
    /* li r4, 0 */ // 0x806FFEC8
    *(0xd0 + r1) = r5; // stw @ 0x806FFECC
    /* li r5, 0x1c0 */ // 0x806FFED0
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}