/* Function at 0x805F2078, size=68 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 1 function(s) */

int FUN_805F2078(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* stmw r24, 0x10(r1) */ // 0x805F2084
    r24 = r3;
    r0 = *(0x54 + r3); // lwz @ 0x805F208C
    if (==) goto 0x0x805f2150;
    r4 = *(0x10 + r24); // lwz @ 0x805F2098
    /* slwi r3, r0, 2 */ // 0x805F209C
    /* li r5, 4 */ // 0x805F20A0
    FUN_805E3430(r5); // bl 0x805E3430
    /* lis r31, 0 */ // 0x805F20A8
    *(0x80 + r24) = r3; // stw @ 0x805F20AC
    r31 = r31 + 0; // 0x805F20B0
    /* li r27, 0 */ // 0x805F20B4
    /* li r30, 0 */ // 0x805F20B8
}