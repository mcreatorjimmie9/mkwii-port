/* Function at 0x807057D0, size=40 bytes */
/* Stack frame: 608 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807057D0(int r3, int r4)
{
    /* Stack frame: -608(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 3 */ // 0x807057E4
    *(0x258 + r1) = r30; // stw @ 0x807057E8
    r30 = r3;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}