/* Function at 0x806669DC, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_806669DC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x806669E8
    r26 = r3;
    r27 = r4;
    /* li r28, 0 */ // 0x806669F4
    /* li r31, 0 */ // 0x806669F8
    r30 = *(0x70 + r3); // lwz @ 0x806669FC
    /* b 0x80666a34 */ // 0x80666A00
    r29 = *(0x6c + r26); // lwz @ 0x80666A04
    r4 = r27;
    /* lwzx r3, r29, r31 */ // 0x80666A0C
    r3 = r3 + 0xbc; // 0x80666A10
    FUN_805E3430(r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x80666a2c;
    /* mulli r0, r28, 0x1c */ // 0x80666A20
    r3 = r29 + r0; // 0x80666A24
    /* b 0x80666a40 */ // 0x80666A28
    r31 = r31 + 0x1c; // 0x80666A2C
    r28 = r28 + 1; // 0x80666A30
}