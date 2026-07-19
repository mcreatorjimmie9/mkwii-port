/* Function at 0x807D80F8, size=44 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807D80F8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807D810C
    /* lis r30, 0 */ // 0x807D8110
    r30 = r30 + 0; // 0x807D8114
    r4 = *(0x1f0 + r3); // lwz @ 0x807D8118
    r3 = *(0 + r4); // lwz @ 0x807D811C
    FUN_8061DA88(); // bl 0x8061DA88
}