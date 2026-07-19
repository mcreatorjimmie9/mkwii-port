/* Function at 0x8089BD04, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8089BD04(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8089BD10
    r31 = r3;
    FUN_8089BA4C(); // bl 0x8089BA4C
    /* lis r3, 0 */ // 0x8089BD1C
    /* li r0, -0x7d0 */ // 0x8089BD20
    r3 = r3 + 0; // 0x8089BD24
    *(0 + r31) = r3; // stw @ 0x8089BD28
    r3 = r31;
    *(0xfc + r31) = r0; // stw @ 0x8089BD30
    *(0x100 + r31) = r0; // stw @ 0x8089BD34
    r31 = *(0xc + r1); // lwz @ 0x8089BD38
    r0 = *(0x14 + r1); // lwz @ 0x8089BD3C
    return;
}