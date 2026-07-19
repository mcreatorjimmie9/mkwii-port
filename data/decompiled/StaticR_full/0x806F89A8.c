/* Function at 0x806F89A8, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_806F89A8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* addis r5, r3, 1 */ // 0x806F89B0
    *(0x14 + r1) = r29; // stw @ 0x806F89C0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806F89C8
    r28 = r3;
    r6 = *(0x58 + r3); // lwz @ 0x806F89D0
    r0 = *(-0x7500 + r5); // lwz @ 0x806F89D4
    if (>) goto 0x0x806f89e8;
    r3 = r0;
    /* b 0x806f8a98 */ // 0x806F89E4
    r30 = r6 + -1; // 0x806F89E8
    /* li r31, 0x3f */ // 0x806F89EC
    /* b 0x806f8a8c */ // 0x806F89F0
    r3 = r28;
    r4 = r30;
    FUN_806F8C24(r3, r4, r5); // bl 0x806F8C24
    if (==) goto 0x0x806f8a80;
    r0 = *(0x41f4 + r28); // lwz @ 0x806F8A0C
    if (!=) goto 0x0x806f8a74;
    r3 = r28;
    r4 = r30;
    FUN_806F8D5C(r3, r4, r5); // bl 0x806F8D5C
    if (==) goto 0x0x806f8a74;
    r5 = *(8 + r1); // lwz @ 0x806F8A30
    /* li r3, 0 */ // 0x806F8A34
    /* slwi r0, r5, 1 */ // 0x806F8A38
    r4 = r28 + r0; // 0x806F8A3C
    /* mtctr r31 */ // 0x806F8A40
    r0 = *(0x310 + r4); // lhz @ 0x806F8A44
    if (!=) goto 0x0x806f8a68;
    r3 = r5 + r3; // 0x806F8A50
    r0 = r3 + 1; // 0x806F8A54
    /* slwi r0, r0, 1 */ // 0x806F8A58
    r3 = r28 + r0; // 0x806F8A5C
    r0 = r3 + 0x310; // 0x806F8A60
    /* b 0x806f8a78 */ // 0x806F8A64
    r4 = r4 + 2; // 0x806F8A68
    r3 = r3 + 1; // 0x806F8A6C
    if (counter-- != 0) goto 0x0x806f8a44;
    /* li r0, 0 */ // 0x806F8A74
    if (!=) goto 0x0x806f8a88;
    r3 = r30 + 1; // 0x806F8A80
    /* b 0x806f8a98 */ // 0x806F8A84
    r30 = r30 + -1; // 0x806F8A88
    if (>=) goto 0x0x806f89f4;
    r3 = r29;
    r0 = *(0x24 + r1); // lwz @ 0x806F8A98
    r31 = *(0x1c + r1); // lwz @ 0x806F8A9C
    r30 = *(0x18 + r1); // lwz @ 0x806F8AA0
    r29 = *(0x14 + r1); // lwz @ 0x806F8AA4
    r28 = *(0x10 + r1); // lwz @ 0x806F8AA8
    return;
}