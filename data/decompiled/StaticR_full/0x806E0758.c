/* Function at 0x806E0758, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806E0758(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806E0768
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806E0770
    r30 = r3;
    if (==) goto 0x0x806e0794;
    /* li r4, -1 */ // 0x806E077C
    FUN_8066C30C(r4); // bl 0x8066C30C
    if (<=) goto 0x0x806e0794;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806E0798
    r30 = *(8 + r1); // lwz @ 0x806E079C
    r0 = *(0x14 + r1); // lwz @ 0x806E07A0
    return;
}