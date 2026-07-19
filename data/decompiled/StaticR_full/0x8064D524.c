/* Function at 0x8064D524, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8064D524(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8064D534
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064D53C
    r30 = r3;
    if (==) goto 0x0x8064d5a8;
    /* li r4, -1 */ // 0x8064D548
    r3 = r3 + 0x828; // 0x8064D54C
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    r3 = r30 + 0x670; // 0x8064D554
    /* li r4, -1 */ // 0x8064D558
    FUN_8066CEF8(r4, r3, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x40c */ // 0x8064D560
    if (==) goto 0x0x8064d570;
    /* li r4, 0 */ // 0x8064D568
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x1b8; // 0x8064D570
    /* li r4, -1 */ // 0x8064D574
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x44 */ // 0x8064D57C
    if (==) goto 0x0x8064d58c;
    /* li r4, 0 */ // 0x8064D584
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x8064D590
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8064d5a8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8064D5AC
    r30 = *(8 + r1); // lwz @ 0x8064D5B0
    r0 = *(0x14 + r1); // lwz @ 0x8064D5B4
    return;
}