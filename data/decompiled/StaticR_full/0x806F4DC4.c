/* Function at 0x806F4DC4, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806F4DC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0xc */ // 0x806F4DCC
    *(0x14 + r1) = r0; // stw @ 0x806F4DD0
    /* li r0, 0 */ // 0x806F4DD4
    *(0xc + r1) = r31; // stw @ 0x806F4DD8
    r31 = r3;
    *(0 + r3) = r0; // stb @ 0x806F4DE0
    *(0x9e0 + r3) = r0; // stw @ 0x806F4DE4
    *(0x9e4 + r3) = r0; // stw @ 0x806F4DE8
    *(0x9e8 + r3) = r0; // stw @ 0x806F4DEC
    /* li r3, 2 */ // 0x806F4DF0
    FUN_805E3430(r3); // bl 0x805E3430
}