/* Function at 0x808F72D4, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 2 function(s) */

int FUN_808F72D4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* lis r3, 0 */ // 0x808F72DC
    *(0x24 + r1) = r0; // stw @ 0x808F72E0
    /* stmw r26, 8(r1) */ // 0x808F72E4
    r0 = *(0 + r3); // lwz @ 0x808F72E8
    if (!=) goto 0x0x808f73dc;
    /* li r3, 0x4758 */ // 0x808F72F4
    FUN_805E3430(r3); // bl 0x805E3430
    r26 = r3;
    if (==) goto 0x0x808f73d4;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F730C
    /* lis r28, 0 */ // 0x808F7310
    r3 = r3 + 0; // 0x808F7314
}