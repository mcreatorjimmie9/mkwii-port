/* Function at 0x80737140, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80737140(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80737150
    r30 = r3;
    r31 = *(0x1f0 + r3); // lwz @ 0x80737158
    if (==) goto 0x0x807371cc;
    r3 = r31 + 0x74; // 0x80737164
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073717c;
    /* li r3, 0 */ // 0x80737174
    /* b 0x80737180 */ // 0x80737178
    r3 = *(0xc + r3); // lwz @ 0x8073717C
}