/* Function at 0x806A9EA0, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806A9EA0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A9EB0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A9EB8
    r30 = r3;
    if (==) goto 0x0x806a9f30;
    /* addic. r3, r3, 0xa34 */ // 0x806A9EC4
    if (==) goto 0x0x806a9ed4;
    /* li r4, 0 */ // 0x806A9ECC
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x7e0; // 0x806A9ED4
    /* li r4, -1 */ // 0x806A9ED8
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x58c; // 0x806A9EE0
    /* li r4, -1 */ // 0x806A9EE4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x418; // 0x806A9EEC
    /* li r4, -1 */ // 0x806A9EF0
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x2a4 */ // 0x806A9EF8
    if (==) goto 0x0x806a9f08;
    /* li r4, 0 */ // 0x806A9F00
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x80; // 0x806A9F08
    /* li r4, -1 */ // 0x806A9F0C
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806A9F18
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806a9f30;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A9F34
    r30 = *(8 + r1); // lwz @ 0x806A9F38
    r0 = *(0x14 + r1); // lwz @ 0x806A9F3C
    return;
}