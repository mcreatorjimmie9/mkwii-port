/* Function at 0x8061D9B4, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8061D9B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x8061D9BC
    *(0xc + r1) = r31; // stw @ 0x8061D9C4
    /* lis r31, 0 */ // 0x8061D9C8
    *(8 + r1) = r30; // stw @ 0x8061D9CC
    r30 = r3;
    /* b 0x8061d9dc */ // 0x8061D9D4
    *(0 + r3) = r30; // stw @ 0x8061D9D8
    r3 = r31 + 0; // 0x8061D9DC
}