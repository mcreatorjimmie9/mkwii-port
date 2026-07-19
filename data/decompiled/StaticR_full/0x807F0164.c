/* Function at 0x807F0164, size=52 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807F0164(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807F0170
    r31 = r3;
    FUN_807F7370(); // bl 0x807F7370
    /* lis r3, 0 */ // 0x807F017C
    /* li r0, 0 */ // 0x807F0180
    r3 = r3 + 0; // 0x807F0184
    *(0 + r31) = r3; // stw @ 0x807F0188
    /* li r3, 0x7c */ // 0x807F018C
    *(0xf2 + r31) = r0; // stb @ 0x807F0190
    FUN_805E3430(r3, r3); // bl 0x805E3430
}