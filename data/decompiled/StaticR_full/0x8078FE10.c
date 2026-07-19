/* Function at 0x8078FE10, size=96 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8078FE10(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8078FE24
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8078FE2C
    r29 = r3;
    r0 = *(0xb + r3); // lbz @ 0x8078FE34
    if (!=) goto 0x0x8078feb0;
    /* lis r3, 0 */ // 0x8078FE40
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x8078FE48
    r3 = r3 + 0x78; // 0x8078FE4C
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* li r4, 0 */ // 0x8078FE54
    /* li r0, 1 */ // 0x8078FE58
    *(4 + r29) = r30; // stw @ 0x8078FE5C
    r3 = r29;
    *(8 + r29) = r31; // sth @ 0x8078FE64
    *(0xa + r29) = r4; // stb @ 0x8078FE68
    *(0xb + r29) = r0; // stb @ 0x8078FE6C
}