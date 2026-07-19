/* Function at 0x806C8A84, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 11 function(s) */

int FUN_806C8A84(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C8A94
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C8A9C
    r30 = r3;
    if (==) goto 0x0x806c8b40;
    /* li r4, -1 */ // 0x806C8AA8
    r3 = r3 + 0x109c; // 0x806C8AAC
    FUN_8066D714(r4, r3); // bl 0x8066D714
    /* addic. r3, r30, 0xf28 */ // 0x806C8AB4
    if (==) goto 0x0x806c8ac4;
    /* li r4, 0 */ // 0x806C8ABC
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0xcc4 */ // 0x806C8AC4
    if (==) goto 0x0x806c8ad4;
    /* li r4, 0 */ // 0x806C8ACC
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0xa70; // 0x806C8AD4
    /* li r4, -1 */ // 0x806C8AD8
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x81c; // 0x806C8AE0
    /* li r4, -1 */ // 0x806C8AE4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x5c8; // 0x806C8AEC
    /* li r4, -1 */ // 0x806C8AF0
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x454 */ // 0x806C8AF8
    if (==) goto 0x0x806c8b08;
    /* li r4, 0 */ // 0x806C8B00
    FUN_806A0540(r4, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x2e0 */ // 0x806C8B08
    if (==) goto 0x0x806c8b18;
    /* li r4, 0 */ // 0x806C8B10
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0xbc; // 0x806C8B18
    /* li r4, -1 */ // 0x806C8B1C
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806C8B28
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806c8b40;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C8B44
    r30 = *(8 + r1); // lwz @ 0x806C8B48
    r0 = *(0x14 + r1); // lwz @ 0x806C8B4C
    return;
}