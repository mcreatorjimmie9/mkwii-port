/* Function at 0x8065C494, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8065C494(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8065C4A0
    r31 = r3;
    FUN_806497A4(); // bl 0x806497A4
    /* lis r4, 0 */ // 0x8065C4AC
    r3 = r31;
    r4 = r4 + 0; // 0x8065C4B4
    *(0 + r31) = r4; // stw @ 0x8065C4B8
    r31 = *(0xc + r1); // lwz @ 0x8065C4BC
    r0 = *(0x14 + r1); // lwz @ 0x8065C4C0
    return;
}