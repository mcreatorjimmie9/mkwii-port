/* Function at 0x807AB154, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807AB154(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x807AB15C
    *(0x14 + r1) = r29; // stw @ 0x807AB16C
    *(0x10 + r1) = r28; // stw @ 0x807AB170
    r0 = *(0 + r3); // lwz @ 0x807AB174
    if (!=) goto 0x0x807ab1e0;
    /* li r3, 0x100 */ // 0x807AB180
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x807ab1d8;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807AB198
    /* lis r30, 0 */ // 0x807AB19C
    r3 = r3 + 0; // 0x807AB1A0
    *(0 + r29) = r3; // stw @ 0x807AB1A4
    r28 = r29 + 0x10; // 0x807AB1A8
    r30 = r30 + 0; // 0x807AB1AC
}