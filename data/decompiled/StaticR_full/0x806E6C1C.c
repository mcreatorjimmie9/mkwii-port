/* Function at 0x806E6C1C, size=56 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r19 */
/* Calls: 1 function(s) */

int FUN_806E6C1C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r19 */
    /* lis r6, 0 */ // 0x806E6C24
    /* lis r5, 0 */ // 0x806E6C28
    *(0x44 + r1) = r0; // stw @ 0x806E6C2C
    r6 = r6 + 0; // 0x806E6C30
    r5 = r5 + 0; // 0x806E6C34
    /* stmw r19, 0xc(r1) */ // 0x806E6C38
    r27 = r3;
    r19 = r4;
    *(0 + r3) = r6; // stw @ 0x806E6C44
    *(4 + r3) = r5; // stw @ 0x806E6C48
    r3 = r3 + 8; // 0x806E6C4C
    FUN_805E3430(r3); // bl 0x805E3430
}