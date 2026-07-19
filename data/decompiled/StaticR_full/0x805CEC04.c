/* Function at 0x805CEC04, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */

int FUN_805CEC04(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805CEC10
    r27 = r3;
    /* li r28, 0 */ // 0x805CEC18
    /* lis r31, 0 */ // 0x805CEC1C
    /* lis r29, 0 */ // 0x805CEC20
    /* lis r30, 0 */ // 0x805CEC24
    /* b 0x805ced2c */ // 0x805CEC28
    r3 = *(0 + r29); // lwz @ 0x805CEC2C
    r3 = *(0x4c + r3); // lwz @ 0x805CEC30
}