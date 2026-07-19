/* Function at 0x807010D0, size=60 bytes */
/* Stack frame: 480 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807010D0(int r3, int r4, int r5)
{
    /* Stack frame: -480(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x807010D8
    r5 = r5 + 0; // 0x807010E0
    *(0x1dc + r1) = r31; // stw @ 0x807010E4
    *(0x1d8 + r1) = r30; // stw @ 0x807010E8
    r30 = r4;
    /* li r4, 0 */ // 0x807010F0
    *(0x1d4 + r1) = r29; // stw @ 0x807010F4
    r29 = r3;
    *(8 + r1) = r5; // stw @ 0x80701100
    /* li r5, 0x1c0 */ // 0x80701104
    FUN_805E3430(r3, r5); // bl 0x805E3430
}