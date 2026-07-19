/* Function at 0x806AC5DC, size=192 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 9 function(s) */

int FUN_806AC5DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806AC5EC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806AC5F4
    r30 = r3;
    if (==) goto 0x0x806ac680;
    /* li r4, -1 */ // 0x806AC600
    r3 = r3 + 0xd0c; // 0x806AC604
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    /* addic. r3, r30, 0xb98 */ // 0x806AC60C
    if (==) goto 0x0x806ac61c;
    /* li r4, 0 */ // 0x806AC614
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* addic. r3, r30, 0x934 */ // 0x806AC61C
    if (==) goto 0x0x806ac62c;
    /* li r4, 0 */ // 0x806AC624
    FUN_806498AC(r4, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x6d8 */ // 0x806AC62C
    if (==) goto 0x0x806ac63c;
    /* li r4, 0 */ // 0x806AC634
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x484; // 0x806AC63C
    /* li r4, -1 */ // 0x806AC640
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x230; // 0x806AC648
    /* li r4, -1 */ // 0x806AC64C
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0xbc */ // 0x806AC654
    if (==) goto 0x0x806ac664;
    /* li r4, 0 */ // 0x806AC65C
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30;
    /* li r4, 0 */ // 0x806AC668
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806ac680;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806AC684
    r30 = *(8 + r1); // lwz @ 0x806AC688
    r0 = *(0x14 + r1); // lwz @ 0x806AC68C
    return;
}