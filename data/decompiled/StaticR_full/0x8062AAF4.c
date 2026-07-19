/* Function at 0x8062AAF4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8062AAF4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8062AB04
    *(8 + r1) = r30; // stw @ 0x8062AB08
    /* li r30, 0 */ // 0x8062AB0C
    /* b 0x8062ab28 */ // 0x8062AB10
    r12 = *(0 + r30); // lwz @ 0x8062AB14
    r3 = r30;
    r12 = *(0xc + r12); // lwz @ 0x8062AB1C
}