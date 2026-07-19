/* Function at 0x80665C78, size=40 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80665C78(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80665C80
    *(0x14 + r1) = r0; // stw @ 0x80665C84
    r4 = r4 + 0; // 0x80665C88
    *(0xc + r1) = r31; // stw @ 0x80665C8C
    r31 = r3;
    *(0 + r3) = r4; // stw @ 0x80665C94
    r3 = r3 + 4; // 0x80665C98
    FUN_805E3430(r4, r3); // bl 0x805E3430
}