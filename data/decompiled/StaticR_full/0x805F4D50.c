/* Function at 0x805F4D50, size=64 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_805F4D50(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x805F4D5C
    /* lis r27, 0 */ // 0x805F4D60
    r27 = r27 + 0; // 0x805F4D64
    /* li r26, 0 */ // 0x805F4D68
    /* li r29, 0 */ // 0x805F4D6C
    r28 = r27 + 0; // 0x805F4D70
    r30 = r27 + 0x18; // 0x805F4D74
    r31 = r27 + 0x20; // 0x805F4D78
    /* clrlwi r0, r26, 0x18 */ // 0x805F4D7C
    /* li r4, 0x18 */ // 0x805F4D80
    /* mulli r0, r0, 0xc */ // 0x805F4D84
    r3 = r28 + r0; // 0x805F4D88
    FUN_805E3430(r4); // bl 0x805E3430
}