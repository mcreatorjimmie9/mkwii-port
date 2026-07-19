/* Function at 0x806B6A40, size=416 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806B6A40(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x806B6A48
    /* lis r5, 0 */ // 0x806B6A4C
    *(0xd8 + r1) = r30; // stw @ 0x806B6A58
    *(0xd4 + r1) = r29; // stw @ 0x806B6A5C
    *(0xd0 + r1) = r28; // stw @ 0x806B6A60
    r28 = r3;
    r6 = *(0 + r4); // lwz @ 0x806B6A68
    r5 = *(0 + r5); // lwz @ 0x806B6A6C
    r4 = *(0 + r6); // lwz @ 0x806B6A70
    r0 = *(0 + r4); // lwz @ 0x806B6A74
    if (<) goto 0x0x806b6a88;
    if (<=) goto 0x0x806b6a9c;
    if (<) goto 0x0x806b6bc0;
    if (<=) goto 0x0x806b6ae8;
    /* b 0x806b6bc0 */ // 0x806B6A98
    r0 = *(0x176d + r3); // lbz @ 0x806B6A9C
    if (==) goto 0x0x806b6abc;
    if (==) goto 0x0x806b6ac4;
    if (==) goto 0x0x806b6acc;
    /* b 0x806b6ad4 */ // 0x806B6AB8
    /* li r4, 0x4c3 */ // 0x806B6ABC
    /* b 0x806b6ad8 */ // 0x806B6AC0
    /* li r4, 0x4c4 */ // 0x806B6AC4
    /* b 0x806b6ad8 */ // 0x806B6AC8
    /* li r4, 0x4c5 */ // 0x806B6ACC
    /* b 0x806b6ad8 */ // 0x806B6AD0
    /* li r4, 0x4c6 */ // 0x806B6AD4
    /* li r5, 0 */ // 0x806B6AD8
    r3 = r3 + 0x488; // 0x806B6ADC
    FUN_806A0A34(r4, r4, r5, r3); // bl 0x806A0A34
    /* b 0x806b6bc0 */ // 0x806B6AE4
    r3 = *(0x98 + r6); // lwz @ 0x806B6AE8
    /* li r30, 0 */ // 0x806B6AEC
    /* li r29, 0 */ // 0x806B6AF0
    r0 = *(0x70 + r3); // lwz @ 0x806B6AF4
    if (==) goto 0x0x806b6b0c;
    if (==) goto 0x0x806b6b44;
    /* b 0x806b6b7c */ // 0x806B6B08
    r0 = *(0xb74 + r5); // lwz @ 0x806B6B0C
    if (<) goto 0x0x806b6b20;
    if (<=) goto 0x0x806b6b2c;
    if (==) goto 0x0x806b6b38;
    /* b 0x806b6b84 */ // 0x806B6B28
    /* li r30, 0x4c0 */ // 0x806B6B2C
    /* li r29, 0x534 */ // 0x806B6B30
    /* b 0x806b6b84 */ // 0x806B6B34
    /* li r30, 0x4c8 */ // 0x806B6B38
    /* li r29, 0x535 */ // 0x806B6B3C
    /* b 0x806b6b84 */ // 0x806B6B40
    r0 = *(0xb74 + r5); // lwz @ 0x806B6B44
    if (<) goto 0x0x806b6b58;
    if (<=) goto 0x0x806b6b64;
    if (==) goto 0x0x806b6b70;
    /* b 0x806b6b84 */ // 0x806B6B60
    /* li r30, 0x4c1 */ // 0x806B6B64
    /* li r29, 0x535 */ // 0x806B6B68
    /* b 0x806b6b84 */ // 0x806B6B6C
    /* li r30, 0x4c7 */ // 0x806B6B70
    /* li r29, 0x534 */ // 0x806B6B74
    /* b 0x806b6b84 */ // 0x806B6B78
    /* li r29, 0x4c2 */ // 0x806B6B7C
    /* li r30, 0 */ // 0x806B6B80
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r31, 0 */ // 0x806B6B8C
    *(0x2c + r1) = r30; // stw @ 0x806B6B90
    r31 = r31 + 0; // 0x806B6B94
    r5 = r29;
    r3 = r28 + 0x488; // 0x806B6B9C
    r4 = r31 + 0x259; // 0x806B6BA4
    FUN_806A093C(r5, r3, r6, r4); // bl 0x806A093C
    r5 = r30;
    r3 = r28 + 0x488; // 0x806B6BB0
    r4 = r31 + 0x261; // 0x806B6BB4
    /* li r6, 0 */ // 0x806B6BB8
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x806B6BC0
    r31 = *(0xdc + r1); // lwz @ 0x806B6BC4
    r30 = *(0xd8 + r1); // lwz @ 0x806B6BC8
    r29 = *(0xd4 + r1); // lwz @ 0x806B6BCC
    r28 = *(0xd0 + r1); // lwz @ 0x806B6BD0
    return;
}