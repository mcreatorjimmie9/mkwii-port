/* Function at 0x807C3B00, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_807C3B00(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807C3B18
    *(0x10 + r1) = r28; // stw @ 0x807C3B1C
    r29 = *(4 + r3); // lwz @ 0x807C3B20
    if (<=) goto 0x0x807c3bc0;
    /* lis r30, 0 */ // 0x807C3B2C
    r4 = r29;
    r3 = *(0 + r30); // lwz @ 0x807C3B34
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r29; // 0x807C3B3C
    r28 = *(4 + r31); // lwz @ 0x807C3B40
    r0 = r0 * r29; // 0x807C3B44
    /* subf r0, r0, r3 */ // 0x807C3B48
    /* slwi r0, r0, 2 */ // 0x807C3B4C
    r3 = r31 + r0; // 0x807C3B50
    r29 = *(0xc + r3); // lwz @ 0x807C3B54
    if (==) goto 0x0x807c3b84;
    r3 = *(0 + r30); // lwz @ 0x807C3B60
    r4 = r28 + -1; // 0x807C3B64
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r29); // lwz @ 0x807C3B6C
    r4 = r4 + 1; // 0x807C3B70
    r0 = r4 / r28; // 0x807C3B74
    r0 = r0 * r28; // 0x807C3B78
    /* subf r4, r0, r4 */ // 0x807C3B7C
    /* b 0x807c3b94 */ // 0x807C3B80
    r3 = *(0 + r30); // lwz @ 0x807C3B84
    r4 = r28;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C3B90
    r3 = r4 + r3; // 0x807C3B94
    r4 = *(0x18 + r29); // lwz @ 0x807C3B98
    r0 = r3 / r28; // 0x807C3B9C
    r0 = r0 * r28; // 0x807C3BA0
    /* subf r3, r0, r3 */ // 0x807C3BA4
    /* slwi r0, r3, 2 */ // 0x807C3BA8
    r3 = r31 + r0; // 0x807C3BAC
    r3 = *(0xc + r3); // lwz @ 0x807C3BB0
    r0 = *(0x18 + r3); // lwz @ 0x807C3BB4
    *(0x18 + r29) = r0; // stw @ 0x807C3BB8
    *(0x18 + r3) = r4; // stw @ 0x807C3BBC
    r0 = *(0x24 + r1); // lwz @ 0x807C3BC0
    r31 = *(0x1c + r1); // lwz @ 0x807C3BC4
    r30 = *(0x18 + r1); // lwz @ 0x807C3BC8
    r29 = *(0x14 + r1); // lwz @ 0x807C3BCC
    r28 = *(0x10 + r1); // lwz @ 0x807C3BD0
    return;
}