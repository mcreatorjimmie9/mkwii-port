/* Function at 0x807441D0, size=84 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_807441D0(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x807441D8
    *(0x3c + r1) = r31; // stw @ 0x807441E0
    r31 = r4;
    *(0x38 + r1) = r30; // stw @ 0x807441E8
    r30 = r3;
    r4 = r30;
    FUN_805C70D8(r4, r3); // bl 0x805C70D8
    r4 = r30;
    /* li r5, 1 */ // 0x80744204
    FUN_805C70D8(r3, r4, r3, r5); // bl 0x805C70D8
    r4 = r30;
    /* li r5, 2 */ // 0x80744214
    FUN_805C70D8(r5, r4, r3, r5); // bl 0x805C70D8
    FUN_805E3430(r4, r3, r5, r3); // bl 0x805E3430
}