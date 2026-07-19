/* Function at 0x8087E8E0, size=44 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8087E8E0(int r3, int r4)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xa8 + r1) = r30; // stw @ 0x8087E8F0
    r30 = r3;
    r4 = r30;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* li r3, 8 */ // 0x8087E904
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
}