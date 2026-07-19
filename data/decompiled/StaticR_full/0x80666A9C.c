/* Function at 0x80666A9C, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_80666A9C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80666AA8
    r26 = r3;
    r27 = r4;
    /* li r28, 0 */ // 0x80666AB4
    /* li r31, 0 */ // 0x80666AB8
    r30 = *(0x78 + r3); // lwz @ 0x80666ABC
    /* b 0x80666af4 */ // 0x80666AC0
    r29 = *(0x74 + r26); // lwz @ 0x80666AC4
    r4 = r27;
    /* lwzx r3, r29, r31 */ // 0x80666ACC
    r3 = r3 + 0xbc; // 0x80666AD0
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x80666aec;
    /* mulli r0, r28, 0x18 */ // 0x80666AE0
    r3 = r29 + r0; // 0x80666AE4
    /* b 0x80666b00 */ // 0x80666AE8
    r31 = r31 + 0x18; // 0x80666AEC
    r28 = r28 + 1; // 0x80666AF0
}