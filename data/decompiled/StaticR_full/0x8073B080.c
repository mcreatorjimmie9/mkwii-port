/* Function at 0x8073B080, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073B080(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073B090
    r30 = r3;
    r31 = *(0x294 + r3); // lwz @ 0x8073B098
    if (==) goto 0x0x8073b10c;
    r3 = r31 + 0x74; // 0x8073B0A4
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073b0bc;
    /* li r3, 0 */ // 0x8073B0B4
    /* b 0x8073b0c0 */ // 0x8073B0B8
    r3 = *(0xc + r3); // lwz @ 0x8073B0BC
}