/* Function at 0x807A42D0, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807A42D0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r0 = r3;
    *(0x1c + r1) = r31; // stw @ 0x807A42E4
    *(0x18 + r1) = r30; // stw @ 0x807A42E8
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x807A42F0
    r29 = r4;
    r4 = r0;
    FUN_805E3430(r4); // bl 0x805E3430
}