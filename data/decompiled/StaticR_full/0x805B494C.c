/* Function at 0x805B494C, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805B494C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 8 */ // 0x805B4954
    *(0x24 + r1) = r0; // stw @ 0x805B4958
    /* stmw r26, 8(r1) */ // 0x805B495C
    r27 = r4;
    r26 = r3;
    /* li r4, 0 */ // 0x805B4968
    r3 = r27;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}