/* Function at 0x80736FF0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80736FF0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737000
    r30 = r3;
    r31 = *(0x274 + r3); // lwz @ 0x80737008
    if (==) goto 0x0x8073707c;
    r3 = r31 + 0x74; // 0x80737014
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073702c;
    /* li r3, 0 */ // 0x80737024
    /* b 0x80737030 */ // 0x80737028
    r3 = *(0xc + r3); // lwz @ 0x8073702C
}