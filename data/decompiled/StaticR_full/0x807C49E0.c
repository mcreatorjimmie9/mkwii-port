/* Function at 0x807C49E0, size=424 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_807C49E0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807C49F8
    *(0x10 + r1) = r28; // stw @ 0x807C49FC
    r28 = *(4 + r3); // lwz @ 0x807C4A00
    if (<=) goto 0x0x807c4b68;
    r6 = *(0x24 + r3); // lwz @ 0x807C4A0C
    if (==) goto 0x0x807c4a2c;
    if (==) goto 0x0x807c4ae0;
    if (==) goto 0x0x807c4b10;
    /* b 0x807c4b68 */ // 0x807C4A28
    if (<=) goto 0x0x807c4ac8;
    /* lis r30, 0 */ // 0x807C4A34
    r4 = r28;
    r3 = *(0 + r30); // lwz @ 0x807C4A3C
    FUN_807C03BC(r4); // bl 0x807C03BC
    r0 = r3 / r28; // 0x807C4A44
    r29 = *(4 + r31); // lwz @ 0x807C4A48
    r0 = r0 * r28; // 0x807C4A4C
    /* subf r0, r0, r3 */ // 0x807C4A50
    /* slwi r0, r0, 2 */ // 0x807C4A54
    r3 = r31 + r0; // 0x807C4A58
    r28 = *(0xc + r3); // lwz @ 0x807C4A5C
    if (==) goto 0x0x807c4a8c;
    r3 = *(0 + r30); // lwz @ 0x807C4A68
    r4 = r29 + -1; // 0x807C4A6C
    FUN_807C03BC(r4); // bl 0x807C03BC
    r4 = *(0x10 + r28); // lwz @ 0x807C4A74
    r4 = r4 + 1; // 0x807C4A78
    r0 = r4 / r29; // 0x807C4A7C
    r0 = r0 * r29; // 0x807C4A80
    /* subf r4, r0, r4 */ // 0x807C4A84
    /* b 0x807c4a9c */ // 0x807C4A88
    r3 = *(0 + r30); // lwz @ 0x807C4A8C
    r4 = r29;
    FUN_807C03BC(r4); // bl 0x807C03BC
    /* li r4, 0 */ // 0x807C4A98
    r3 = r4 + r3; // 0x807C4A9C
    r4 = *(0x18 + r28); // lwz @ 0x807C4AA0
    r0 = r3 / r29; // 0x807C4AA4
    r0 = r0 * r29; // 0x807C4AA8
    /* subf r3, r0, r3 */ // 0x807C4AAC
    /* slwi r0, r3, 2 */ // 0x807C4AB0
    r3 = r31 + r0; // 0x807C4AB4
    r3 = *(0xc + r3); // lwz @ 0x807C4AB8
    r0 = *(0x18 + r3); // lwz @ 0x807C4ABC
    *(0x18 + r28) = r0; // stw @ 0x807C4AC0
    *(0x18 + r3) = r4; // stw @ 0x807C4AC4
    r3 = *(0x24 + r31); // lwz @ 0x807C4AC8
    /* li r0, 0 */ // 0x807C4ACC
    *(0x28 + r31) = r0; // stw @ 0x807C4AD0
    r0 = r3 + 1; // 0x807C4AD4
    *(0x24 + r31) = r0; // stw @ 0x807C4AD8
    /* b 0x807c4b68 */ // 0x807C4ADC
    r5 = *(0x28 + r3); // lwz @ 0x807C4AE0
    /* lis r4, 0 */ // 0x807C4AE4
    r5 = r5 + 1; // 0x807C4AE8
    *(0x28 + r3) = r5; // stw @ 0x807C4AEC
    r0 = *(0 + r4); // lha @ 0x807C4AF0
    if (<=) goto 0x0x807c4b68;
    r0 = r6 + 1; // 0x807C4AFC
    /* li r4, 0 */ // 0x807C4B00
    *(0x28 + r3) = r4; // stw @ 0x807C4B04
    *(0x24 + r3) = r0; // stw @ 0x807C4B08
    /* b 0x807c4b68 */ // 0x807C4B0C
    /* li r6, 0 */ // 0x807C4B10
    /* b 0x807c4b38 */ // 0x807C4B14
    r5 = *(0xc + r31); // lwz @ 0x807C4B18
    r0 = *(0x14 + r5); // lwz @ 0x807C4B1C
    *(0x18 + r5) = r0; // stw @ 0x807C4B20
    if (>=) goto 0x0x807c4b30;
    *(0x18 + r5) = r4; // stw @ 0x807C4B2C
    r31 = r31 + 4; // 0x807C4B30
    r6 = r6 + 1; // 0x807C4B34
    r0 = *(4 + r3); // lwz @ 0x807C4B38
    if (<) goto 0x0x807c4b18;
    r5 = *(0x28 + r3); // lwz @ 0x807C4B44
    /* lis r4, 0 */ // 0x807C4B48
    r5 = r5 + 1; // 0x807C4B4C
    *(0x28 + r3) = r5; // stw @ 0x807C4B50
    r0 = *(0 + r4); // lha @ 0x807C4B54
    if (<=) goto 0x0x807c4b68;
    /* li r0, 0 */ // 0x807C4B60
    *(0x24 + r3) = r0; // stw @ 0x807C4B64
    r0 = *(0x24 + r1); // lwz @ 0x807C4B68
    r31 = *(0x1c + r1); // lwz @ 0x807C4B6C
    r30 = *(0x18 + r1); // lwz @ 0x807C4B70
    r29 = *(0x14 + r1); // lwz @ 0x807C4B74
    r28 = *(0x10 + r1); // lwz @ 0x807C4B78
    return;
}