/* Function at 0x80788BA0, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80788BA0(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x80788BA8
    *(0x14 + r1) = r29; // stw @ 0x80788BB8
    *(0x10 + r1) = r28; // stw @ 0x80788BBC
    r0 = *(0 + r3); // lwz @ 0x80788BC0
    if (!=) goto 0x0x80788c20;
    /* li r3, 0xc4 */ // 0x80788BCC
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x80788c18;
    FUN_805E3430(r3); // bl 0x805E3430
    /* lis r3, 0 */ // 0x80788BE4
    /* lis r30, 0 */ // 0x80788BE8
    r3 = r3 + 0; // 0x80788BEC
    *(0 + r29) = r3; // stw @ 0x80788BF0
    r28 = r29 + 0x10; // 0x80788BF4
    r30 = r30 + 0; // 0x80788BF8
}