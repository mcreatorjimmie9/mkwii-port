/* Function at 0x807347AC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807347AC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807347BC
    r30 = r3;
    r31 = *(0x24c + r3); // lwz @ 0x807347C4
    if (==) goto 0x0x80734838;
    r3 = r31 + 0x74; // 0x807347D0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807347e8;
    /* li r3, 0 */ // 0x807347E0
    /* b 0x807347ec */ // 0x807347E4
    r3 = *(0xc + r3); // lwz @ 0x807347E8
}