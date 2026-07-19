/* Function at 0x806E9298, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806E9298(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806E92A0
    /* li r5, 0x7f */ // 0x806E92A4
    *(0x24 + r1) = r0; // stw @ 0x806E92A8
    *(0x1c + r1) = r31; // stw @ 0x806E92AC
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806E92B4
    /* lis r30, 0 */ // 0x806E92B8
    r3 = r30 + 0; // 0x806E92BC
    FUN_805E3430(r3); // bl 0x805E3430
}