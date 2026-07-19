/* Function at 0x80810DB0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80810DB0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x80810DB8
    *(0x14 + r1) = r0; // stw @ 0x80810DBC
    *(0xc + r1) = r31; // stw @ 0x80810DC0
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x80810DCC
    r3 = r31;
    r4 = r4 + 0; // 0x80810DD4
    *(0 + r31) = r4; // stw @ 0x80810DD8
    r31 = *(0xc + r1); // lwz @ 0x80810DDC
    r0 = *(0x14 + r1); // lwz @ 0x80810DE0
    return;
}