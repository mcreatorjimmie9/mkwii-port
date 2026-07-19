/* Function at 0x805B960C, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805B960C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805B9620
    /* li r30, 0 */ // 0x805B9624
    *(0x14 + r1) = r29; // stw @ 0x805B9628
    /* li r29, 0 */ // 0x805B962C
    r3 = *(0 + r31); // lbz @ 0x805B9630
    FUN_805E3430(); // bl 0x805E3430
}