/* Function at 0x807A9818, size=84 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807A9818(int r3, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r30, 0 */ // 0x807A982C
    r30 = r30 + 0; // 0x807A9830
    *(0x14 + r1) = r29; // stw @ 0x807A9834
    r0 = *(0x310 + r30); // lwz @ 0x807A9838
    if (!=) goto 0x0x807a9960;
    /* li r3, 0x10 */ // 0x807A9844
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x807a995c;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807A985C
    r5 = r30 + 0; // 0x807A9860
    r3 = r3 + 0; // 0x807A9864
    *(0 + r29) = r3; // stw @ 0x807A9868
}