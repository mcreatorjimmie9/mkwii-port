/* Function at 0x806E87B4, size=60 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806E87B4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x806E87BC
    /* lis r4, 0 */ // 0x806E87C0
    *(0x34 + r1) = r0; // stw @ 0x806E87C4
    r5 = r5 + 0; // 0x806E87C8
    r4 = r4 + 0; // 0x806E87CC
    *(0x2c + r1) = r31; // stw @ 0x806E87D0
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806E87DC
    *(0x24 + r1) = r29; // stw @ 0x806E87E0
    *(0x10 + r1) = r5; // stw @ 0x806E87E4
    *(0x14 + r1) = r4; // stw @ 0x806E87E8
    FUN_805E3430(r3); // bl 0x805E3430
}