/* Function at 0x806F4900, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806F4900(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806F4908
    /* li r5, 0xc0 */ // 0x806F490C
    *(0x14 + r1) = r0; // stw @ 0x806F4910
    /* li r0, 0 */ // 0x806F4914
    *(0xc + r1) = r31; // stw @ 0x806F4918
    *(8 + r1) = r30; // stw @ 0x806F491C
    r30 = r3;
    *(0 + r3) = r0; // stb @ 0x806F4924
    *(0x9e0 + r3) = r0; // stw @ 0x806F4928
    *(0x9e4 + r3) = r0; // stw @ 0x806F492C
    *(0x9e8 + r3) = r0; // stw @ 0x806F4930
    r3 = r3 + 8; // 0x806F4934
    FUN_805E3430(r3); // bl 0x805E3430
}