/* Function at 0x8072F034, size=628 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8072F034(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x8072F048
    *(0x34 + r1) = r29; // stw @ 0x8072F04C
    r0 = *(0x152 + r3); // lbz @ 0x8072F050
    if (==) goto 0x0x8072f28c;
    /* lis r4, 0 */ // 0x8072F05C
    r4 = *(0 + r4); // lwz @ 0x8072F060
    r0 = *(0x25 + r4); // lbz @ 0x8072F064
    if (!=) goto 0x0x8072f28c;
    r29 = *(0x724 + r3); // lwz @ 0x8072F070
    if (!=) goto 0x0x8072f080;
    /* b 0x8072f28c */ // 0x8072F07C
    r0 = *(0x138 + r3); // lbz @ 0x8072F080
    if (==) goto 0x0x8072f1c0;
    /* li r4, 0 */ // 0x8072F090
    if (<) goto 0x0x8072f0b0;
    /* lis r3, 0 */ // 0x8072F098
    r3 = r3 + 0; // 0x8072F09C
    r0 = *(4 + r3); // lwz @ 0x8072F0A0
    if (>=) goto 0x0x8072f0b0;
    /* li r4, 1 */ // 0x8072F0AC
    if (!=) goto 0x0x8072f0cc;
    /* lis r3, 0 */ // 0x8072F0B8
    r12 = *(0 + r3); // lwzu @ 0x8072F0BC
    r12 = *(0x18 + r12); // lwz @ 0x8072F0C0
    /* mtctr r12 */ // 0x8072F0C4
    /* bctrl  */ // 0x8072F0C8
    /* lis r30, 0 */ // 0x8072F0CC
    /* slwi r0, r29, 2 */ // 0x8072F0D0
    r30 = r30 + 0; // 0x8072F0D4
    r4 = *(8 + r30); // lwz @ 0x8072F0DC
    /* lwzx r4, r4, r0 */ // 0x8072F0E0
    r4 = *(0x6c + r4); // lwz @ 0x8072F0E4
    r12 = *(0 + r4); // lwz @ 0x8072F0E8
    r12 = *(0x20 + r12); // lwz @ 0x8072F0EC
    /* mtctr r12 */ // 0x8072F0F0
    /* bctrl  */ // 0x8072F0F4
    /* lis r3, 0 */ // 0x8072F0F8
    r3 = *(0 + r3); // lwz @ 0x8072F100
    /* li r5, -1 */ // 0x8072F104
    /* li r6, 1 */ // 0x8072F108
    FUN_805A6434(r3, r4, r5, r6); // bl 0x805A6434
    /* extsh r0, r3 */ // 0x8072F110
    if (!=) goto 0x0x8072f128;
    r3 = r31;
    FUN_8073CCA0(r3); // bl 0x8073CCA0
    /* b 0x8072f28c */ // 0x8072F124
    r29 = *(0x724 + r31); // lwz @ 0x8072F128
    /* li r3, 0 */ // 0x8072F12C
    if (<) goto 0x0x8072f148;
    r0 = *(4 + r30); // lwz @ 0x8072F138
    if (>=) goto 0x0x8072f148;
    /* li r3, 1 */ // 0x8072F144
    if (!=) goto 0x0x8072f164;
    /* lis r3, 0 */ // 0x8072F150
    r12 = *(0 + r3); // lwzu @ 0x8072F154
    r12 = *(0x18 + r12); // lwz @ 0x8072F158
    /* mtctr r12 */ // 0x8072F15C
    /* bctrl  */ // 0x8072F160
    /* lis r4, 0 */ // 0x8072F164
    /* slwi r0, r29, 2 */ // 0x8072F168
    r4 = r4 + 0; // 0x8072F16C
    r4 = *(8 + r4); // lwz @ 0x8072F174
    /* lwzx r4, r4, r0 */ // 0x8072F178
    r4 = *(0x6c + r4); // lwz @ 0x8072F17C
    r12 = *(0 + r4); // lwz @ 0x8072F180
    r12 = *(0x20 + r12); // lwz @ 0x8072F184
    /* mtctr r12 */ // 0x8072F188
    /* bctrl  */ // 0x8072F18C
    /* lfs f0, 0x14(r1) */ // 0x8072F190
    /* stfs f0, 0x9c(r31) */ // 0x8072F194
    r3 = *(0x2d0 + r31); // lwz @ 0x8072F198
    /* lfs f0, 0x18(r1) */ // 0x8072F19C
    /* stfs f0, 0xa0(r31) */ // 0x8072F1A0
    /* lfs f0, 0x1c(r1) */ // 0x8072F1A4
    /* stfs f0, 0xa4(r31) */ // 0x8072F1A8
    r12 = *(0 + r3); // lwz @ 0x8072F1AC
    r12 = *(0x10 + r12); // lwz @ 0x8072F1B0
    /* mtctr r12 */ // 0x8072F1B4
    /* bctrl  */ // 0x8072F1B8
    /* b 0x8072f28c */ // 0x8072F1BC
    /* lis r3, 0 */ // 0x8072F1C0
    r4 = r31 + 0x6d0; // 0x8072F1C4
    r3 = *(0 + r3); // lwz @ 0x8072F1C8
    /* li r5, -1 */ // 0x8072F1CC
    /* li r6, 1 */ // 0x8072F1D0
    FUN_805A6434(r3, r4, r5, r6); // bl 0x805A6434
    /* extsh r0, r3 */ // 0x8072F1D8
    if (!=) goto 0x0x8072f1f0;
    r3 = r31;
    FUN_8073CCA0(r3); // bl 0x8073CCA0
    /* b 0x8072f28c */ // 0x8072F1EC
    r29 = *(0x724 + r31); // lwz @ 0x8072F1F0
    /* li r4, 0 */ // 0x8072F1F4
    if (<) goto 0x0x8072f218;
    /* lis r3, 0 */ // 0x8072F200
    r3 = r3 + 0; // 0x8072F204
    r0 = *(4 + r3); // lwz @ 0x8072F208
    if (>=) goto 0x0x8072f218;
    /* li r4, 1 */ // 0x8072F214
    if (!=) goto 0x0x8072f234;
    /* lis r3, 0 */ // 0x8072F220
    r12 = *(0 + r3); // lwzu @ 0x8072F224
    r12 = *(0x18 + r12); // lwz @ 0x8072F228
    /* mtctr r12 */ // 0x8072F22C
    /* bctrl  */ // 0x8072F230
    /* lis r4, 0 */ // 0x8072F234
    /* slwi r0, r29, 2 */ // 0x8072F238
    r4 = r4 + 0; // 0x8072F23C
    r4 = *(8 + r4); // lwz @ 0x8072F244
    /* lwzx r4, r4, r0 */ // 0x8072F248
    r4 = *(0x6c + r4); // lwz @ 0x8072F24C
    r12 = *(0 + r4); // lwz @ 0x8072F250
    r12 = *(0x20 + r12); // lwz @ 0x8072F254
    /* mtctr r12 */ // 0x8072F258
    /* bctrl  */ // 0x8072F25C
    /* lfs f0, 8(r1) */ // 0x8072F260
    /* stfs f0, 0x9c(r31) */ // 0x8072F264
    r3 = *(0x2d0 + r31); // lwz @ 0x8072F268
    /* lfs f0, 0xc(r1) */ // 0x8072F26C
    /* stfs f0, 0xa0(r31) */ // 0x8072F270
    /* lfs f0, 0x10(r1) */ // 0x8072F274
    /* stfs f0, 0xa4(r31) */ // 0x8072F278
    r12 = *(0 + r3); // lwz @ 0x8072F27C
    r12 = *(0x10 + r12); // lwz @ 0x8072F280
    /* mtctr r12 */ // 0x8072F284
    /* bctrl  */ // 0x8072F288
    r0 = *(0x44 + r1); // lwz @ 0x8072F28C
    r31 = *(0x3c + r1); // lwz @ 0x8072F290
    r30 = *(0x38 + r1); // lwz @ 0x8072F294
    r29 = *(0x34 + r1); // lwz @ 0x8072F298
    return;
}