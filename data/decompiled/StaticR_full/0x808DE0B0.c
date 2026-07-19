/* Function at 0x808DE0B0, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808DE0B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808DE0BC
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = r31 + 0x58; // 0x808DE0C8
    r4 = r31 + 0xbc; // 0x808DE0CC
    FUN_805E3430(r3, r4); // bl 0x805E3430
}