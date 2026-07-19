/* Function at 0x806C53C4, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806C53C4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806C53D0
    r31 = r3;
    r0 = *(0x54 + r3); // lwz @ 0x806C53D8
    if (==) goto 0x0x806c5400;
    if (==) goto 0x0x806c5410;
    if (==) goto 0x0x806c5420;
    if (==) goto 0x0x806c5430;
    /* b 0x806c543c */ // 0x806C53FC
    /* lis r3, 0 */ // 0x806C5400
    r3 = *(0 + r3); // lwz @ 0x806C5404
    FUN_806F7D54(r3); // bl 0x806F7D54
    /* b 0x806c543c */ // 0x806C540C
    /* lis r3, 0 */ // 0x806C5410
    r3 = *(0 + r3); // lwz @ 0x806C5414
    FUN_806F7D54(r3); // bl 0x806F7D54
    /* b 0x806c543c */ // 0x806C541C
    /* lis r3, 0 */ // 0x806C5420
    r3 = *(0 + r3); // lwz @ 0x806C5424
    FUN_806F7D54(r3); // bl 0x806F7D54
    /* b 0x806c543c */ // 0x806C542C
    /* lis r3, 0 */ // 0x806C5430
    r3 = *(0 + r3); // lwz @ 0x806C5434
    FUN_806F7D54(r3); // bl 0x806F7D54
    r0 = *(0x58 + r31); // lbz @ 0x806C543C
    if (==) goto 0x0x806c5460;
    /* lis r3, 0 */ // 0x806C5448
    r3 = *(0 + r3); // lwz @ 0x806C544C
    r3 = *(0x90 + r3); // lwz @ 0x806C5450
    FUN_806845FC(r3); // bl 0x806845FC
    /* li r0, 0 */ // 0x806C5458
    *(0x58 + r31) = r0; // stb @ 0x806C545C
    r0 = *(0x14 + r1); // lwz @ 0x806C5460
    r31 = *(0xc + r1); // lwz @ 0x806C5464
    return;
}