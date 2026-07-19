/* Function at 0x80674660, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80674660(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80674670
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80674678
    r30 = r3;
    if (==) goto 0x0x806746f4;
    /* addic. r3, r3, 0xb4c */ // 0x80674684
    if (==) goto 0x0x80674694;
    /* li r4, 0 */ // 0x8067468C
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x8e8 */ // 0x80674694
    if (==) goto 0x0x806746a4;
    /* li r4, 0 */ // 0x8067469C
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x694; // 0x806746A4
    /* li r4, -1 */ // 0x806746A8
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x440; // 0x806746B0
    /* li r4, -1 */ // 0x806746B4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x2cc */ // 0x806746BC
    if (==) goto 0x0x806746cc;
    /* li r4, 0 */ // 0x806746C4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0xa8; // 0x806746CC
    /* li r4, -1 */ // 0x806746D0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806746DC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806746f4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806746F8
    r30 = *(8 + r1); // lwz @ 0x806746FC
    r0 = *(0x14 + r1); // lwz @ 0x80674700
    return;
}