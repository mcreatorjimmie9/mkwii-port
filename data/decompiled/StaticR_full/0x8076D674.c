/* Function at 0x8076D674, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8076D674(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8076D688
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8076D690
    r29 = r3;
    if (==) goto 0x0x8076d6e8;
    /* lis r5, 0 */ // 0x8076D69C
    /* lis r4, 0 */ // 0x8076D6A0
    r5 = r5 + 0; // 0x8076D6A4
    *(0 + r3) = r5; // stw @ 0x8076D6A8
    r3 = *(0x2c + r3); // lwz @ 0x8076D6AC
    r4 = r4 + 0; // 0x8076D6B0
    FUN_805E3430(r4, r5, r4); // bl 0x805E3430
    /* li r31, 0 */ // 0x8076D6B8
    *(0x2c + r29) = r31; // stw @ 0x8076D6BC
    r3 = *(0x38 + r29); // lwz @ 0x8076D6C0
    FUN_805E3430(r4); // bl 0x805E3430
    *(0x38 + r29) = r31; // stw @ 0x8076D6C8
    r3 = r29;
    /* li r4, 0 */ // 0x8076D6D0
    FUN_8076CA84(r3, r4); // bl 0x8076CA84
}