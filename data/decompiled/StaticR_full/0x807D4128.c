/* Function at 0x807D4128, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807D4128(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807D413C
    r29 = r3;
    r12 = *(0x34 + r3); // lwz @ 0x807D4144
    r4 = *(0x38 + r3); // lwz @ 0x807D4148
    r12 = *(0xc + r12); // lwz @ 0x807D414C
    r30 = *(0 + r4); // lwz @ 0x807D4150
    /* mtctr r12 */ // 0x807D4154
    /* bctrl  */ // 0x807D4158
    /* lis r3, 0 */ // 0x807D415C
    r4 = *(0x50 + r29); // lwz @ 0x807D4160
    /* lfs f1, 0(r3) */ // 0x807D4164
    /* lis r31, 0 */ // 0x807D4168
    /* stfs f1, 8(r4) */ // 0x807D416C
    /* li r0, 0 */ // 0x807D4170
    /* lfs f0, 0(r31) */ // 0x807D4174
    r3 = r30;
    /* stfs f1, 4(r4) */ // 0x807D417C
    /* stfs f1, 0(r4) */ // 0x807D4180
    /* stfs f1, 0xc(r4) */ // 0x807D4184
    /* stfs f1, 0x10(r4) */ // 0x807D4188
    /* stfs f0, 0x14(r4) */ // 0x807D418C
    /* stfs f1, 0x18(r4) */ // 0x807D4190
    /* stfs f1, 0x20(r4) */ // 0x807D4194
    *(0x24 + r4) = r0; // stb @ 0x807D4198
    *(0x25 + r4) = r0; // stb @ 0x807D419C
    *(0x26 + r4) = r0; // stb @ 0x807D41A0
    *(0x27 + r4) = r0; // stb @ 0x807D41A4
    *(0x28 + r4) = r0; // stb @ 0x807D41A8
    FUN_8061DFF8(); // bl 0x8061DFF8
    /* lis r4, 0 */ // 0x807D41B0
    /* lfs f1, 0x20(r3) */ // 0x807D41B4
    /* lfs f0, 0(r4) */ // 0x807D41B8
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807D41BC
    if (<=) goto 0x0x807d41d8;
    /* lis r4, 0 */ // 0x807D41C4
    r3 = *(0x50 + r29); // lwz @ 0x807D41C8
    /* lfs f0, 0(r4) */ // 0x807D41CC
    /* stfs f0, 0x14(r3) */ // 0x807D41D0
    /* b 0x807d41e4 */ // 0x807D41D4
    r3 = *(0x50 + r29); // lwz @ 0x807D41D8
    /* lfs f0, 0(r31) */ // 0x807D41DC
    /* stfs f0, 0x14(r3) */ // 0x807D41E0
    r12 = *(0x34 + r29); // lwz @ 0x807D41E4
    r3 = r29;
    r4 = *(0x50 + r29); // lwz @ 0x807D41EC
    r12 = *(0x60 + r12); // lwz @ 0x807D41F0
    /* mtctr r12 */ // 0x807D41F4
    /* bctrl  */ // 0x807D41F8
    r12 = *(0x34 + r29); // lwz @ 0x807D41FC
    r3 = r29;
    r4 = *(0x50 + r29); // lwz @ 0x807D4204
    r12 = *(0x5c + r12); // lwz @ 0x807D4208
    /* mtctr r12 */ // 0x807D420C
    /* bctrl  */ // 0x807D4210
    r0 = *(0x24 + r1); // lwz @ 0x807D4214
    r31 = *(0x1c + r1); // lwz @ 0x807D4218
    r30 = *(0x18 + r1); // lwz @ 0x807D421C
    r29 = *(0x14 + r1); // lwz @ 0x807D4220
    return;
}