/* Function at 0x807FDC58, size=56 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_807FDC58(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807FDC64
    /* lis r31, 0 */ // 0x807FDC68
    r26 = r3;
    r28 = r3 + 0x18; // 0x807FDC70
    r29 = r3 + 0x58; // 0x807FDC74
    r31 = r31 + 0; // 0x807FDC78
    /* li r27, 0 */ // 0x807FDC7C
    r4 = *(0x10 + r26); // lwz @ 0x807FDC80
    /* li r3, 0x28 */ // 0x807FDC84
    /* li r5, 4 */ // 0x807FDC88
    FUN_805E3430(r3, r5); // bl 0x805E3430
}