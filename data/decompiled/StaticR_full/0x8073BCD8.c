/* Function at 0x8073BCD8, size=56 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8073BCD8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073BCE4
    r31 = *(0x228 + r3); // lwz @ 0x8073BCE8
    if (==) goto 0x0x8073bd44;
    r3 = r31 + 0x74; // 0x8073BCF4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073bd0c;
    /* li r3, 0 */ // 0x8073BD04
    /* b 0x8073bd10 */ // 0x8073BD08
    r3 = *(0xc + r3); // lwz @ 0x8073BD0C
}