/* Function at 0x808C4E68, size=40 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_808C4E68(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* li r0, 1 */ // 0x808C4E74
    /* stmw r27, 0xc(r1) */ // 0x808C4E78
    r31 = r3;
    *(0x6bc + r3) = r0; // stw @ 0x808C4E80
    *(0x6c0 + r3) = r0; // stw @ 0x808C4E84
    /* li r3, 0x98 */ // 0x808C4E88
    FUN_805E3430(r3); // bl 0x805E3430
}