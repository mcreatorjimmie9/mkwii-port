/* Function at 0x80863484, size=76 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 1 function(s) */

int FUN_80863484(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x80863490
    /* lis r29, 0 */ // 0x80863494
    r28 = *(0 + r29); // lwz @ 0x80863498
    if (==) goto 0x0x8086353c;
    /* li r30, 0 */ // 0x808634A4
    *(0 + r29) = r30; // stw @ 0x808634A8
    if (==) goto 0x0x8086353c;
    r3 = r28 + 0x18; // 0x808634B0
    /* li r4, -1 */ // 0x808634B4
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x80863534;
    /* lis r31, 0 */ // 0x808634C4
    r31 = r31 + 0; // 0x808634C8
    *(0 + r28) = r31; // stw @ 0x808634CC
}