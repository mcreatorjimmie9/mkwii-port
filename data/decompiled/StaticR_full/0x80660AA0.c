/* Function at 0x80660AA0, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80660AA0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80660AB0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80660AB8
    r30 = r3;
    if (==) goto 0x0x80660aec;
    /* li r4, -1 */ // 0x80660AC4
    r3 = r3 + 0x174; // 0x80660AC8
    FUN_8066D714(r4, r3); // bl 0x8066D714
    r3 = r30;
    /* li r4, 0 */ // 0x80660AD4
    FUN_806A0540(r4, r3, r3, r4); // bl 0x806A0540
    if (<=) goto 0x0x80660aec;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80660AF0
    r30 = *(8 + r1); // lwz @ 0x80660AF4
    r0 = *(0x14 + r1); // lwz @ 0x80660AF8
    return;
}