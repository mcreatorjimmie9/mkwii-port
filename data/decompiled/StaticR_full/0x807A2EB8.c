/* Function at 0x807A2EB8, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807A2EB8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807A2EC8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807A2ED0
    r30 = r3;
    if (==) goto 0x0x807a2f20;
    if (==) goto 0x0x807a2f10;
    /* lis r5, 0 */ // 0x807A2EE0
    /* lis r4, 0 */ // 0x807A2EE4
    r5 = r5 + 0; // 0x807A2EE8
    *(0 + r3) = r5; // stw @ 0x807A2EEC
    /* lis r3, 0 */ // 0x807A2EF0
    /* li r0, 0 */ // 0x807A2EF4
    *(0 + r4) = r0; // stw @ 0x807A2EF8
    r3 = *(0 + r3); // lwz @ 0x807A2EFC
    FUN_807AABE0(r3); // bl 0x807AABE0
    /* lis r3, 0 */ // 0x807A2F04
    r3 = *(0 + r3); // lwz @ 0x807A2F08
    FUN_8078D17C(r3); // bl 0x8078D17C
    if (<=) goto 0x0x807a2f20;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807A2F24
    r30 = *(8 + r1); // lwz @ 0x807A2F28
    r0 = *(0x14 + r1); // lwz @ 0x807A2F2C
    return;
}