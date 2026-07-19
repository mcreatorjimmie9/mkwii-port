/* Function at 0x807320A0, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807320A0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807320B0
    r30 = r3;
    r31 = *(0x530 + r3); // lwz @ 0x807320B8
    r3 = *(0x60 + r31); // lwz @ 0x807320BC
    if (==) goto 0x0x80732118;
    r3 = r3 + 0x74; // 0x807320C8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x807320e0;
    /* li r3, 0 */ // 0x807320D8
    /* b 0x807320e4 */ // 0x807320DC
    r3 = *(0xc + r3); // lwz @ 0x807320E0
    /* li r0, 0 */ // 0x807320E8
    if (==) goto 0x0x807320f8;
    if (!=) goto 0x0x807320fc;
    /* li r0, 1 */ // 0x807320F8
}