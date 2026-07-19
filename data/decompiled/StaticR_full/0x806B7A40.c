/* Function at 0x806B7A40, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806B7A40(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B7A50
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B7A58
    r30 = r3;
    if (==) goto 0x0x806b7ac4;
    /* addic. r3, r3, 0x7cc */ // 0x806B7A64
    if (==) goto 0x0x806b7a74;
    /* li r4, 0 */ // 0x806B7A6C
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x806B7A74
    /* li r4, -1 */ // 0x806B7A78
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806B7A80
    /* li r4, -1 */ // 0x806B7A84
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x806B7A8C
    if (==) goto 0x0x806b7a9c;
    /* li r4, 0 */ // 0x806B7A94
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806B7A9C
    /* li r4, -1 */ // 0x806B7AA0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806B7AAC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b7ac4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B7AC8
    r30 = *(8 + r1); // lwz @ 0x806B7ACC
    r0 = *(0x14 + r1); // lwz @ 0x806B7AD0
    return;
}