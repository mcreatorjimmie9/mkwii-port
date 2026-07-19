/* Function at 0x8066C59C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8066C59C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8066C5AC
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8066C5B4
    r30 = r3;
    if (==) goto 0x0x8066c5e8;
    /* li r4, -1 */ // 0x8066C5C0
    r3 = r3 + 0x44; // 0x8066C5C4
    FUN_806688C8(r4, r3); // bl 0x806688C8
    r3 = r30;
    /* li r4, 0 */ // 0x8066C5D0
    FUN_806711C4(r4, r3, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8066c5e8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8066C5EC
    r30 = *(8 + r1); // lwz @ 0x8066C5F0
    r0 = *(0x14 + r1); // lwz @ 0x8066C5F4
    return;
}