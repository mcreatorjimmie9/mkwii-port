/* Function at 0x805D6B94, size=148 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 2 function(s) */

int FUN_805D6B94(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x805D6BA0
    /* lis r28, 1 */ // 0x805D6BA4
    r0 = r28 + -0x7340; // 0x805D6BA8
    r29 = r3;
    r26 = r4 * r0; // 0x805D6BB0
    r30 = r4;
    r24 = r5;
    r25 = r6;
    r27 = *(0x14 + r3); // lwz @ 0x805D6BC0
    r3 = r27 + r26; // 0x805D6BC4
    r31 = r3 + 8; // 0x805D6BC8
    r3 = r31;
    FUN_805D6E64(r3); // bl 0x805D6E64
    r6 = r27 + r26; // 0x805D6BD4
    r0 = *(0 + r24); // lbz @ 0x805D6BD8
    *(0x30 + r6) = r0; // stb @ 0x805D6BDC
    r4 = r25;
    r0 = *(1 + r24); // lbz @ 0x805D6BE4
    r3 = r31 + 0x14; // 0x805D6BE8
    *(0x31 + r6) = r0; // stb @ 0x805D6BEC
    /* li r5, 0x14 */ // 0x805D6BF0
    r0 = *(2 + r24); // lbz @ 0x805D6BF4
    *(0x32 + r6) = r0; // stb @ 0x805D6BF8
    r0 = *(3 + r24); // lbz @ 0x805D6BFC
    *(0x33 + r6) = r0; // stb @ 0x805D6C00
    r0 = *(4 + r24); // lbz @ 0x805D6C04
    *(0x34 + r6) = r0; // stb @ 0x805D6C08
    r0 = *(5 + r24); // lbz @ 0x805D6C0C
    *(0x35 + r6) = r0; // stb @ 0x805D6C10
    r0 = *(6 + r24); // lbz @ 0x805D6C14
    *(0x36 + r6) = r0; // stb @ 0x805D6C18
    r0 = *(7 + r24); // lbz @ 0x805D6C1C
    *(0x37 + r6) = r0; // stb @ 0x805D6C20
    FUN_805E3430(); // bl 0x805E3430
}