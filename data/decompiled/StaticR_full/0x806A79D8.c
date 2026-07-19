/* Function at 0x806A79D8, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806A79D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x806A79E0
    *(0x18 + r1) = r30; // stw @ 0x806A79EC
    *(0x14 + r1) = r29; // stw @ 0x806A79F0
    r29 = r3;
    r3 = r3 + 0x628; // 0x806A79F8
    FUN_80649EEC(r3); // bl 0x80649EEC
    /* lis r3, 0 */ // 0x806A7A00
    r3 = *(0 + r3); // lwz @ 0x806A7A04
    r3 = *(0 + r3); // lwz @ 0x806A7A08
    r30 = *(0x2a4 + r3); // lwz @ 0x806A7A0C
    if (!=) goto 0x0x806a7a20;
    /* li r30, 0 */ // 0x806A7A18
    /* b 0x806a7a74 */ // 0x806A7A1C
    /* lis r31, 0 */ // 0x806A7A20
    r31 = r31 + 0; // 0x806A7A24
    if (==) goto 0x0x806a7a70;
    r12 = *(0 + r30); // lwz @ 0x806A7A2C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806A7A34
    /* mtctr r12 */ // 0x806A7A38
    /* bctrl  */ // 0x806A7A3C
    /* b 0x806a7a58 */ // 0x806A7A40
    if (!=) goto 0x0x806a7a54;
    /* li r0, 1 */ // 0x806A7A4C
    /* b 0x806a7a64 */ // 0x806A7A50
    r3 = *(0 + r3); // lwz @ 0x806A7A54
    if (!=) goto 0x0x806a7a44;
    /* li r0, 0 */ // 0x806A7A60
    if (==) goto 0x0x806a7a70;
    /* b 0x806a7a74 */ // 0x806A7A6C
    /* li r30, 0 */ // 0x806A7A70
    /* lis r4, 0 */ // 0x806A7A74
    r3 = r30;
    r4 = *(0 + r4); // lwz @ 0x806A7A7C
    r6 = *(0x98 + r4); // lwz @ 0x806A7A80
    r4 = *(0x3c4 + r6); // lwz @ 0x806A7A84
    r5 = *(0x3cc + r6); // lwz @ 0x806A7A88
    r6 = *(0x3c8 + r6); // lwz @ 0x806A7A8C
    FUN_8065F900(); // bl 0x8065F900
    r4 = r3;
    r3 = r29 + 0x3dc; // 0x806A7A98
    /* li r5, 0 */ // 0x806A7A9C
    FUN_80660C30(r4, r3, r5); // bl 0x80660C30
    r0 = *(0x24 + r1); // lwz @ 0x806A7AA4
    r31 = *(0x1c + r1); // lwz @ 0x806A7AA8
    r30 = *(0x18 + r1); // lwz @ 0x806A7AAC
    r29 = *(0x14 + r1); // lwz @ 0x806A7AB0
    return;
}