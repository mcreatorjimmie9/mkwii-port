/* Function at 0x805B3150, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B3150(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x805B3158
    /* li r5, 0xc */ // 0x805B315C
    *(0x14 + r1) = r0; // stw @ 0x805B3160
    *(0xc + r1) = r31; // stw @ 0x805B3164
    *(8 + r1) = r30; // stw @ 0x805B3168
    r30 = r3;
    r3 = r3 + 0x4120; // 0x805B3170
    FUN_805E3430(r3); // bl 0x805E3430
}