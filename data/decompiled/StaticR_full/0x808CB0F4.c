/* Function at 0x808CB0F4, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_808CB0F4(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x808CB0FC
    *(0x14 + r1) = r29; // stw @ 0x808CB10C
    *(0x10 + r1) = r28; // stw @ 0x808CB110
    r3 = *(0 + r3); // lwz @ 0x808CB114
    if (==) goto 0x0x808cb178;
    r0 = *(0x1d4 + r3); // lwz @ 0x808CB120
    if (==) goto 0x0x808cb178;
    /* lis r3, 0 */ // 0x808CB12C
    /* li r30, 1 */ // 0x808CB130
    r3 = *(0 + r3); // lwz @ 0x808CB134
    r0 = *(0x26 + r3); // lbz @ 0x808CB138
    if (<) goto 0x0x808cb148;
    r30 = r0;
    /* li r28, 0 */ // 0x808CB148
    /* li r29, 0 */ // 0x808CB14C
    /* lis r31, 0 */ // 0x808CB150
    /* b 0x808cb170 */ // 0x808CB154
    r3 = *(0 + r31); // lwz @ 0x808CB158
    r0 = *(0x1d4 + r3); // lwz @ 0x808CB15C
    r3 = r0 + r29; // 0x808CB160
    FUN_8087ADA4(); // bl 0x8087ADA4
    r29 = r29 + 0xc4; // 0x808CB168
    r28 = r28 + 1; // 0x808CB16C
    if (<) goto 0x0x808cb158;
    r0 = *(0x24 + r1); // lwz @ 0x808CB178
    r31 = *(0x1c + r1); // lwz @ 0x808CB17C
    r30 = *(0x18 + r1); // lwz @ 0x808CB180
    r29 = *(0x14 + r1); // lwz @ 0x808CB184
    r28 = *(0x10 + r1); // lwz @ 0x808CB188
    return;
}