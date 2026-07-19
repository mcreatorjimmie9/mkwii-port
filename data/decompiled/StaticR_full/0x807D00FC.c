/* Function at 0x807D00FC, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807D00FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x807D0104
    /* mulli r5, r4, 0x14 */ // 0x807D010C
    /* li r0, 0 */ // 0x807D0110
    *(0xc + r1) = r31; // stw @ 0x807D0114
    r6 = r6 + 0; // 0x807D0118
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D0120
    r30 = r3;
    *(4 + r3) = r0; // stw @ 0x807D0128
    *(0 + r3) = r6; // stw @ 0x807D012C
    *(8 + r3) = r0; // stw @ 0x807D0130
    r3 = r5 + 0x10; // 0x807D0134
    FUN_805E3430(r3); // bl 0x805E3430
}