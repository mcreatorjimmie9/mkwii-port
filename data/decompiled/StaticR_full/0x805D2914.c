/* Function at 0x805D2914, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_805D2914(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x805D291C
    *(0x18 + r1) = r30; // stw @ 0x805D2928
    *(0x14 + r1) = r29; // stw @ 0x805D292C
    r0 = *(0 + r3); // lwz @ 0x805D2930
    if (!=) goto 0x0x805d2a1c;
    /* lis r3, 2 */ // 0x805D293C
    r3 = r3 + 0x5008; // 0x805D2940
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x805d2a14;
    /* lis r4, 0 */ // 0x805D2954
    r4 = r4 + 0; // 0x805D2958
    *(0x10 + r3) = r4; // stw @ 0x805D295C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x805D2964
    /* lis r4, 0 */ // 0x805D2968
}