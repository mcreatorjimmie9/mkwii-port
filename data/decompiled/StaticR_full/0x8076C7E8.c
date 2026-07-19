/* Function at 0x8076C7E8, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8076C7E8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x8076C7F0
    r6 = *(0 + r5); // lwz @ 0x8076C7F4
    *(0x24 + r1) = r0; // stw @ 0x8076C7F8
    r7 = r7 + 0; // 0x8076C7FC
    *(0x1c + r1) = r31; // stw @ 0x8076C800
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8076C808
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8076C810
    *(4 + r3) = r4; // sth @ 0x8076C814
    *(0 + r3) = r7; // stw @ 0x8076C818
    r0 = *(0 + r6); // lhz @ 0x8076C81C
    *(6 + r3) = r0; // sth @ 0x8076C820
    r29 = *(0 + r6); // lhz @ 0x8076C824
    *(8 + r3) = r29; // sth @ 0x8076C828
    /* slwi r4, r29, 4 */ // 0x8076C82C
    r5 = *(3 + r6); // lbz @ 0x8076C830
    r0 = r5 + -1; // 0x8076C834
    /* cntlzw r0, r0 */ // 0x8076C838
    /* srwi r0, r0, 5 */ // 0x8076C83C
    *(0xa + r3) = r0; // stb @ 0x8076C840
    r0 = *(2 + r6); // lbz @ 0x8076C844
    *(0x24 + r3) = r0; // stw @ 0x8076C848
    r3 = r4 + 0x10; // 0x8076C84C
    FUN_805E3430(r3); // bl 0x805E3430
}