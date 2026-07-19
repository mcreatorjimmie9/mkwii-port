/* Function at 0x80650FA8, size=220 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 12 function(s) */

int FUN_80650FA8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80650FB8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80650FC0
    r30 = r3;
    if (==) goto 0x0x80651068;
    /* li r4, -1 */ // 0x80650FCC
    r3 = r3 + 0x165c; // 0x80650FD0
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    /* addic. r3, r30, 0x13f8 */ // 0x80650FD8
    if (==) goto 0x0x80650fe8;
    /* li r4, 0 */ // 0x80650FE0
    FUN_806498AC(r3, r4); // bl 0x806498AC
    r3 = r30 + 0x11a4; // 0x80650FE8
    /* li r4, -1 */ // 0x80650FEC
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xf50; // 0x80650FF4
    /* li r4, -1 */ // 0x80650FF8
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xcfc; // 0x80651000
    /* li r4, -1 */ // 0x80651004
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xb88; // 0x8065100C
    /* li r4, -1 */ // 0x80651010
    FUN_806A0540(r3, r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x650; // 0x80651018
    /* li r4, -1 */ // 0x8065101C
    FUN_80699284(r3, r4, r3, r4); // bl 0x80699284
    r3 = r30 + 0x404; // 0x80651024
    /* li r4, -1 */ // 0x80651028
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    r3 = r30 + 0x1b8; // 0x80651030
    /* li r4, -1 */ // 0x80651034
    FUN_80660AA0(r3, r4, r3, r4); // bl 0x80660AA0
    /* addic. r3, r30, 0x44 */ // 0x8065103C
    if (==) goto 0x0x8065104c;
    /* li r4, 0 */ // 0x80651044
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x80651050
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x80651068;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8065106C
    r30 = *(8 + r1); // lwz @ 0x80651070
    r0 = *(0x14 + r1); // lwz @ 0x80651074
    return;
}