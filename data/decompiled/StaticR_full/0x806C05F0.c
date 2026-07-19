/* Function at 0x806C05F0, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806C05F0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C0600
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C0608
    r30 = r3;
    if (==) goto 0x0x806c06a4;
    /* li r4, -1 */ // 0x806C0614
    r3 = r3 + 0x2494; // 0x806C0618
    FUN_8066D714(r4, r3); // bl 0x8066D714
    /* addic. r3, r30, 0x2210 */ // 0x806C0620
    if (==) goto 0x0x806c0630;
    /* li r4, 0 */ // 0x806C0628
    FUN_806498AC(r3, r4); // bl 0x806498AC
    r3 = r30 + 0x209c; // 0x806C0630
    /* li r4, -1 */ // 0x806C0634
    FUN_806A0540(r4, r3, r4); // bl 0x806A0540
    r3 = r30 + 0x1f28; // 0x806C063C
    /* li r4, -1 */ // 0x806C0640
    FUN_806A1428(r3, r4, r3, r4); // bl 0x806A1428
    /* addic. r3, r30, 0x19f0 */ // 0x806C0648
    if (==) goto 0x0x806c0658;
    /* li r4, 0 */ // 0x806C0650
    FUN_80699284(r4, r4); // bl 0x80699284
    /* lis r4, 0 */ // 0x806C0658
    r3 = r30 + 0x468; // 0x806C065C
    r4 = r4 + 0; // 0x806C0660
    /* li r5, 0xac4 */ // 0x806C0664
    /* li r6, 2 */ // 0x806C0668
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x2f4; // 0x806C0670
    /* li r4, -1 */ // 0x806C0674
    FUN_806A1428(r5, r6, r3, r4); // bl 0x806A1428
    r3 = r30 + 0xd0; // 0x806C067C
    /* li r4, -1 */ // 0x806C0680
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
}