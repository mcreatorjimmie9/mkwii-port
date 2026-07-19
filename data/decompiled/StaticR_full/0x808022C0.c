/* Function at 0x808022C0, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808022C0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x808022C8
    *(0x14 + r1) = r0; // stw @ 0x808022CC
    *(0xc + r1) = r31; // stw @ 0x808022D0
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x808022DC
    r3 = r31;
    r4 = r4 + 0; // 0x808022E4
    *(0 + r31) = r4; // stw @ 0x808022E8
    r31 = *(0xc + r1); // lwz @ 0x808022EC
    r0 = *(0x14 + r1); // lwz @ 0x808022F0
    return;
}