/* Function at 0x80839F84, size=44 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_80839F84(int r3, int r4, int r6)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x6c + r1) = r31; // stw @ 0x80839F98
    /* lis r31, 0 */ // 0x80839F9C
    r31 = r31 + 0; // 0x80839FA0
    *(0x68 + r1) = r30; // stw @ 0x80839FA4
    *(0x64 + r1) = r29; // stw @ 0x80839FA8
    r29 = r3;
}