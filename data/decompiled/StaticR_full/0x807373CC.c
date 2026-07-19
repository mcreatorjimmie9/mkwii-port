/* Function at 0x807373CC, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807373CC(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807373DC
    r30 = r3;
    r31 = *(0x1f8 + r3); // lwz @ 0x807373E4
    if (==) goto 0x0x80737458;
    r3 = r31 + 0x74; // 0x807373F0
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80737408;
    /* li r3, 0 */ // 0x80737400
    /* b 0x8073740c */ // 0x80737404
    r3 = *(0xc + r3); // lwz @ 0x80737408
}