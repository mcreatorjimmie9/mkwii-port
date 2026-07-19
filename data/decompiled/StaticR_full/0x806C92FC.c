/* Function at 0x806C92FC, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806C92FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C930C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C9314
    r30 = r3;
    if (==) goto 0x0x806c938c;
    /* addic. r3, r3, 0xa48 */ // 0x806C9320
    if (==) goto 0x0x806c9330;
    /* li r4, 0 */ // 0x806C9328
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x7f4; // 0x806C9330
    /* li r4, -1 */ // 0x806C9334
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x5a0; // 0x806C933C
    /* li r4, -1 */ // 0x806C9340
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x42c; // 0x806C9348
    /* li r4, -1 */ // 0x806C934C
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x2b8 */ // 0x806C9354
    if (==) goto 0x0x806c9364;
    /* li r4, 0 */ // 0x806C935C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x94; // 0x806C9364
    /* li r4, -1 */ // 0x806C9368
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806C9374
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c938c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C9390
    r30 = *(8 + r1); // lwz @ 0x806C9394
    r0 = *(0x14 + r1); // lwz @ 0x806C9398
    return;
}