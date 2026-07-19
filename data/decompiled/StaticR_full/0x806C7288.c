/* Function at 0x806C7288, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806C7288(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806C7298
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C72A0
    r30 = r3;
    if (==) goto 0x0x806c72c4;
    /* li r4, 0 */ // 0x806C72AC
    FUN_806A0540(r4); // bl 0x806A0540
    if (<=) goto 0x0x806c72c4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806C72C8
    r30 = *(8 + r1); // lwz @ 0x806C72CC
    r0 = *(0x14 + r1); // lwz @ 0x806C72D0
    return;
}