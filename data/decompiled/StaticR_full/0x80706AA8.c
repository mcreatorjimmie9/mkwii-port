/* Function at 0x80706AA8, size=56 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80706AA8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x80706AB0
    *(0x28 + r1) = r30; // stw @ 0x80706ABC
    r30 = r6;
    *(0x24 + r1) = r29; // stw @ 0x80706AC4
    r29 = r5;
    /* li r5, 0xc */ // 0x80706ACC
    *(0x20 + r1) = r28; // stw @ 0x80706AD0
    r28 = r3;
    FUN_805E3430(r5, r3); // bl 0x805E3430
}