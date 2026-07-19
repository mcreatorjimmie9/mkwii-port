/* Function at 0x805DCBFC, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805DCBFC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805DCC04
    *(0x24 + r1) = r0; // stw @ 0x805DCC08
    *(0x1c + r1) = r31; // stw @ 0x805DCC0C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x805DCC14
    /* li r4, 1 */ // 0x805DCC18
    r3 = *(0x10 + r3); // lwz @ 0x805DCC1C
    FUN_805F59D8(r4); // bl 0x805F59D8
    /* lfs f0, 0x24(r31) */ // 0x805DCC24
    r7 = *(0x20 + r31); // lbz @ 0x805DCC2C
    /* li r3, 4 */ // 0x805DCC30
    /* fctiwz f0, f0 */ // 0x805DCC34
    r6 = *(0x21 + r31); // lbz @ 0x805DCC38
    r5 = *(0x22 + r31); // lbz @ 0x805DCC3C
    /* stfd f0, 0x10(r1) */ // 0x805DCC40
    r0 = *(0x14 + r1); // lwz @ 0x805DCC44
    *(8 + r1) = r7; // stb @ 0x805DCC48
    *(9 + r1) = r6; // stb @ 0x805DCC4C
    *(0xa + r1) = r5; // stb @ 0x805DCC50
    *(0xb + r1) = r0; // stb @ 0x805DCC54
    r0 = *(8 + r1); // lwz @ 0x805DCC58
    *(0xc + r1) = r0; // stw @ 0x805DCC5C
    FUN_805E3430(); // bl 0x805E3430
}