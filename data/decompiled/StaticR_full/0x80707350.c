/* Function at 0x80707350, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80707350(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80707360
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80707368
    r30 = r3;
    if (==) goto 0x0x807073d4;
    /* addic. r3, r3, 0x7cc */ // 0x80707374
    if (==) goto 0x0x80707384;
    /* li r4, 0 */ // 0x8070737C
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x578; // 0x80707384
    /* li r4, -1 */ // 0x80707388
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x404; // 0x80707390
    /* li r4, -1 */ // 0x80707394
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x8070739C
    if (==) goto 0x0x807073ac;
    /* li r4, 0 */ // 0x807073A4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6c; // 0x807073AC
    /* li r4, -1 */ // 0x807073B0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x807073BC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x807073d4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807073D8
    r30 = *(8 + r1); // lwz @ 0x807073DC
    r0 = *(0x14 + r1); // lwz @ 0x807073E0
    return;
}