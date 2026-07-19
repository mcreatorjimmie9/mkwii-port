/* Function at 0x805F39A4, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805F39A4(int r3, int r4, int r5, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r7 = *(0 + r5); // lwz @ 0x805F39AC
    /* lis r8, 0 */ // 0x805F39B0
    *(0x14 + r1) = r0; // stw @ 0x805F39B4
    r8 = r8 + 0; // 0x805F39B8
    /* li r5, 0 */ // 0x805F39BC
    /* li r0, 1 */ // 0x805F39C0
    *(0xc + r1) = r31; // stw @ 0x805F39C4
    r31 = r3;
    *(0 + r3) = r8; // stw @ 0x805F39CC
    *(4 + r3) = r7; // stw @ 0x805F39D0
    *(8 + r3) = r6; // stw @ 0x805F39D4
    *(0xc + r3) = r5; // stw @ 0x805F39D8
    *(0x18 + r3) = r0; // stw @ 0x805F39DC
    r3 = r4 + 0x44; // 0x805F39E0
    r4 = r31;
    FUN_805E3430(r3, r4); // bl 0x805E3430
}