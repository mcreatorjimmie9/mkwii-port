/* Function at 0x80834C4C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80834C4C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80834C58
    r31 = r3;
    FUN_80838554(); // bl 0x80838554
    /* lis r3, 0 */ // 0x80834C64
    r4 = *(0xa + r31); // lha @ 0x80834C68
    r3 = *(0 + r3); // lwz @ 0x80834C6C
    r3 = *(0x74 + r3); // lwz @ 0x80834C70
    FUN_8071D0B8(r3); // bl 0x8071D0B8
    r0 = *(0x14 + r1); // lwz @ 0x80834C78
    r31 = *(0xc + r1); // lwz @ 0x80834C7C
    return;
}