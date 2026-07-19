/* Function at 0x8077E1CC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8077E1CC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8077E1DC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8077E1E4
    r30 = r3;
    if (==) goto 0x0x8077e208;
    /* li r4, 0 */ // 0x8077E1F0
    FUN_80752A44(r4); // bl 0x80752A44
    if (<=) goto 0x0x8077e208;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8077E20C
    r30 = *(8 + r1); // lwz @ 0x8077E210
    r0 = *(0x14 + r1); // lwz @ 0x8077E214
    return;
}