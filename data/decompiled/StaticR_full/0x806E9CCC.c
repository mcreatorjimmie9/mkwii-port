/* Function at 0x806E9CCC, size=56 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_806E9CCC(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r26 */
    /* stmw r26, 0x28(r1) */ // 0x806E9CD8
    r31 = r3;
    r0 = *(0x25e9 + r3); // lbz @ 0x806E9CE0
    if (==) goto 0x0x806e9d28;
    r3 = r3 + 8; // 0x806E9CEC
    FUN_805E3430(r3); // bl 0x805E3430
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x25e4 + r31) = r3; // stw @ 0x806E9CF8
    r3 = r31 + 0x25e4; // 0x806E9CFC
    /* li r4, 8 */ // 0x806E9D00
}