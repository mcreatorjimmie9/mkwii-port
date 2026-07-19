/* Function at 0x806D1938, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806D1938(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D1948
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D1950
    r30 = r3;
    if (==) goto 0x0x806d19bc;
    /* addic. r3, r3, 0x7e0 */ // 0x806D195C
    if (==) goto 0x0x806d196c;
    /* li r4, 0 */ // 0x806D1964
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x58c; // 0x806D196C
    /* li r4, -1 */ // 0x806D1970
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x418; // 0x806D1978
    /* li r4, -1 */ // 0x806D197C
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x2a4 */ // 0x806D1984
    if (==) goto 0x0x806d1994;
    /* li r4, 0 */ // 0x806D198C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x80; // 0x806D1994
    /* li r4, -1 */ // 0x806D1998
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806D19A4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806d19bc;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806D19C0
    r30 = *(8 + r1); // lwz @ 0x806D19C4
    r0 = *(0x14 + r1); // lwz @ 0x806D19C8
    return;
}