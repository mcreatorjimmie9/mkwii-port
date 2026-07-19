/* Function at 0x80750634, size=80 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80750634(int r3, int r4, int r5)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x48 + r1) = r30; // stw @ 0x80750644
    r30 = r3;
    r4 = r30 + 0xb8; // 0x80750650
    r5 = r30 + 0x30; // 0x80750654
    FUN_805A4464(r3, r4, r5); // bl 0x805A4464
    r30 = *(8 + r30); // lwz @ 0x8075065C
    r3 = *(0x10 + r30); // lwz @ 0x80750660
    r3 = *(0 + r3); // lwz @ 0x80750664
    if (==) goto 0x0x80750680;
    r3 = r3 + 0xc; // 0x80750670
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x80750688 */ // 0x8075067C
}