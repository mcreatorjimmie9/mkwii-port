/* Function at 0x8072CB30, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8072CB30(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8072CB3C
    r31 = r3;
    r0 = *(0xad + r3); // lbz @ 0x8072CB44
    if (==) goto 0x0x8072cbe0;
    r3 = *(0x27c + r3); // lwz @ 0x8072CB50
    r3 = r3 + 0x74; // 0x8072CB54
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8072cb6c;
    /* li r3, 0 */ // 0x8072CB64
}