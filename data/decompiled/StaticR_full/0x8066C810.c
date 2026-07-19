/* Function at 0x8066C810, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_8066C810(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8066C820
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066C828
    r30 = r3;
    if (==) goto 0x0x8066c888;
    /* li r4, -1 */ // 0x8066C834
    r3 = r3 + 0x490; // 0x8066C838
    FUN_8066D2B4(r4, r3); // bl 0x8066D2B4
    r3 = r30 + 0x31c; // 0x8066C840
    /* li r4, -1 */ // 0x8066C844
    FUN_806A1428(r4, r3, r3, r4); // bl 0x806A1428
    r3 = r30 + 0x1a8; // 0x8066C84C
    /* li r4, -1 */ // 0x8066C850
    FUN_8066D018(r3, r4, r3, r4); // bl 0x8066D018
    if (==) goto 0x0x8066c878;
    r3 = r30 + 0x44; // 0x8066C860
    /* li r4, -1 */ // 0x8066C864
    FUN_806688C8(r3, r4); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x8066C870
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8066c888;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066C88C
    r30 = *(8 + r1); // lwz @ 0x8066C890
    r0 = *(0x14 + r1); // lwz @ 0x8066C894
    return;
}