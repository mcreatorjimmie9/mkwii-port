/* Function at 0x807E4DA8, size=228 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

void FUN_807E4DA8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r20 */
    /* lis r8, 0 */ // 0x807E4DB0
    /* li r6, 8 */ // 0x807E4DB4
    *(0x84 + r1) = r0; // stw @ 0x807E4DB8
    /* stmw r20, 0x50(r1) */ // 0x807E4DC8
    /* li r28, 0 */ // 0x807E4DCC
    /* lis r29, 0 */ // 0x807E4DD0
    r20 = *(0 + r8); // lwzu @ 0x807E4DD4
    /* lbzu r30, 0(r29) */ // 0x807E4DD8
    r21 = *(4 + r8); // lwz @ 0x807E4DDC
    r22 = *(8 + r8); // lwz @ 0x807E4DE0
    r23 = *(0xc + r8); // lwz @ 0x807E4DE4
    r24 = *(0x10 + r8); // lwz @ 0x807E4DE8
    r25 = *(0x14 + r8); // lwz @ 0x807E4DEC
    r26 = *(0x18 + r8); // lwz @ 0x807E4DF0
    r27 = *(0x1c + r8); // lwz @ 0x807E4DF4
    r31 = *(1 + r29); // lbz @ 0x807E4DF8
    r12 = *(2 + r29); // lbz @ 0x807E4DFC
    r11 = *(3 + r29); // lbz @ 0x807E4E00
    r10 = *(4 + r29); // lbz @ 0x807E4E04
    r9 = *(5 + r29); // lbz @ 0x807E4E08
    r8 = *(6 + r29); // lbz @ 0x807E4E0C
    r0 = *(7 + r29); // lbz @ 0x807E4E10
    *(0x30 + r1) = r20; // stw @ 0x807E4E14
    *(0x34 + r1) = r21; // stw @ 0x807E4E18
    *(0x38 + r1) = r22; // stw @ 0x807E4E1C
    *(0x3c + r1) = r23; // stw @ 0x807E4E20
    *(0x40 + r1) = r24; // stw @ 0x807E4E24
    *(0x44 + r1) = r25; // stw @ 0x807E4E28
    *(0x48 + r1) = r26; // stw @ 0x807E4E2C
    *(0x4c + r1) = r27; // stw @ 0x807E4E30
    *(0x10 + r1) = r28; // stw @ 0x807E4E34
    *(0x14 + r1) = r28; // stw @ 0x807E4E38
    *(0x18 + r1) = r28; // stw @ 0x807E4E3C
    *(0x1c + r1) = r28; // stw @ 0x807E4E40
    *(0x20 + r1) = r28; // stw @ 0x807E4E44
    *(0x24 + r1) = r28; // stw @ 0x807E4E48
    *(0x28 + r1) = r28; // stw @ 0x807E4E4C
    *(0x2c + r1) = r28; // stw @ 0x807E4E50
    *(8 + r1) = r30; // stb @ 0x807E4E54
    *(9 + r1) = r31; // stb @ 0x807E4E58
    *(0xa + r1) = r12; // stb @ 0x807E4E5C
    *(0xb + r1) = r11; // stb @ 0x807E4E60
    *(0xc + r1) = r10; // stb @ 0x807E4E64
    *(0xd + r1) = r9; // stb @ 0x807E4E68
    *(0xe + r1) = r8; // stb @ 0x807E4E6C
    *(0xf + r1) = r0; // stb @ 0x807E4E70
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x84 + r1); // lwz @ 0x807E4E7C
    return;
}