/* Function at 0x80817340, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_80817340(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80817354
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8081735C
    r29 = r3;
    if (==) goto 0x0x808173c4;
    if (==) goto 0x0x808173b4;
    /* lis r5, 0 */ // 0x8081736C
    /* lis r4, 0 */ // 0x80817370
    r5 = r5 + 0; // 0x80817374
    *(0 + r3) = r5; // stw @ 0x80817378
    r31 = *(0 + r4); // lwz @ 0x8081737C
    if (==) goto 0x0x808173a8;
    /* li r0, 0 */ // 0x80817388
    *(0 + r4) = r0; // stw @ 0x8081738C
    if (==) goto 0x0x808173a8;
    r3 = r31;
    /* li r4, -1 */ // 0x80817398
    FUN_80816FB0(r3, r4); // bl 0x80816FB0
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x808173AC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808173c4;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808173C4
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x808173CC
    r29 = *(0x14 + r1); // lwz @ 0x808173D0
    r0 = *(0x24 + r1); // lwz @ 0x808173D4
    return;
}