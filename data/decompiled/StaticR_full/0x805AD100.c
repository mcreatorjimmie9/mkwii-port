/* Function at 0x805AD100, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805AD100(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805AD108
    *(0x14 + r1) = r0; // stw @ 0x805AD10C
    *(0xc + r1) = r31; // stw @ 0x805AD110
    r31 = r3;
    r0 = *(0 + r4); // lwz @ 0x805AD118
    if (!=) goto 0x0x805ad144;
    /* li r3, 0x2b4 */ // 0x805AD124
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x805ad13c;
    r4 = r31;
    FUN_805AD2CC(r3, r4); // bl 0x805AD2CC
    /* lis r4, 0 */ // 0x805AD13C
    *(0 + r4) = r3; // stw @ 0x805AD140
    r31 = *(0xc + r1); // lwz @ 0x805AD144
}