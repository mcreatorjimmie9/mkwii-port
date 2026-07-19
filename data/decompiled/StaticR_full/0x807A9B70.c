/* Function at 0x807A9B70, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_807A9B70(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807A9B84
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807A9B8C
    r29 = r3;
    if (==) goto 0x0x807a9bf4;
    if (==) goto 0x0x807a9be4;
    /* lis r5, 0 */ // 0x807A9B9C
    /* lis r4, 0 */ // 0x807A9BA0
    r5 = r5 + 0; // 0x807A9BA4
    *(0 + r3) = r5; // stw @ 0x807A9BA8
    r31 = *(0 + r4); // lwz @ 0x807A9BAC
    if (==) goto 0x0x807a9bd8;
    /* li r0, 0 */ // 0x807A9BB8
    *(0 + r4) = r0; // stw @ 0x807A9BBC
    if (==) goto 0x0x807a9bd8;
    r3 = r31;
    /* li r4, -1 */ // 0x807A9BC8
    FUN_807A96EC(r3, r4); // bl 0x807A96EC
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x807A9BDC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807a9bf4;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x807A9BF4
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807A9BFC
    r29 = *(0x14 + r1); // lwz @ 0x807A9C00
    r0 = *(0x24 + r1); // lwz @ 0x807A9C04
    return;
}