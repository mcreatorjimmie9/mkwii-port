/* Function at 0x80688F1C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80688F1C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80688F2C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80688F34
    r30 = r3;
    if (==) goto 0x0x80688f6c;
    /* addic. r3, r3, 0x54 */ // 0x80688F40
    if (==) goto 0x0x80688f50;
    /* li r4, 0 */ // 0x80688F48
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x80688F54
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80688f6c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80688F70
    r30 = *(8 + r1); // lwz @ 0x80688F74
    r0 = *(0x14 + r1); // lwz @ 0x80688F78
    return;
}