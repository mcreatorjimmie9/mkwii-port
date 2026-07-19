/* Function at 0x805B5A2C, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_805B5A2C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B5A38
    /* li r31, 0 */ // 0x805B5A3C
    /* mulli r30, r31, 0x18 */ // 0x805B5A40
    r28 = r3;
    r29 = r3 + 0x218; // 0x805B5A48
    /* li r27, 0 */ // 0x805B5A4C
    r3 = r29 + r30; // 0x805B5A50
    r3 = r3 + 8; // 0x805B5A54
    FUN_805E3430(r3); // bl 0x805E3430
}