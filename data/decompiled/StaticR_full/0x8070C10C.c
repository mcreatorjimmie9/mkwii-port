/* Function at 0x8070C10C, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 3 function(s) */

int FUN_8070C10C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x8070C118
    r26 = r3;
    /* li r27, 0 */ // 0x8070C120
    /* li r28, 0 */ // 0x8070C124
    /* lis r30, 0 */ // 0x8070C128
    /* lis r31, 0 */ // 0x8070C12C
    /* b 0x8070c174 */ // 0x8070C130
    /* li r3, 0xae8 */ // 0x8070C134
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x8070c164;
    r3 = *(0 + r30); // lwz @ 0x8070C148
    r4 = r27;
    FUN_8061D97C(r4); // bl 0x8061D97C
    r4 = r3;
    r3 = r29;
    FUN_8071DBB0(r4, r4, r3); // bl 0x8071DBB0
}