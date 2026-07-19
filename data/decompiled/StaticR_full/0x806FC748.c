/* Function at 0x806FC748, size=44 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806FC748(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x806FC75C
    /* lis r30, 0 */ // 0x806FC760
    *(0x24 + r1) = r29; // stw @ 0x806FC764
    r29 = r4;
    r3 = *(0 + r30); // lwz @ 0x806FC76C
    FUN_805E3430(); // bl 0x805E3430
}