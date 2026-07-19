/* Function at 0x807385B0, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807385B0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807385BC
    r31 = *(0x200 + r3); // lwz @ 0x807385C0
    if (==) goto 0x0x8073861c;
    r3 = r31 + 0x74; // 0x807385CC
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807385e4;
    /* li r3, 0 */ // 0x807385DC
    /* b 0x807385e8 */ // 0x807385E0
    r3 = *(0xc + r3); // lwz @ 0x807385E4
}