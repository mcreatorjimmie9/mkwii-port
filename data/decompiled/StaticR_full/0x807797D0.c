/* Function at 0x807797D0, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807797D0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807797E0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807797E8
    r30 = r3;
    if (==) goto 0x0x8077980c;
    /* li r4, 0 */ // 0x807797F4
    FUN_807775CC(r4); // bl 0x807775CC
    if (<=) goto 0x0x8077980c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80779810
    r30 = *(8 + r1); // lwz @ 0x80779814
    r0 = *(0x14 + r1); // lwz @ 0x80779818
    return;
}