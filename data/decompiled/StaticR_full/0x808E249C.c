/* Function at 0x808E249C, size=132 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_808E249C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r27 */
    /* stmw r27, 0x2c(r1) */ // 0x808E24A8
    r28 = r3;
    r29 = r4;
    r30 = r5;
    /* li r31, 0x1a */ // 0x808E24B8
    *(0x1c + r3) = r4; // stw @ 0x808E24BC
    r6 = *(0x44 + r3); // lwz @ 0x808E24C0
    *(4 + r6) = r5; // stw @ 0x808E24C4
    r3 = *(4 + r3); // lwz @ 0x808E24C8
    r3 = *(0x414 + r3); // lwz @ 0x808E24CC
    FUN_805EF474(); // bl 0x805EF474
    r3 = *(4 + r28); // lwz @ 0x808E24D4
    /* li r27, 0 */ // 0x808E24D8
    *(0x414 + r3) = r27; // stw @ 0x808E24DC
    r3 = *(4 + r28); // lwz @ 0x808E24E0
    r3 = *(0x43c + r3); // lwz @ 0x808E24E4
    FUN_805EF474(); // bl 0x805EF474
    r3 = *(4 + r28); // lwz @ 0x808E24EC
    *(0x43c + r3) = r27; // stw @ 0x808E24F0
    r3 = *(0x50 + r28); // lwz @ 0x808E24F4
    if (==) goto 0x0x808e2508;
    FUN_805EF474(); // bl 0x805EF474
    *(0x50 + r28) = r27; // stw @ 0x808E2504
    /* lis r3, 0 */ // 0x808E2508
    /* li r4, 1 */ // 0x808E250C
    r3 = *(0 + r3); // lwz @ 0x808E2510
    FUN_80647724(r3, r4); // bl 0x80647724
    r27 = r3;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}