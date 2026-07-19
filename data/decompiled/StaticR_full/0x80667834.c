/* Function at 0x80667834, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80667834(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80667844
    *(0x18 + r1) = r30; // stw @ 0x80667848
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80667850
    r29 = r3;
    r3 = r3 + 0x28; // 0x80667858
    FUN_805E3430(r3); // bl 0x805E3430
}