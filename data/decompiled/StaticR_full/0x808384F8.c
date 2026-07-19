/* Function at 0x808384F8, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808384F8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80838504
    r31 = r3;
    FUN_80828A90(); // bl 0x80828A90
    /* lis r3, 0 */ // 0x80838510
    r4 = *(0xa + r31); // lha @ 0x80838514
    r3 = *(0 + r3); // lwz @ 0x80838518
    r3 = *(0x74 + r3); // lwz @ 0x8083851C
    FUN_8071D08C(r3); // bl 0x8071D08C
    r0 = *(0x14 + r1); // lwz @ 0x80838524
    r31 = *(0xc + r1); // lwz @ 0x80838528
    return;
}