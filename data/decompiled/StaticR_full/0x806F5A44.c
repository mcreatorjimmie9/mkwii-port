/* Function at 0x806F5A44, size=56 bytes */
/* Stack frame: 960 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_806F5A44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -960(r1) */
    /* saved r27 */
    /* lis r3, 0 */ // 0x806F5A4C
    *(0x3c4 + r1) = r0; // stw @ 0x806F5A50
    r3 = r3 + 0; // 0x806F5A54
    /* stmw r27, 0x3ac(r1) */ // 0x806F5A58
    r27 = r4;
    r28 = r5;
    r29 = r6;
    /* li r4, 0 */ // 0x806F5A68
    /* li r5, 0x1c0 */ // 0x806F5A6C
    *(0x1d8 + r1) = r3; // stw @ 0x806F5A70
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}