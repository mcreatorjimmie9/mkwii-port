/* Function at 0x806C30B8, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806C30B8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C30C8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C30D0
    r30 = r3;
    if (==) goto 0x0x806c313c;
    /* addic. r3, r3, 0x7cc */ // 0x806C30DC
    if (==) goto 0x0x806c30ec;
    /* li r4, 0 */ // 0x806C30E4
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x806C30EC
    /* li r4, -1 */ // 0x806C30F0
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806C30F8
    /* li r4, -1 */ // 0x806C30FC
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x806C3104
    if (==) goto 0x0x806c3114;
    /* li r4, 0 */ // 0x806C310C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806C3114
    /* li r4, -1 */ // 0x806C3118
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806C3124
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c313c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C3140
    r30 = *(8 + r1); // lwz @ 0x806C3144
    r0 = *(0x14 + r1); // lwz @ 0x806C3148
    return;
}