/* Function at 0x80804798, size=48 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 2 function(s) */

int FUN_80804798(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* li r5, 0 */ // 0x808047A0
    *(0x34 + r1) = r0; // stw @ 0x808047A4
    /* stmw r22, 8(r1) */ // 0x808047A8
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x808047B4
    /* li r3, 0x7c */ // 0x808047B8
    r4 = r4 + 0; // 0x808047BC
    *(0 + r31) = r4; // stw @ 0x808047C0
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}