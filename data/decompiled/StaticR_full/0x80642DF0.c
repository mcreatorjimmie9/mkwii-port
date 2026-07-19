/* Function at 0x80642DF0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80642DF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80642E00
    r30 = r3;
    r31 = *(0x7a + r3); // lbz @ 0x80642E08
    FUN_8061ECBC(); // bl 0x8061ECBC
    *(0x56 + r3) = r31; // stb @ 0x80642E10
    r3 = r30;
    /* li r4, 0xa */ // 0x80642E18
    FUN_8061F070(r3, r4); // bl 0x8061F070
    r0 = *(0x14 + r1); // lwz @ 0x80642E20
    r31 = *(0xc + r1); // lwz @ 0x80642E24
    r30 = *(8 + r1); // lwz @ 0x80642E28
    return;
}