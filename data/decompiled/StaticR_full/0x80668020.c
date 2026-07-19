/* Function at 0x80668020, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80668020(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* li r5, 0x40 */ // 0x80668028
    *(0x24 + r1) = r0; // stw @ 0x8066802C
    /* stmw r26, 8(r1) */ // 0x80668030
    r26 = r3;
    r27 = r4;
    r3 = r3 + 0x370; // 0x8066803C
    FUN_805E3430(r3); // bl 0x805E3430
}