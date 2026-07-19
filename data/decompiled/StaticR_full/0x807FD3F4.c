/* Function at 0x807FD3F4, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807FD3F4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807FD408
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807FD410
    r29 = r3;
    if (==) goto 0x0x807fd4d8;
    /* lis r5, 0 */ // 0x807FD41C
    /* lis r4, 0 */ // 0x807FD420
    r5 = r5 + 0; // 0x807FD424
    *(0 + r3) = r5; // stw @ 0x807FD428
    r31 = *(0 + r4); // lwz @ 0x807FD42C
    if (==) goto 0x0x807fd4bc;
    /* li r0, 0 */ // 0x807FD438
    *(0 + r4) = r0; // stw @ 0x807FD43C
    if (==) goto 0x0x807fd4bc;
    /* lis r3, 0 */ // 0x807FD444
    r3 = *(0 + r3); // lwz @ 0x807FD448
    r0 = *(0xb74 + r3); // lwz @ 0x807FD44C
    if (!=) goto 0x0x807fd468;
    /* lis r4, 0 */ // 0x807FD458
    /* lis r3, 0 */ // 0x807FD45C
    r0 = *(0 + r4); // lbz @ 0x807FD460
    *(0 + r3) = r0; // stb @ 0x807FD464
    r3 = r31 + 0x164; // 0x807FD468
    /* li r4, -1 */ // 0x807FD46C
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x807fd4b4;
    /* lis r3, 0 */ // 0x807FD47C
    /* lis r4, 0 */ // 0x807FD480
    r3 = r3 + 0; // 0x807FD484
    *(0 + r31) = r3; // stw @ 0x807FD488
    r3 = *(0 + r4); // lwz @ 0x807FD48C
    if (==) goto 0x0x807fd4a8;
    /* li r0, 0 */ // 0x807FD498
    *(0 + r4) = r0; // stw @ 0x807FD49C
}