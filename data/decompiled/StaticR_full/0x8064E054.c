/* Function at 0x8064E054, size=276 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8064E054(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r10, 0 */ // 0x8064E05C
    /* li r6, 0 */ // 0x8064E060
    *(0x1c + r1) = r31; // stw @ 0x8064E068
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x8064E070
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8064E078
    *(0x10 + r1) = r28; // stw @ 0x8064E07C
    /* b 0x8064e0fc */ // 0x8064E080
    r9 = *(4 + r3); // lwz @ 0x8064E084
    /* slwi r7, r12, 2 */ // 0x8064E08C
    r11 = r10;
    /* lwzx r8, r9, r6 */ // 0x8064E094
    /* subf r0, r12, r5 */ // 0x8064E098
    r4 = r9 + r7; // 0x8064E09C
    /* lfs f1, 0x7c(r8) */ // 0x8064E0A0
    /* mtctr r0 */ // 0x8064E0A4
    if (>=) goto 0x0x8064e0d8;
    r5 = *(0 + r4); // lwz @ 0x8064E0B0
    /* lfs f0, 0x7c(r5) */ // 0x8064E0B4
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x8064E0B8
    if (>=) goto 0x0x8064e0c8;
    r11 = r12;
    /* fmr f1, f0 */ // 0x8064E0C4
    r7 = r7 + 4; // 0x8064E0C8
    r4 = r4 + 4; // 0x8064E0CC
    if (counter-- != 0) goto 0x0x8064e0b0;
    if (==) goto 0x0x8064e0f4;
    /* slwi r5, r11, 2 */ // 0x8064E0E0
    /* lwzx r0, r9, r5 */ // 0x8064E0E4
    /* stwx r0, r9, r6 */ // 0x8064E0E8
    r4 = *(4 + r3); // lwz @ 0x8064E0EC
    /* stwx r8, r4, r5 */ // 0x8064E0F0
    r6 = r6 + 4; // 0x8064E0F4
    r5 = *(0x10 + r3); // lwz @ 0x8064E0FC
    r0 = r5 + -1; // 0x8064E100
    if (<) goto 0x0x8064e084;
    /* li r28, 0 */ // 0x8064E10C
    /* li r29, 0 */ // 0x8064E110
    /* b 0x8064e13c */ // 0x8064E114
    r3 = *(4 + r30); // lwz @ 0x8064E118
    r4 = r31;
    /* lwzx r3, r3, r29 */ // 0x8064E120
    r12 = *(0 + r3); // lwz @ 0x8064E124
    r12 = *(0x14 + r12); // lwz @ 0x8064E128
    /* mtctr r12 */ // 0x8064E12C
    /* bctrl  */ // 0x8064E130
    r29 = r29 + 4; // 0x8064E134
    r28 = r28 + 1; // 0x8064E138
    r0 = *(0x10 + r30); // lwz @ 0x8064E13C
    if (<) goto 0x0x8064e118;
    r0 = *(0x24 + r1); // lwz @ 0x8064E148
    r31 = *(0x1c + r1); // lwz @ 0x8064E14C
    r30 = *(0x18 + r1); // lwz @ 0x8064E150
    r29 = *(0x14 + r1); // lwz @ 0x8064E154
    r28 = *(0x10 + r1); // lwz @ 0x8064E158
    return;
}