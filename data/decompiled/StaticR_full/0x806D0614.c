/* Function at 0x806D0614, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_806D0614(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D0624
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D062C
    r30 = r3;
    if (==) goto 0x0x806d06bc;
    /* addic. r3, r3, 0xfa8 */ // 0x806D0638
    if (==) goto 0x0x806d0648;
    /* li r4, 0 */ // 0x806D0640
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0xd54; // 0x806D0648
    /* li r4, -1 */ // 0x806D064C
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xb00; // 0x806D0654
    /* li r4, -1 */ // 0x806D0658
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x8ac; // 0x806D0660
    /* li r4, -1 */ // 0x806D0664
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x658; // 0x806D066C
    /* li r4, -1 */ // 0x806D0670
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806D0678
    /* li r4, -1 */ // 0x806D067C
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x290 */ // 0x806D0684
    if (==) goto 0x0x806d0694;
    /* li r4, 0 */ // 0x806D068C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806D0694
    /* li r4, -1 */ // 0x806D0698
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806D06A4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d06bc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D06C0
    r30 = *(8 + r1); // lwz @ 0x806D06C4
    r0 = *(0x14 + r1); // lwz @ 0x806D06C8
    return;
}