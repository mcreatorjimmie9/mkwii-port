/* Function at 0x8062AB58, size=48 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8062AB58(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8062AB68
    r31 = r31 + 0; // 0x8062AB6C
    *(8 + r1) = r30; // stw @ 0x8062AB70
    /* li r30, 0 */ // 0x8062AB74
    /* b 0x8062ab94 */ // 0x8062AB78
    r12 = *(0 + r30); // lwz @ 0x8062AB7C
    r3 = r30;
    r4 = *(0 + r31); // lbz @ 0x8062AB84
}