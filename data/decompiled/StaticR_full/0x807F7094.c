/* Function at 0x807F7094, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807F7094(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x807F709C
    *(0x14 + r1) = r0; // stw @ 0x807F70A0
    *(0xc + r1) = r31; // stw @ 0x807F70A4
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807F70B0
    r3 = r31;
    r4 = r4 + 0; // 0x807F70B8
    *(0 + r31) = r4; // stw @ 0x807F70BC
    r31 = *(0xc + r1); // lwz @ 0x807F70C0
    r0 = *(0x14 + r1); // lwz @ 0x807F70C4
    return;
}