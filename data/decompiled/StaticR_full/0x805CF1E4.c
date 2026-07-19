/* Function at 0x805CF1E4, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_805CF1E4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x805CF1F8
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x805CF200
    r29 = r3;
    r6 = *(4 + r3); // lwz @ 0x805CF208
    r3 = *(8 + r6); // lwz @ 0x805CF20C
    FUN_805BA42C(); // bl 0x805BA42C
    if (!=) goto 0x0x805cf2a0;
    if (==) goto 0x0x805cf2a0;
    r6 = *(4 + r29); // lwz @ 0x805CF224
    r4 = r31;
    r3 = r29 + 0x398; // 0x805CF22C
    /* li r5, 0x40 */ // 0x805CF230
    r31 = *(8 + r6); // lwz @ 0x805CF234
    *(0x38c + r29) = r31; // stw @ 0x805CF238
    FUN_805E3430(r4, r3, r5); // bl 0x805E3430
    /* lis r4, 0 */ // 0x805CF240
    *(0x3d8 + r29) = r30; // stw @ 0x805CF244
    r3 = *(0x584 + r29); // lwz @ 0x805CF248
    r4 = r4 + 0; // 0x805CF24C
    /* li r5, 1 */ // 0x805CF250
    /* li r6, 0 */ // 0x805CF254
    FUN_805E3430(r4, r5, r6); // bl 0x805E3430
    r3 = r29;
    FUN_805CEC04(r4, r5, r6, r3); // bl 0x805CEC04
}