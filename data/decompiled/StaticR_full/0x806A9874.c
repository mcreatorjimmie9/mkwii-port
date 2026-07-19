/* Function at 0x806A9874, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806A9874(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A9884
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A988C
    r30 = r3;
    if (==) goto 0x0x806a98f8;
    /* addic. r3, r3, 0x7cc */ // 0x806A9898
    if (==) goto 0x0x806a98a8;
    /* li r4, 0 */ // 0x806A98A0
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x806A98A8
    /* li r4, -1 */ // 0x806A98AC
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806A98B4
    /* li r4, -1 */ // 0x806A98B8
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x806A98C0
    if (==) goto 0x0x806a98d0;
    /* li r4, 0 */ // 0x806A98C8
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806A98D0
    /* li r4, -1 */ // 0x806A98D4
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806A98E0
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806a98f8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A98FC
    r30 = *(8 + r1); // lwz @ 0x806A9900
    r0 = *(0x14 + r1); // lwz @ 0x806A9904
    return;
}