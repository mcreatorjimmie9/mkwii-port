/* Function at 0x8062DC70, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_8062DC70(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x8062DC84
    r29 = r3;
    /* lis r3, 0 */ // 0x8062DC8C
    r4 = *(0x9c + r29); // lbz @ 0x8062DC90
    r3 = *(0 + r3); // lwz @ 0x8062DC94
    /* extsb r4, r4 */ // 0x8062DC98
    FUN_8061D97C(r3); // bl 0x8061D97C
    /* lis r31, 0 */ // 0x8062DCA0
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8062DCA8
    r4 = *(0x9c + r29); // lbz @ 0x8062DCAC
    FUN_805C1470(); // bl 0x805C1470
    r4 = *(0x8c + r29); // lwz @ 0x8062DCB4
    /* extsb r3, r3 */ // 0x8062DCB8
    r0 = *(0x68 + r4); // lwz @ 0x8062DCBC
    if (==) goto 0x0x8062dcd8;
    r3 = *(0 + r31); // lwz @ 0x8062DCC8
    r0 = *(0xb74 + r3); // lwz @ 0x8062DCCC
    if (!=) goto 0x0x8062dce4;
    r3 = r30;
    r4 = r29;
    FUN_8061E674(r3, r4); // bl 0x8061E674
    r3 = r30;
    FUN_8061E0F0(r3, r4, r3); // bl 0x8061E0F0
    /* lis r4, 0 */ // 0x8062DCEC
    r3 = *(8 + r3); // lwz @ 0x8062DCF0
    r4 = *(0 + r4); // lwz @ 0x8062DCF4
    r0 = r4 + -2; // 0x8062DCF8
    /* cntlzw r0, r0 */ // 0x8062DCFC
    /* srwi r4, r0, 5 */ // 0x8062DD00
    FUN_80620050(); // bl 0x80620050
    /* lis r4, 0 */ // 0x8062DD08
    r0 = *(0 + r4); // lwz @ 0x8062DD0C
    if (!=) goto 0x0x8062dd20;
    *(0x188 + r29) = r3; // stw @ 0x8062DD18
    /* b 0x8062dd28 */ // 0x8062DD1C
    r0 = r3 + 0x10; // 0x8062DD20
    *(0x188 + r29) = r0; // stw @ 0x8062DD24
    r0 = *(0x24 + r1); // lwz @ 0x8062DD28
    r31 = *(0x1c + r1); // lwz @ 0x8062DD2C
    r30 = *(0x18 + r1); // lwz @ 0x8062DD30
    r29 = *(0x14 + r1); // lwz @ 0x8062DD34
    return;
}