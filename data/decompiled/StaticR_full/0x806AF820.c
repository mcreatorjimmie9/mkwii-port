/* Function at 0x806AF820, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806AF820(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AF830
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AF838
    r30 = r3;
    if (==) goto 0x0x806af890;
    /* li r4, -1 */ // 0x806AF844
    r3 = r3 + 0x65c; // 0x806AF848
    FUN_806498AC(r4, r3); // bl 0x806498AC
    r3 = r30 + 0x408; // 0x806AF850
    /* li r4, -1 */ // 0x806AF854
    FUN_806498AC(r4, r3, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x294; // 0x806AF85C
    /* li r4, -1 */ // 0x806AF860
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x70; // 0x806AF868
    /* li r4, -1 */ // 0x806AF86C
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806AF878
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806af890;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AF894
    r30 = *(8 + r1); // lwz @ 0x806AF898
    r0 = *(0x14 + r1); // lwz @ 0x806AF89C
    return;
}