/* Function at 0x80708570, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80708570(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80708580
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80708588
    r30 = r3;
    if (==) goto 0x0x807085f4;
    /* addic. r3, r3, 0x7cc */ // 0x80708594
    if (==) goto 0x0x807085a4;
    /* li r4, 0 */ // 0x8070859C
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x807085A4
    /* li r4, -1 */ // 0x807085A8
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x807085B0
    /* li r4, -1 */ // 0x807085B4
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x807085BC
    if (==) goto 0x0x807085cc;
    /* li r4, 0 */ // 0x807085C4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x807085CC
    /* li r4, -1 */ // 0x807085D0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x807085DC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x807085f4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807085F8
    r30 = *(8 + r1); // lwz @ 0x807085FC
    r0 = *(0x14 + r1); // lwz @ 0x80708600
    return;
}