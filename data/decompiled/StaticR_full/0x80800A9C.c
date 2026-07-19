/* Function at 0x80800A9C, size=112 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_80800A9C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x80800AA8
    r26 = r3;
    r29 = r3 + 0x124; // 0x80800AB0
    /* lis r30, 0 */ // 0x80800AB4
    /* lis r31, 0 */ // 0x80800AB8
    /* li r28, 1 */ // 0x80800ABC
    /* b 0x80800b14 */ // 0x80800AC0
    r3 = r26 + 0x124; // 0x80800AC4
    /* li r4, 0 */ // 0x80800AC8
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r27 = r3;
    r3 = r26;
    r4 = *(0 + r27); // lwz @ 0x80800AD8
    /* li r9, 0 */ // 0x80800ADC
    r5 = *(4 + r27); // lwz @ 0x80800AE0
    r6 = *(8 + r27); // lwz @ 0x80800AE4
    r7 = *(0xc + r27); // lwz @ 0x80800AE8
    r8 = *(0x10 + r27); // lwz @ 0x80800AEC
    FUN_807FF804(r9); // bl 0x807FF804
    r5 = *(0x18 + r27); // lwz @ 0x80800AF4
    r4 = r27;
    r3 = r26 + 0x124; // 0x80800AFC
    *(0 + r5) = r28; // stb @ 0x80800B00
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x11c + r26); // lwz @ 0x80800B08
}