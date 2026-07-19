/* Function at 0x80755EC0, size=84 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80755EC0(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x80755ED0
    r30 = r3;
    FUN_808A2028(); // bl 0x808A2028
    r4 = r30 + 0xb8; // 0x80755EE0
    r5 = r30 + 0x30; // 0x80755EE4
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r30 = *(8 + r30); // lwz @ 0x80755EEC
    r3 = *(0x10 + r30); // lwz @ 0x80755EF0
    r3 = *(0 + r3); // lwz @ 0x80755EF4
    if (==) goto 0x0x80755f10;
    r3 = r3 + 0xc; // 0x80755F00
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80755f18 */ // 0x80755F0C
}