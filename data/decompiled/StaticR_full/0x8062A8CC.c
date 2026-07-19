/* Function at 0x8062A8CC, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062A8CC(int r3, int r4, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8062A8D4
    *(0x14 + r1) = r0; // stw @ 0x8062A8DC
    r7 = r7 + 0; // 0x8062A8E0
    *(0xc + r1) = r31; // stw @ 0x8062A8E4
    r31 = r3;
    *(0 + r3) = r7; // stw @ 0x8062A8EC
    *(4 + r3) = r5; // stw @ 0x8062A8F0
    *(8 + r3) = r4; // stw @ 0x8062A8F4
    if (==) goto 0x0x8062a90c;
    /* lis r3, 0 */ // 0x8062A8FC
    r4 = r31;
    r3 = r3 + 0; // 0x8062A904
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r31;
    r31 = *(0xc + r1); // lwz @ 0x8062A910
    r0 = *(0x14 + r1); // lwz @ 0x8062A914
    return;
}