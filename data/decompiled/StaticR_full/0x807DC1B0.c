/* Function at 0x807DC1B0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807DC1B0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807DC1B8
    *(0x14 + r1) = r0; // stw @ 0x807DC1BC
    *(0xc + r1) = r31; // stw @ 0x807DC1C0
    r0 = *(0 + r3); // lwz @ 0x807DC1C4
    if (!=) goto 0x0x807dc210;
    /* li r3, 0x40 */ // 0x807DC1D0
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x807dc208;
    /* lis r4, 0 */ // 0x807DC1E4
    r4 = r4 + 0; // 0x807DC1E8
    *(0x10 + r3) = r4; // stw @ 0x807DC1EC
    FUN_805E3430(r4, r4); // bl 0x805E3430
}