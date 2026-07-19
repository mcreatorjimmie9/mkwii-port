/* Function at 0x8086E034, size=36 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_8086E034(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r21 */
    /* stmw r21, 0x44(r1) */ // 0x8086E040
    r30 = r3;
    r22 = r4;
    *(4 + r3) = r4; // stw @ 0x8086E04C
    /* li r3, 0x4c */ // 0x8086E050
    FUN_805E3430(r3); // bl 0x805E3430
}