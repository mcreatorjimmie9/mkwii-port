/* Function at 0x808E6968, size=308 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 6 function(s) */

int FUN_808E6968(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x808E6974
    r31 = r3;
    r27 = r5;
    r0 = *(8 + r3); // lwz @ 0x808E6980
    if (!=) goto 0x0x808e6a88;
    /* lis r30, 0 */ // 0x808E698C
    r28 = *(0x240 + r5); // lwz @ 0x808E6990
    r3 = *(0 + r30); // lwz @ 0x808E6994
    r3 = *(0x98 + r3); // lwz @ 0x808E6998
    *(0x150 + r3) = r28; // stw @ 0x808E699C
    r3 = *(0 + r30); // lwz @ 0x808E69A0
    r3 = *(0 + r3); // lwz @ 0x808E69A4
    r3 = *(0 + r3); // lwz @ 0x808E69A8
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808e6a54;
    r3 = *(0 + r30); // lwz @ 0x808E69B8
    r3 = *(0 + r3); // lwz @ 0x808E69BC
    r29 = *(0x250 + r3); // lwz @ 0x808E69C0
    if (!=) goto 0x0x808e69d4;
    /* li r29, 0 */ // 0x808E69CC
    /* b 0x808e6a28 */ // 0x808E69D0
    /* lis r30, 0 */ // 0x808E69D4
    r30 = r30 + 0; // 0x808E69D8
    if (==) goto 0x0x808e6a24;
    r12 = *(0 + r29); // lwz @ 0x808E69E0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x808E69E8
    /* mtctr r12 */ // 0x808E69EC
    /* bctrl  */ // 0x808E69F0
    /* b 0x808e6a0c */ // 0x808E69F4
    if (!=) goto 0x0x808e6a08;
    /* li r0, 1 */ // 0x808E6A00
    /* b 0x808e6a18 */ // 0x808E6A04
    r3 = *(0 + r3); // lwz @ 0x808E6A08
    if (!=) goto 0x0x808e69f8;
    /* li r0, 0 */ // 0x808E6A14
    if (==) goto 0x0x808e6a24;
    /* b 0x808e6a28 */ // 0x808E6A20
    /* li r29, 0 */ // 0x808E6A24
    r3 = r29;
    r4 = r28;
    FUN_806A6BC8(r3, r4); // bl 0x806A6BC8
    /* li r0, -1 */ // 0x808E6A34
    *(0x3e8 + r31) = r0; // stw @ 0x808E6A38
    r3 = r27;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x808E6A48
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    /* b 0x808e6a80 */ // 0x808E6A50
    /* lis r4, 0 */ // 0x808E6A54
    r3 = r31;
    r6 = *(0 + r4); // lwz @ 0x808E6A5C
    r5 = r27;
    /* li r4, 0x1b */ // 0x808E6A64
    *(0x1758 + r6) = r28; // stw @ 0x808E6A68
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    r3 = *(0 + r30); // lwz @ 0x808E6A70
    r4 = r28;
    r3 = *(0x98 + r3); // lwz @ 0x808E6A78
    FUN_80661BC0(r4); // bl 0x80661BC0
    /* li r0, 1 */ // 0x808E6A80
    *(0x1a80 + r31) = r0; // stb @ 0x808E6A84
    r0 = *(0x24 + r1); // lwz @ 0x808E6A8C
    return;
}