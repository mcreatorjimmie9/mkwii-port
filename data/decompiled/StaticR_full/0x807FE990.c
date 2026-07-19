/* Function at 0x807FE990, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FE990(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 4 */ // 0x807FE998
    *(0x14 + r1) = r0; // stw @ 0x807FE99C
    *(0xc + r1) = r31; // stw @ 0x807FE9A0
    r31 = r3;
    /* li r3, 0x2400 */ // 0x807FE9A8
    r4 = *(0x10 + r31); // lwz @ 0x807FE9AC
    FUN_805E3430(r3); // bl 0x805E3430
}