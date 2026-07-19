/* Function at 0x80739208, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80739208(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80739218
    r30 = r3;
    r31 = *(0x224 + r3); // lwz @ 0x80739220
    if (==) goto 0x0x807392cc;
    r3 = r31 + 0x74; // 0x8073922C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80739244;
    /* li r3, 0 */ // 0x8073923C
    /* b 0x80739248 */ // 0x80739240
    r3 = *(0xc + r3); // lwz @ 0x80739244
}