/* Function at 0x806D0C7C, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806D0C7C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D0C8C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D0C94
    r30 = r3;
    if (==) goto 0x0x806d0d00;
    /* addic. r3, r3, 0x7cc */ // 0x806D0CA0
    if (==) goto 0x0x806d0cb0;
    /* li r4, 0 */ // 0x806D0CA8
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x806D0CB0
    /* li r4, -1 */ // 0x806D0CB4
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806D0CBC
    /* li r4, -1 */ // 0x806D0CC0
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x806D0CC8
    if (==) goto 0x0x806d0cd8;
    /* li r4, 0 */ // 0x806D0CD0
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806D0CD8
    /* li r4, -1 */ // 0x806D0CDC
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806D0CE8
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d0d00;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D0D04
    r30 = *(8 + r1); // lwz @ 0x806D0D08
    r0 = *(0x14 + r1); // lwz @ 0x806D0D0C
    return;
}