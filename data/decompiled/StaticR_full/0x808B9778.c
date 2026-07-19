/* Function at 0x808B9778, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_808B9778(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808B9788
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808B9790
    r30 = r3;
    if (==) goto 0x0x808b97e8;
    /* li r4, -1 */ // 0x808B979C
    r3 = r3 + 0x6c8; // 0x808B97A0
    FUN_806A0540(r4, r3); // bl 0x806A0540
    r3 = r30 + 0x430; // 0x808B97A8
    /* li r4, -1 */ // 0x808B97AC
    FUN_8066A1A0(r4, r3, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808b97d8;
    /* addic. r3, r30, 0x54 */ // 0x808B97BC
    if (==) goto 0x0x808b97cc;
    /* li r4, 0 */ // 0x808B97C4
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808B97D0
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808b97e8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808B97EC
    r30 = *(8 + r1); // lwz @ 0x808B97F0
    r0 = *(0x14 + r1); // lwz @ 0x808B97F4
    return;
}