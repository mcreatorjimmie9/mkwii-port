/* Function at 0x807FB8C4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807FB8C4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r5;
    /* li r5, 0 */ // 0x807FB8D8
    *(8 + r1) = r30; // stw @ 0x807FB8DC
    r30 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807FB8E8
    *(0xbc + r30) = r31; // stw @ 0x807FB8EC
    r4 = r4 + 0; // 0x807FB8F0
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x807FB8F8
    r31 = *(0xc + r1); // lwz @ 0x807FB8FC
    r30 = *(8 + r1); // lwz @ 0x807FB900
    r0 = *(0x14 + r1); // lwz @ 0x807FB904
    return;
}