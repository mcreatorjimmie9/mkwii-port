/* Function at 0x805FC890, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805FC890(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x805FC898
    *(0x14 + r1) = r0; // stw @ 0x805FC89C
    *(0xc + r1) = r31; // stw @ 0x805FC8A0
    r31 = r3;
    FUN_806200C4(r5); // bl 0x806200C4
    /* lis r4, 0 */ // 0x805FC8AC
    r3 = r31;
    r4 = r4 + 0; // 0x805FC8B4
    *(0xc + r31) = r4; // stw @ 0x805FC8B8
    r31 = *(0xc + r1); // lwz @ 0x805FC8BC
    r0 = *(0x14 + r1); // lwz @ 0x805FC8C0
    return;
}