/* Function at 0x808A0F0C, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808A0F0C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808A0F20
    r4 = *(0xa0 + r3); // lwz @ 0x808A0F24
    if (==) goto 0x0x808a1004;
    r3 = *(0 + r4); // lwz @ 0x808A0F30
    r30 = *(0x28 + r3); // lha @ 0x808A0F34
    if (==) goto 0x0x808a1004;
    r3 = r4;
    FUN_805A3DC0(r3); // bl 0x805A3DC0
    r3 = *(0 + r3); // lwz @ 0x808A0F48
    r0 = *(2 + r3); // lbz @ 0x808A0F4C
    if (!=) goto 0x0x808a0fa4;
    /* li r3, 0x5c */ // 0x808A0F58
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x808a0f9c;
    r4 = *(0xa0 + r31); // lwz @ 0x808A0F68
    /* lis r0, 0x4330 */ // 0x808A0F6C
    /* lis r5, 0 */ // 0x808A0F70
    *(8 + r1) = r0; // stw @ 0x808A0F74
    r6 = *(0 + r4); // lwz @ 0x808A0F78
    r4 = r30;
    /* lfd f1, 0(r5) */ // 0x808A0F80
    r0 = *(0x2a + r6); // lha @ 0x808A0F84
    /* xoris r0, r0, 0x8000 */ // 0x808A0F88
    *(0xc + r1) = r0; // stw @ 0x808A0F8C
    /* lfd f0, 8(r1) */ // 0x808A0F90
    /* fsubs f1, f0, f1 */ // 0x808A0F94
}