/* Function at 0x80688298, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80688298(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806882A4
    r31 = r3;
    FUN_808CB2B4(); // bl 0x808CB2B4
    /* lis r3, 0 */ // 0x806882B0
    /* li r0, 0x44e */ // 0x806882B4
    r3 = r3 + 0; // 0x806882B8
    *(0 + r31) = r3; // stw @ 0x806882BC
    r3 = r31;
    *(0x340 + r31) = r0; // stw @ 0x806882C4
    r31 = *(0xc + r1); // lwz @ 0x806882C8
    r0 = *(0x14 + r1); // lwz @ 0x806882CC
    return;
}