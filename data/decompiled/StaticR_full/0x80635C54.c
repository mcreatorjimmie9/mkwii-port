/* Function at 0x80635C54, size=44 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80635C54(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x80635C64
    r31 = r31 + 0; // 0x80635C68
    *(0x18 + r1) = r30; // stw @ 0x80635C6C
    *(0x14 + r1) = r29; // stw @ 0x80635C70
    r29 = r3;
    r3 = *(0x2c + r3); // lwz @ 0x80635C78
    FUN_8061DA88(); // bl 0x8061DA88
}