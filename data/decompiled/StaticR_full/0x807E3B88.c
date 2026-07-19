/* Function at 0x807E3B88, size=156 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_807E3B88(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x50 + r1) = r28; // stw @ 0x807E3BA0
    r28 = r3;
    r0 = *(0x10 + r3); // lwz @ 0x807E3BA8
    if (==) goto 0x0x807e3cdc;
    r5 = *(8 + r3); // lwz @ 0x807E3BB4
    /* li r0, 1 */ // 0x807E3BB8
    r3 = *(0x10 + r5); // lwz @ 0x807E3BBC
    r4 = *(4 + r3); // lwz @ 0x807E3BC0
    if (==) goto 0x0x807e3bd8;
    if (==) goto 0x0x807e3bd8;
    /* li r0, 0 */ // 0x807E3BD4
    if (==) goto 0x0x807e3be8;
    r3 = *(0 + r3); // lwz @ 0x807E3BE0
    /* b 0x807e3bec */ // 0x807E3BE4
    /* li r3, 0 */ // 0x807E3BE8
    r30 = *(0xec + r3); // lwz @ 0x807E3BEC
    r0 = *(0xc + r5); // lwz @ 0x807E3BF4
    *(8 + r1) = r0; // stw @ 0x807E3BF8
    r4 = *(0x138 + r28); // lwz @ 0x807E3BFC
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (!=) goto 0x0x807e3c2c;
    /* lis r3, 0 */ // 0x807E3C10
    /* lis r5, 0 */ // 0x807E3C14
    r3 = r3 + 0; // 0x807E3C18
    /* li r4, 0x53 */ // 0x807E3C1C
    r5 = r5 + 0; // 0x807E3C20
}