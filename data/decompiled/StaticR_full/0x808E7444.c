/* Function at 0x808E7444, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808E7444(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808E7454
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E745C
    r30 = r3;
    if (==) goto 0x0x808e74a8;
    /* li r4, -1 */ // 0x808E7468
    r3 = r3 + 0x430; // 0x808E746C
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    if (==) goto 0x0x808e7498;
    /* addic. r3, r30, 0x54 */ // 0x808E747C
    if (==) goto 0x0x808e748c;
    /* li r4, 0 */ // 0x808E7484
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808E7490
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e74a8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E74AC
    r30 = *(8 + r1); // lwz @ 0x808E74B0
    r0 = *(0x14 + r1); // lwz @ 0x808E74B4
    return;
}