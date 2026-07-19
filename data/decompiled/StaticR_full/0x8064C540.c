/* Function at 0x8064C540, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8064C540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8064C550
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8064C558
    r30 = r3;
    if (==) goto 0x0x8064c5d4;
    /* addic. r3, r3, 0xb24 */ // 0x8064C564
    if (==) goto 0x0x8064c574;
    /* li r4, 0 */ // 0x8064C56C
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x8c0 */ // 0x8064C574
    if (==) goto 0x0x8064c584;
    /* li r4, 0 */ // 0x8064C57C
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x66c; // 0x8064C584
    /* li r4, -1 */ // 0x8064C588
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x418; // 0x8064C590
    /* li r4, -1 */ // 0x8064C594
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x2a4 */ // 0x8064C59C
    if (==) goto 0x0x8064c5ac;
    /* li r4, 0 */ // 0x8064C5A4
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x80; // 0x8064C5AC
    /* li r4, -1 */ // 0x8064C5B0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8064C5BC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8064c5d4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8064C5D8
    r30 = *(8 + r1); // lwz @ 0x8064C5DC
    r0 = *(0x14 + r1); // lwz @ 0x8064C5E0
    return;
}