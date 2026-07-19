/* Function at 0x807A3428, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807A3428(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x807A3430
    /* lis r31, 0 */ // 0x807A343C
    r31 = r31 + 0; // 0x807A3440
    *(0x18 + r1) = r30; // stw @ 0x807A3444
    *(0x14 + r1) = r29; // stw @ 0x807A3448
    r0 = *(0 + r3); // lwz @ 0x807A344C
    if (!=) goto 0x0x807a34e8;
    /* li r3, 0x8c0 */ // 0x807A3458
    FUN_805E3430(r3); // bl 0x805E3430
    r30 = r3;
    if (==) goto 0x0x807a34e0;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x807A3470
    r29 = r30 + 0x894; // 0x807A3474
    r4 = r4 + 0; // 0x807A3478
    *(0 + r30) = r4; // stw @ 0x807A347C
    r0 = r4 + 0x10; // 0x807A3480
}