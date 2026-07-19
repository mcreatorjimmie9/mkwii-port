/* Function at 0x8089B900, size=68 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8089B900(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x8089B908
    r6 = r4;
    *(0x24 + r1) = r0; // stw @ 0x8089B910
    *(0x1c + r1) = r31; // stw @ 0x8089B914
    r31 = r3;
    r4 = r31;
    r5 = *(0 + r5); // lwz @ 0x8089B924
    r0 = *(0x20 + r5); // lwz @ 0x8089B928
    /* subf r5, r6, r0 */ // 0x8089B92C
    FUN_8089B708(r4, r3); // bl 0x8089B708
    r3 = r31 + 0x140; // 0x8089B934
    r4 = r31 + 0x110; // 0x8089B938
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}