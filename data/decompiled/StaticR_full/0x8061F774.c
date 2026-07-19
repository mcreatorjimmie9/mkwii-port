/* Function at 0x8061F774, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8061F774(int r3, int r4, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8061F77C
    *(0xc + r1) = r31; // stw @ 0x8061F784
    r31 = r4;
    /* li r4, 0 */ // 0x8061F78C
    *(8 + r1) = r30; // stw @ 0x8061F790
    r30 = r3;
    r3 = *(0 + r6); // lwz @ 0x8061F798
    /* li r6, 0 */ // 0x8061F79C
    FUN_805CFD60(r4, r6); // bl 0x805CFD60
    *(0 + r30) = r3; // stw @ 0x8061F7A4
    r0 = r3 + 4; // 0x8061F7A8
    *(0 + r31) = r0; // stw @ 0x8061F7AC
    r31 = *(0xc + r1); // lwz @ 0x8061F7B0
    r30 = *(8 + r1); // lwz @ 0x8061F7B4
    r0 = *(0x14 + r1); // lwz @ 0x8061F7B8
    return;
}