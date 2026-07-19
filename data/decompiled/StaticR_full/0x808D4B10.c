/* Function at 0x808D4B10, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808D4B10(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808D4B28
    *(0x10 + r1) = r28; // stw @ 0x808D4B2C
    r0 = *(0xc + r3); // lbz @ 0x808D4B30
    if (==) goto 0x0x808d4bb0;
    r4 = *(8 + r3); // lwz @ 0x808D4B3C
    r3 = *(0x10 + r3); // lwz @ 0x808D4B40
    r0 = *(0x20 + r4); // lwz @ 0x808D4B44
    /* subf r3, r3, r0 */ // 0x808D4B48
    /* slwi r0, r3, 3 */ // 0x808D4B4C
    /* subf r30, r3, r0 */ // 0x808D4B50
    if (<=) goto 0x0x808d4b60;
    /* li r30, 0xff */ // 0x808D4B5C
    if (>=) goto 0x0x808d4b6c;
    /* li r30, 1 */ // 0x808D4B68
    /* li r28, 0 */ // 0x808D4B6C
    /* li r29, 0 */ // 0x808D4B70
    /* b 0x808d4b8c */ // 0x808D4B74
    r3 = *(4 + r31); // lwz @ 0x808D4B78
    r28 = r28 + 1; // 0x808D4B7C
    /* lwzx r3, r3, r29 */ // 0x808D4B80
    r29 = r29 + 4; // 0x808D4B84
    *(0xb8 + r3) = r30; // stb @ 0x808D4B88
    r12 = *(0 + r31); // lwz @ 0x808D4B8C
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808D4B94
    /* mtctr r12 */ // 0x808D4B98
    /* bctrl  */ // 0x808D4B9C
    /* clrlwi r0, r3, 0x18 */ // 0x808D4BA0
    if (<) goto 0x0x808d4b78;
    /* b 0x808d4bf4 */ // 0x808D4BAC
    /* li r28, 0 */ // 0x808D4BB0
    /* li r29, 0 */ // 0x808D4BB4
    /* li r30, 1 */ // 0x808D4BB8
    /* b 0x808d4bd4 */ // 0x808D4BBC
    r3 = *(4 + r31); // lwz @ 0x808D4BC0
    r28 = r28 + 1; // 0x808D4BC4
    /* lwzx r3, r3, r29 */ // 0x808D4BC8
    r29 = r29 + 4; // 0x808D4BCC
    *(0xb8 + r3) = r30; // stb @ 0x808D4BD0
    r12 = *(0 + r31); // lwz @ 0x808D4BD4
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808D4BDC
    /* mtctr r12 */ // 0x808D4BE0
    /* bctrl  */ // 0x808D4BE4
    /* clrlwi r0, r3, 0x18 */ // 0x808D4BE8
    if (<) goto 0x0x808d4bc0;
    r0 = *(0x24 + r1); // lwz @ 0x808D4BF4
    r31 = *(0x1c + r1); // lwz @ 0x808D4BF8
    r30 = *(0x18 + r1); // lwz @ 0x808D4BFC
    r29 = *(0x14 + r1); // lwz @ 0x808D4C00
    r28 = *(0x10 + r1); // lwz @ 0x808D4C04
    return;
}