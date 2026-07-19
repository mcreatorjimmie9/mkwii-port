/* Function at 0x80701168, size=56 bytes */
/* Stack frame: 496 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80701168(int r3, int r4, int r5)
{
    /* Stack frame: -496(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x80701170
    /* li r5, 0x1c0 */ // 0x80701174
    r3 = r3 + 0; // 0x8070117C
    *(0x1ec + r1) = r31; // stw @ 0x80701180
    *(0x1e8 + r1) = r30; // stw @ 0x80701184
    *(0x1e4 + r1) = r29; // stw @ 0x80701188
    r29 = r4;
    /* li r4, 0 */ // 0x80701190
    *(0x10 + r1) = r3; // stw @ 0x80701194
    FUN_805E3430(r4, r3); // bl 0x805E3430
}