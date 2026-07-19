/* Function at 0x806B34D8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806B34D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806B34E8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806B34F0
    r30 = r3;
    if (==) goto 0x0x806b3560;
    /* addic. r3, r3, 0x8b8 */ // 0x806B34FC
    if (==) goto 0x0x806b350c;
    /* li r4, 0 */ // 0x806B3504
    FUN_806A0540(r4); // bl 0x806A0540
    if (==) goto 0x0x806b3550;
    r3 = r30 + 0x73c; // 0x806B3514
    /* li r4, -1 */ // 0x806B3518
    FUN_8066CEF8(r3, r4); // bl 0x8066CEF8
    /* lis r4, 0 */ // 0x806B3520
    r3 = r30 + 0x294; // 0x806B3524
    r4 = r4 + 0; // 0x806B3528
    /* li r5, 0x254 */ // 0x806B352C
    /* li r6, 2 */ // 0x806B3530
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x4c; // 0x806B3538
    /* li r4, -1 */ // 0x806B353C
    FUN_8066A1A0(r5, r6, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806B3548
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806b3560;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
}