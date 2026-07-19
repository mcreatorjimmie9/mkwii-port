/* Function at 0x80667DCC, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80667DCC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80667DDC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80667DE4
    r30 = r3;
    if (==) goto 0x0x80667e28;
    r0 = *(8 + r3); // lhz @ 0x80667DF0
    /* lis r4, 0 */ // 0x80667DF4
    r4 = r4 + 0; // 0x80667DF8
    *(0 + r3) = r4; // stw @ 0x80667DFC
    if (==) goto 0x0x80667e18;
    /* lis r4, 0 */ // 0x80667E08
    r3 = *(4 + r3); // lwz @ 0x80667E0C
    r4 = r4 + 0; // 0x80667E10
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80667e28;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80667E2C
    r30 = *(8 + r1); // lwz @ 0x80667E30
    r0 = *(0x14 + r1); // lwz @ 0x80667E34
    return;
}