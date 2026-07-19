/* Function at 0x80652654, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80652654(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80652664
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8065266C
    r30 = r3;
    if (==) goto 0x0x806526dc;
    /* li r4, -1 */ // 0x80652678
    r3 = r3 + 0xa18; // 0x8065267C
    FUN_806498AC(r4, r3); // bl 0x806498AC
    r3 = r30 + 0x7c4; // 0x80652684
    /* li r4, -1 */ // 0x80652688
    FUN_806498AC(r4, r3, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x80652690
    /* li r4, -1 */ // 0x80652694
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    r3 = r30 + 0x404; // 0x8065269C
    /* li r4, -1 */ // 0x806526A0
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x290; // 0x806526A8
    /* li r4, -1 */ // 0x806526AC
    FUN_8066D2B4(r3, r4, r3, r4); // bl 0x8066D2B4
    r3 = r30 + 0x6c; // 0x806526B4
    /* li r4, -1 */ // 0x806526B8
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806526C4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806526dc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806526E0
    r30 = *(8 + r1); // lwz @ 0x806526E4
    r0 = *(0x14 + r1); // lwz @ 0x806526E8
    return;
}