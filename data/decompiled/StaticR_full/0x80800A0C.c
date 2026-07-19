/* Function at 0x80800A0C, size=48 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80800A0C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    /* li r4, 0 */ // 0x80800A24
    *(0x14 + r1) = r29; // stw @ 0x80800A28
    r29 = r3;
    /* b 0x80800a44 */ // 0x80800A30
    r0 = *(4 + r3); // lwz @ 0x80800A34
}