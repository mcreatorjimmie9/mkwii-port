/* Function at 0x807D2F64, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 7 function(s) */

int FUN_807D2F64(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    *(0x24 + r1) = r0; // stw @ 0x807D2F70
    /* stmw r26, 8(r1) */ // 0x807D2F74
    r26 = r3;
    r27 = r4;
    if (==) goto 0x0x807d303c;
    r31 = *(0x1a8 + r3); // lwz @ 0x807D2F84
    /* lis r4, 0 */ // 0x807D2F88
    r4 = r4 + 0; // 0x807D2F8C
    *(0 + r3) = r4; // stw @ 0x807D2F90
    if (==) goto 0x0x807d2fb0;
    r3 = r31;
    /* li r4, 0 */ // 0x807D2FA0
    FUN_8091CD70(r3, r4); // bl 0x8091CD70
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* li r31, 0 */ // 0x807D2FB4
    *(0x1a8 + r26) = r31; // stw @ 0x807D2FB8
    if (==) goto 0x0x807d302c;
    /* lis r3, 0 */ // 0x807D2FC0
    r28 = r26;
    r3 = r3 + 0; // 0x807D2FC8
    *(0 + r26) = r3; // stw @ 0x807D2FCC
    /* li r29, 0 */ // 0x807D2FD0
    r30 = *(4 + r28); // lwz @ 0x807D2FD4
    if (==) goto 0x0x807d2ff4;
    r3 = r30;
    /* li r4, 0 */ // 0x807D2FE4
    FUN_8091CD70(r3, r4); // bl 0x8091CD70
    r3 = r30;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r29 = r29 + 1; // 0x807D2FF4
    *(4 + r28) = r31; // stwu @ 0x807D2FF8
    if (<) goto 0x0x807d2fd4;
    r31 = *(0xc + r26); // lwz @ 0x807D3004
    if (==) goto 0x0x807d3024;
    r3 = r31;
    /* li r4, 0 */ // 0x807D3014
    FUN_8091CD70(r3, r4); // bl 0x8091CD70
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807D3024
    *(0xc + r26) = r0; // stw @ 0x807D3028
    if (<=) goto 0x0x807d303c;
    r3 = r26;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r26;
    r0 = *(0x24 + r1); // lwz @ 0x807D3044
    return;
}