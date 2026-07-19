/* Function at 0x806AD764, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806AD764(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AD774
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AD77C
    r30 = r3;
    if (==) goto 0x0x806ad808;
    /* li r4, -1 */ // 0x806AD788
    r3 = r3 + 0xd0c; // 0x806AD78C
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    /* addic. r3, r30, 0xb98 */ // 0x806AD794
    if (==) goto 0x0x806ad7a4;
    /* li r4, 0 */ // 0x806AD79C
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x934 */ // 0x806AD7A4
    if (==) goto 0x0x806ad7b4;
    /* li r4, 0 */ // 0x806AD7AC
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x6e0; // 0x806AD7B4
    /* li r4, -1 */ // 0x806AD7B8
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x48c; // 0x806AD7C0
    /* li r4, -1 */ // 0x806AD7C4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x230 */ // 0x806AD7CC
    if (==) goto 0x0x806ad7dc;
    /* li r4, 0 */ // 0x806AD7D4
    FUN_806498AC(r4, r4); // bl 0x806498AC
    /* addic. r3, r30, 0xbc */ // 0x806AD7DC
    if (==) goto 0x0x806ad7ec;
    /* li r4, 0 */ // 0x806AD7E4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x806AD7F0
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806ad808;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AD80C
    r30 = *(8 + r1); // lwz @ 0x806AD810
    r0 = *(0x14 + r1); // lwz @ 0x806AD814
    return;
}