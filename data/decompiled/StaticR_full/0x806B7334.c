/* Function at 0x806B7334, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806B7334(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B7344
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B734C
    r30 = r3;
    if (==) goto 0x0x806b73c4;
    /* addic. r3, r3, 0xa48 */ // 0x806B7358
    if (==) goto 0x0x806b7368;
    /* li r4, 0 */ // 0x806B7360
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x7f4; // 0x806B7368
    /* li r4, -1 */ // 0x806B736C
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x5a0; // 0x806B7374
    /* li r4, -1 */ // 0x806B7378
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x42c; // 0x806B7380
    /* li r4, -1 */ // 0x806B7384
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x2b8 */ // 0x806B738C
    if (==) goto 0x0x806b739c;
    /* li r4, 0 */ // 0x806B7394
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x94; // 0x806B739C
    /* li r4, -1 */ // 0x806B73A0
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806B73AC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b73c4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806B73C8
    r30 = *(8 + r1); // lwz @ 0x806B73CC
    r0 = *(0x14 + r1); // lwz @ 0x806B73D0
    return;
}