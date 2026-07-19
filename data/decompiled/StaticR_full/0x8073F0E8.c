/* Function at 0x8073F0E8, size=664 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8073F0E8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x8073F100
    *(0x10 + r1) = r28; // stw @ 0x8073F104
    r28 = r4;
    r5 = *(0x124 + r3); // lwz @ 0x8073F10C
    if (!=) goto 0x0x8073f124;
    r0 = *(0x338 + r3); // lwz @ 0x8073F118
    if (==) goto 0x0x8073f360;
    if (!=) goto 0x0x8073f138;
    r0 = *(0x328 + r3); // lwz @ 0x8073F12C
    if (==) goto 0x0x8073f360;
    if (!=) goto 0x0x8073f260;
    r0 = r4 + 8; // 0x8073F140
    /* slwi r0, r0, 2 */ // 0x8073F144
    r30 = r3 + r0; // 0x8073F148
    r3 = *(0x318 + r30); // lwz @ 0x8073F14C
    r12 = *(0 + r3); // lwz @ 0x8073F150
    r12 = *(0x14 + r12); // lwz @ 0x8073F154
    /* mtctr r12 */ // 0x8073F158
    /* bctrl  */ // 0x8073F15C
    r3 = *(0x318 + r30); // lwz @ 0x8073F160
    r4 = r31 + 0x6f4; // 0x8073F164
    r12 = *(0 + r3); // lwz @ 0x8073F168
    r12 = *(0x78 + r12); // lwz @ 0x8073F16C
    /* mtctr r12 */ // 0x8073F170
    /* bctrl  */ // 0x8073F174
    r3 = *(0x318 + r30); // lwz @ 0x8073F178
    /* mulli r0, r28, 0xc */ // 0x8073F17C
    r12 = *(0 + r3); // lwz @ 0x8073F180
    r4 = r31 + r0; // 0x8073F184
    r12 = *(0x74 + r12); // lwz @ 0x8073F188
    r29 = r4 + 0x7bc; // 0x8073F18C
    r4 = r29;
    /* mtctr r12 */ // 0x8073F194
    /* bctrl  */ // 0x8073F198
    r0 = *(0xb0 + r31); // lbz @ 0x8073F19C
    if (==) goto 0x0x8073f1c0;
    r3 = *(0x318 + r30); // lwz @ 0x8073F1A8
    r4 = r31 + 0x72c; // 0x8073F1AC
    r12 = *(0 + r3); // lwz @ 0x8073F1B0
    r12 = *(0x70 + r12); // lwz @ 0x8073F1B4
    /* mtctr r12 */ // 0x8073F1B8
    /* bctrl  */ // 0x8073F1BC
    r3 = *(0x318 + r30); // lwz @ 0x8073F1C0
    r12 = *(0 + r3); // lwz @ 0x8073F1C4
    r12 = *(0x80 + r12); // lwz @ 0x8073F1C8
    /* mtctr r12 */ // 0x8073F1CC
    /* bctrl  */ // 0x8073F1D0
    r0 = r28 + 0xa; // 0x8073F1D4
    /* slwi r0, r0, 2 */ // 0x8073F1D8
    r30 = r31 + r0; // 0x8073F1DC
    r3 = *(0x318 + r30); // lwz @ 0x8073F1E0
    r12 = *(0 + r3); // lwz @ 0x8073F1E4
    r12 = *(0x14 + r12); // lwz @ 0x8073F1E8
    /* mtctr r12 */ // 0x8073F1EC
    /* bctrl  */ // 0x8073F1F0
    r3 = *(0x318 + r30); // lwz @ 0x8073F1F4
    r4 = r31 + 0x6f4; // 0x8073F1F8
    r12 = *(0 + r3); // lwz @ 0x8073F1FC
    r12 = *(0x78 + r12); // lwz @ 0x8073F200
    /* mtctr r12 */ // 0x8073F204
    /* bctrl  */ // 0x8073F208
    r3 = *(0x318 + r30); // lwz @ 0x8073F20C
    r4 = r29;
    r12 = *(0 + r3); // lwz @ 0x8073F214
    r12 = *(0x74 + r12); // lwz @ 0x8073F218
    /* mtctr r12 */ // 0x8073F21C
    /* bctrl  */ // 0x8073F220
    r0 = *(0xb0 + r31); // lbz @ 0x8073F224
    if (==) goto 0x0x8073f248;
    r3 = *(0x318 + r30); // lwz @ 0x8073F230
    r4 = r31 + 0x72c; // 0x8073F234
    r12 = *(0 + r3); // lwz @ 0x8073F238
    r12 = *(0x70 + r12); // lwz @ 0x8073F23C
    /* mtctr r12 */ // 0x8073F240
    /* bctrl  */ // 0x8073F244
    r3 = *(0x318 + r30); // lwz @ 0x8073F248
    r12 = *(0 + r3); // lwz @ 0x8073F24C
    r12 = *(0x80 + r12); // lwz @ 0x8073F250
    /* mtctr r12 */ // 0x8073F254
    /* bctrl  */ // 0x8073F258
    /* b 0x8073f360 */ // 0x8073F25C
    if (!=) goto 0x0x8073f360;
    r3 = *(0x328 + r3); // lwz @ 0x8073F268
    r12 = *(0 + r3); // lwz @ 0x8073F26C
    r12 = *(0x14 + r12); // lwz @ 0x8073F270
    /* mtctr r12 */ // 0x8073F274
    /* bctrl  */ // 0x8073F278
    r3 = *(0x328 + r31); // lwz @ 0x8073F27C
    r4 = r31 + 0x6f4; // 0x8073F280
    r12 = *(0 + r3); // lwz @ 0x8073F284
    r12 = *(0x78 + r12); // lwz @ 0x8073F288
    /* mtctr r12 */ // 0x8073F28C
    /* bctrl  */ // 0x8073F290
    r3 = *(0x328 + r31); // lwz @ 0x8073F294
    r4 = r31 + 0x7c8; // 0x8073F298
    r12 = *(0 + r3); // lwz @ 0x8073F29C
    r12 = *(0x74 + r12); // lwz @ 0x8073F2A0
    /* mtctr r12 */ // 0x8073F2A4
    /* bctrl  */ // 0x8073F2A8
    r0 = *(0xb0 + r31); // lbz @ 0x8073F2AC
    if (==) goto 0x0x8073f2d0;
    r3 = *(0x328 + r31); // lwz @ 0x8073F2B8
    r4 = r31 + 0x72c; // 0x8073F2BC
    r12 = *(0 + r3); // lwz @ 0x8073F2C0
    r12 = *(0x70 + r12); // lwz @ 0x8073F2C4
    /* mtctr r12 */ // 0x8073F2C8
    /* bctrl  */ // 0x8073F2CC
    r3 = *(0x328 + r31); // lwz @ 0x8073F2D0
    r12 = *(0 + r3); // lwz @ 0x8073F2D4
    r12 = *(0x80 + r12); // lwz @ 0x8073F2D8
    /* mtctr r12 */ // 0x8073F2DC
    /* bctrl  */ // 0x8073F2E0
    r3 = *(0x32c + r31); // lwz @ 0x8073F2E4
    r12 = *(0 + r3); // lwz @ 0x8073F2E8
    r12 = *(0x14 + r12); // lwz @ 0x8073F2EC
    /* mtctr r12 */ // 0x8073F2F0
    /* bctrl  */ // 0x8073F2F4
    r3 = *(0x32c + r31); // lwz @ 0x8073F2F8
    r4 = r31 + 0x6f4; // 0x8073F2FC
    r12 = *(0 + r3); // lwz @ 0x8073F300
    r12 = *(0x78 + r12); // lwz @ 0x8073F304
    /* mtctr r12 */ // 0x8073F308
    /* bctrl  */ // 0x8073F30C
    r3 = *(0x32c + r31); // lwz @ 0x8073F310
    r4 = r31 + 0x7c8; // 0x8073F314
    r12 = *(0 + r3); // lwz @ 0x8073F318
    r12 = *(0x74 + r12); // lwz @ 0x8073F31C
    /* mtctr r12 */ // 0x8073F320
    /* bctrl  */ // 0x8073F324
    r0 = *(0xb0 + r31); // lbz @ 0x8073F328
    if (==) goto 0x0x8073f34c;
    r3 = *(0x32c + r31); // lwz @ 0x8073F334
    r4 = r31 + 0x72c; // 0x8073F338
    r12 = *(0 + r3); // lwz @ 0x8073F33C
    r12 = *(0x70 + r12); // lwz @ 0x8073F340
    /* mtctr r12 */ // 0x8073F344
    /* bctrl  */ // 0x8073F348
    r3 = *(0x32c + r31); // lwz @ 0x8073F34C
    r12 = *(0 + r3); // lwz @ 0x8073F350
    r12 = *(0x80 + r12); // lwz @ 0x8073F354
    /* mtctr r12 */ // 0x8073F358
    /* bctrl  */ // 0x8073F35C
    r0 = *(0x24 + r1); // lwz @ 0x8073F360
    r31 = *(0x1c + r1); // lwz @ 0x8073F364
    r30 = *(0x18 + r1); // lwz @ 0x8073F368
    r29 = *(0x14 + r1); // lwz @ 0x8073F36C
    r28 = *(0x10 + r1); // lwz @ 0x8073F370
    return;
}