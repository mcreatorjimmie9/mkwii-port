/* Function at 0x807A82CC, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 1 function(s) */

int FUN_807A82CC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x807A82D8
    /* lis r28, 0 */ // 0x807A82DC
    r27 = *(0 + r28); // lwz @ 0x807A82E0
    if (==) goto 0x0x807a8398;
    /* li r29, 0 */ // 0x807A82EC
    *(0 + r28) = r29; // stw @ 0x807A82F0
    if (==) goto 0x0x807a8398;
    /* lis r30, 0 */ // 0x807A82F8
    r3 = r27 + 0x14; // 0x807A82FC
    r4 = r30 + 0; // 0x807A8300
    /* li r5, 0xc */ // 0x807A8304
    /* li r6, 4 */ // 0x807A8308
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x807a8390;
    /* lis r31, 0 */ // 0x807A8318
    r31 = r31 + 0; // 0x807A831C
    *(0 + r27) = r31; // stw @ 0x807A8320
}