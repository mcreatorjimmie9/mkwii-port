/* Function at 0x8081C6D8, size=36 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_8081C6D8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8081C6EC
    r30 = r3;
    *(8 + r1) = r5; // sth @ 0x8081C6F4
}