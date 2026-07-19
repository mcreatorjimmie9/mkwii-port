/* Function at 0x805B51E8, size=116 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_805B51E8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x805B51F4
    r27 = r3;
    r3 = *(0x1c + r3); // lwz @ 0x805B51FC
    FUN_805B1CBC(); // bl 0x805B1CBC
    r29 = r27 + 4; // 0x805B5204
    /* lis r30, 0 */ // 0x805B5208
    /* lis r31, 0 */ // 0x805B520C
    /* b 0x805b523c */ // 0x805B5210
    r3 = r27 + 4; // 0x805B5214
    /* li r4, 0 */ // 0x805B5218
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r28 = r3;
    r3 = r27 + 4; // 0x805B5224
    r4 = r28;
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    r4 = r28;
    r3 = r27 + 0x10; // 0x805B5234
    FUN_805E3430(r3, r4, r4, r3); // bl 0x805E3430
    if (!=) goto 0x0x805b5258;
    r3 = r30 + 0; // 0x805B5244
    r5 = r31 + 0; // 0x805B5248
    /* li r4, 0xcf */ // 0x805B524C
    /* crclr cr1eq */ // 0x805B5250
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r0 = *(0xc + r27); // lhz @ 0x805B5258
}