/* Function at 0x80780494, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80780494(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807804A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807804AC
    r30 = r3;
    if (==) goto 0x0x807804f4;
    /* lis r4, 0 */ // 0x807804B8
    r4 = r4 + 0; // 0x807804BC
    *(0 + r3) = r4; // stw @ 0x807804C0
    r3 = *(0xb0 + r3); // lwz @ 0x807804C4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x807804CC
    *(0xb0 + r30) = r0; // stw @ 0x807804D0
    r3 = r30;
    /* li r4, 0 */ // 0x807804D8
    *(0xb4 + r30) = r0; // stw @ 0x807804DC
    FUN_807813D8(r3, r4); // bl 0x807813D8
}