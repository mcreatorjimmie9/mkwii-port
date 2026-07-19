/* Function at 0x8079F0D8, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8079F0D8(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8079F0E8
    *(8 + r1) = r30; // stw @ 0x8079F0EC
    r30 = r3;
    /* b 0x8079f124 */ // 0x8079F0F4
    r0 = *(0xc + r3); // lwz @ 0x8079F0F8
    if (<) goto 0x0x8079f124;
}