/* Function at 0x806C4C4C, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806C4C4C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C4C5C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C4C64
    r30 = r3;
    if (==) goto 0x0x806c4cd0;
    /* addic. r3, r3, 0x8a4 */ // 0x806C4C70
    if (==) goto 0x0x806c4c80;
    /* li r4, 0 */ // 0x806C4C78
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x650; // 0x806C4C80
    /* li r4, -1 */ // 0x806C4C84
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x806C4C8C
    /* li r4, -1 */ // 0x806C4C90
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    /* addic. r3, r30, 0x290 */ // 0x806C4C98
    if (==) goto 0x0x806c4ca8;
    /* li r4, 0 */ // 0x806C4CA0
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x806C4CA8
    /* li r4, -1 */ // 0x806C4CAC
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806C4CB8
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c4cd0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C4CD4
    r30 = *(8 + r1); // lwz @ 0x806C4CD8
    r0 = *(0x14 + r1); // lwz @ 0x806C4CDC
    return;
}