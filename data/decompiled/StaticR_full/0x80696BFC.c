/* Function at 0x80696BFC, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80696BFC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80696C0C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80696C14
    r30 = r3;
    if (==) goto 0x0x80696c4c;
    if (==) goto 0x0x80696c3c;
    /* li r4, -1 */ // 0x80696C24
    r3 = r3 + 0x80; // 0x80696C28
    FUN_806688C8(r4, r3); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x80696C34
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80696c4c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80696C50
    r30 = *(8 + r1); // lwz @ 0x80696C54
    r0 = *(0x14 + r1); // lwz @ 0x80696C58
    return;
}