/* Function at 0x808F0A48, size=412 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_808F0A48(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r5;
    *(0xd8 + r1) = r30; // stw @ 0x808F0A60
    r30 = r4;
    *(0xd4 + r1) = r29; // stw @ 0x808F0A68
    *(0xd0 + r1) = r28; // stw @ 0x808F0A6C
    FUN_80654ECC(); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x808F0A74
    r5 = *(0 + r3); // lwz @ 0x808F0A78
    r0 = *(0x36 + r5); // lha @ 0x808F0A7C
    if (<) goto 0x0x808f0aa4;
    /* lis r3, 1 */ // 0x808F0A88
    /* clrlwi r4, r0, 0x18 */ // 0x808F0A8C
    r0 = r3 + -0x6c10; // 0x808F0A90
    r0 = r0 * r4; // 0x808F0A94
    r3 = r5 + r0; // 0x808F0A98
    r3 = r3 + 0x38; // 0x808F0A9C
    /* b 0x808f0aa8 */ // 0x808F0AA0
    /* li r3, 0 */ // 0x808F0AA4
    if (==) goto 0x0x808f0ac4;
    if (==) goto 0x0x808f0b44;
    if (==) goto 0x0x808f0b68;
    /* b 0x808f0b88 */ // 0x808F0AC0
    /* lis r29, 0 */ // 0x808F0AC4
    /* li r0, 0 */ // 0x808F0AC8
    *(8 + r1) = r0; // stw @ 0x808F0ACC
    r3 = *(0 + r29); // lwz @ 0x808F0AD0
    *(0xc + r1) = r0; // stw @ 0x808F0AD4
    r3 = *(0 + r3); // lwz @ 0x808F0AD8
    FUN_80685EA4(); // bl 0x80685EA4
    /* li r28, 0 */ // 0x808F0AE0
    r3 = *(0 + r29); // lwz @ 0x808F0AE4
    r4 = r28;
    r3 = *(0 + r3); // lwz @ 0x808F0AEC
    r3 = *(0x404 + r3); // lwz @ 0x808F0AF0
    FUN_80659884(r4); // bl 0x80659884
    if (==) goto 0x0x808f0b34;
    r3 = *(0 + r29); // lwz @ 0x808F0B00
    r4 = r28;
    r3 = *(0 + r3); // lwz @ 0x808F0B08
    r3 = *(0x404 + r3); // lwz @ 0x808F0B0C
    FUN_80659814(r4); // bl 0x80659814
    r5 = *(8 + r1); // lwz @ 0x808F0B14
    r0 = *(0x1c + r3); // lhz @ 0x808F0B18
    r4 = *(0xc + r1); // lwz @ 0x808F0B1C
    r0 = r5 + r0; // 0x808F0B20
    *(8 + r1) = r0; // stw @ 0x808F0B24
    r0 = *(0x1a + r3); // lhz @ 0x808F0B28
    r0 = r4 + r0; // 0x808F0B2C
    *(0xc + r1) = r0; // stw @ 0x808F0B30
    r28 = r28 + 1; // 0x808F0B34
    if (<) goto 0x0x808f0ae4;
    /* b 0x808f0b88 */ // 0x808F0B40
    /* addis r4, r3, 1 */ // 0x808F0B44
    /* lis r3, 2 */ // 0x808F0B48
    r4 = *(-0x6d5c + r4); // lwz @ 0x808F0B4C
    r0 = r3 + -0x7961; // 0x808F0B50
    if (>=) goto 0x0x808f0b60;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F0B60
    /* b 0x808f0b88 */ // 0x808F0B64
    /* addis r4, r3, 1 */ // 0x808F0B68
    /* lis r3, 2 */ // 0x808F0B6C
    r4 = *(-0x6d58 + r4); // lwz @ 0x808F0B70
    r0 = r3 + -0x7961; // 0x808F0B74
    if (>=) goto 0x0x808f0b84;
    r0 = r4;
    *(8 + r1) = r0; // stw @ 0x808F0B84
    if (==) goto 0x0x808f0b94;
    r30 = r30 + 1; // 0x808F0B90
    /* lis r29, 0 */ // 0x808F0B94
    r3 = r31;
    r29 = r29 + 0; // 0x808F0B9C
    r5 = r30 + 0x201c; // 0x808F0BA0
    r4 = r29 + 0x56; // 0x808F0BA4
    /* li r6, 0 */ // 0x808F0BA8
    FUN_806A093C(r3, r5, r4, r6); // bl 0x806A093C
    r3 = r31;
    r4 = r29 + 0x60; // 0x808F0BB4
    r5 = r30 + 0x204e; // 0x808F0BB8
    FUN_806A093C(r3, r4, r5, r6); // bl 0x806A093C
    r0 = *(0xe4 + r1); // lwz @ 0x808F0BC4
    r31 = *(0xdc + r1); // lwz @ 0x808F0BC8
    r30 = *(0xd8 + r1); // lwz @ 0x808F0BCC
    r29 = *(0xd4 + r1); // lwz @ 0x808F0BD0
    r28 = *(0xd0 + r1); // lwz @ 0x808F0BD4
    return;
}