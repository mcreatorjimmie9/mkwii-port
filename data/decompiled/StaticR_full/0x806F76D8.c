/* Function at 0x806F76D8, size=56 bytes */
/* Stack frame: 10576 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F76D8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -10576(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r7;
    *(0x2948 + r1) = r30; // stw @ 0x806F76F0
    r30 = r5;
    /* li r5, 0x4c */ // 0x806F76F8
    *(0x2944 + r1) = r29; // stw @ 0x806F76FC
    r29 = r4;
    r4 = r6;
    *(0x2940 + r1) = r28; // stw @ 0x806F7708
    FUN_805E3430(r5, r4); // bl 0x805E3430
}