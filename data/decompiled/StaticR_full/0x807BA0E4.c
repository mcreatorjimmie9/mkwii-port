/* Function at 0x807BA0E4, size=708 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_807BA0E4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x807BA0FC
    *(0x10 + r1) = r28; // stw @ 0x807BA100
    r5 = *(4 + r3); // lwz @ 0x807BA104
    r0 = *(8 + r3); // lwz @ 0x807BA108
    r5 = *(0 + r5); // lwz @ 0x807BA10C
    r5 = *(0x10 + r5); // lwz @ 0x807BA114
    r28 = *(0x14c + r5); // lwz @ 0x807BA118
    if (==) goto 0x0x807ba12c;
    if (==) goto 0x0x807ba19c;
    /* b 0x807ba388 */ // 0x807BA128
    r3 = r28;
    FUN_807BDB48(r3); // bl 0x807BDB48
    r28 = r3;
    if (==) goto 0x0x807ba388;
    r12 = *(0 + r31); // lwz @ 0x807BA140
    r3 = r31;
    r4 = r28;
    r12 = *(0x14 + r12); // lwz @ 0x807BA14C
    /* mtctr r12 */ // 0x807BA150
    /* bctrl  */ // 0x807BA154
    r4 = *(0xc + r31); // lwz @ 0x807BA158
    if (<=) goto 0x0x807ba190;
    r12 = *(0 + r31); // lwz @ 0x807BA164
    r3 = r31;
    r4 = r28;
    r12 = *(0x18 + r12); // lwz @ 0x807BA170
    /* mtctr r12 */ // 0x807BA174
    /* bctrl  */ // 0x807BA178
    r4 = *(8 + r31); // lwz @ 0x807BA17C
    *(0xc + r31) = r3; // stw @ 0x807BA180
    r0 = r4 + 1; // 0x807BA184
    *(8 + r31) = r0; // stw @ 0x807BA188
    /* b 0x807ba388 */ // 0x807BA18C
    r0 = r4 + 1; // 0x807BA190
    *(0xc + r31) = r0; // stw @ 0x807BA194
    /* b 0x807ba388 */ // 0x807BA198
    r30 = *(0xc + r4); // lwz @ 0x807BA19C
    if (==) goto 0x0x807ba1b8;
    r0 = *(0x24 + r4); // lwz @ 0x807BA1A8
    if (!=) goto 0x0x807ba1b8;
    /* b 0x807ba24c */ // 0x807BA1B4
    r30 = *(0x10 + r4); // lwz @ 0x807BA1B8
    if (==) goto 0x0x807ba1d4;
    r0 = *(0x28 + r4); // lwz @ 0x807BA1C4
    if (!=) goto 0x0x807ba1d4;
    /* b 0x807ba24c */ // 0x807BA1D0
    r30 = *(0x14 + r4); // lwz @ 0x807BA1D4
    r5 = r4 + 8; // 0x807BA1D8
    if (==) goto 0x0x807ba1f4;
    r0 = *(0x24 + r5); // lwz @ 0x807BA1E4
    if (!=) goto 0x0x807ba1f4;
    /* b 0x807ba24c */ // 0x807BA1F0
    r30 = *(0x10 + r5); // lwz @ 0x807BA1F4
    if (==) goto 0x0x807ba210;
    r0 = *(0x28 + r5); // lwz @ 0x807BA200
    if (!=) goto 0x0x807ba210;
    /* b 0x807ba24c */ // 0x807BA20C
    r30 = *(0x14 + r5); // lwz @ 0x807BA210
    if (==) goto 0x0x807ba22c;
    r0 = *(0x2c + r5); // lwz @ 0x807BA21C
    if (!=) goto 0x0x807ba22c;
    /* b 0x807ba24c */ // 0x807BA228
    r30 = *(0x18 + r5); // lwz @ 0x807BA22C
    if (==) goto 0x0x807ba248;
    r0 = *(0x30 + r5); // lwz @ 0x807BA238
    if (!=) goto 0x0x807ba248;
    /* b 0x807ba24c */ // 0x807BA244
    /* li r30, 0 */ // 0x807BA248
    r29 = *(0xc + r4); // lwz @ 0x807BA24C
    if (==) goto 0x0x807ba268;
    r0 = *(0x24 + r4); // lwz @ 0x807BA258
    if (!=) goto 0x0x807ba268;
    /* b 0x807ba2fc */ // 0x807BA264
    r29 = *(0x10 + r4); // lwz @ 0x807BA268
    if (==) goto 0x0x807ba284;
    r0 = *(0x28 + r4); // lwz @ 0x807BA274
    if (!=) goto 0x0x807ba284;
    /* b 0x807ba2fc */ // 0x807BA280
    r4 = r4 + 8; // 0x807BA284
    r29 = *(0xc + r4); // lwz @ 0x807BA288
    if (==) goto 0x0x807ba2a4;
    r0 = *(0x24 + r4); // lwz @ 0x807BA294
    if (!=) goto 0x0x807ba2a4;
    /* b 0x807ba2fc */ // 0x807BA2A0
    r29 = *(0x10 + r4); // lwz @ 0x807BA2A4
    if (==) goto 0x0x807ba2c0;
    r0 = *(0x28 + r4); // lwz @ 0x807BA2B0
    if (!=) goto 0x0x807ba2c0;
    /* b 0x807ba2fc */ // 0x807BA2BC
    r29 = *(0x14 + r4); // lwz @ 0x807BA2C0
    if (==) goto 0x0x807ba2dc;
    r0 = *(0x2c + r4); // lwz @ 0x807BA2CC
    if (!=) goto 0x0x807ba2dc;
    /* b 0x807ba2fc */ // 0x807BA2D8
    r29 = *(0x18 + r4); // lwz @ 0x807BA2DC
    if (==) goto 0x0x807ba2f8;
    r0 = *(0x30 + r4); // lwz @ 0x807BA2E8
    if (!=) goto 0x0x807ba2f8;
    /* b 0x807ba2fc */ // 0x807BA2F4
    /* li r29, 0 */ // 0x807BA2F8
    r4 = *(0xc + r3); // lwz @ 0x807BA2FC
    r0 = r4 + -1; // 0x807BA300
    *(0xc + r3) = r0; // stw @ 0x807BA304
    r3 = r28;
    FUN_807BDBCC(r3); // bl 0x807BDBCC
    if (==) goto 0x0x807ba388;
    if (==) goto 0x0x807ba33c;
    /* li r3, 1 */ // 0x807BA320
    *(0x1a0 + r28) = r3; // stb @ 0x807BA324
    /* li r0, 0 */ // 0x807BA328
    *(0x1a4 + r28) = r3; // stw @ 0x807BA32C
    *(0xc + r31) = r0; // stw @ 0x807BA330
    *(8 + r31) = r0; // stw @ 0x807BA334
    /* b 0x807ba388 */ // 0x807BA338
    if (==) goto 0x0x807ba364;
    /* li r0, 1 */ // 0x807BA344
    *(0x1a0 + r28) = r0; // stb @ 0x807BA348
    /* li r3, 2 */ // 0x807BA34C
    *(0x1a4 + r28) = r3; // stw @ 0x807BA350
    /* li r0, 0 */ // 0x807BA354
    *(0xc + r31) = r0; // stw @ 0x807BA358
    *(8 + r31) = r0; // stw @ 0x807BA35C
    /* b 0x807ba388 */ // 0x807BA360
    r0 = *(0xc + r31); // lwz @ 0x807BA364
    if (>=) goto 0x0x807ba388;
    /* li r3, 1 */ // 0x807BA370
    *(0x1a0 + r28) = r3; // stb @ 0x807BA374
    /* li r0, 0 */ // 0x807BA378
    *(0x1a4 + r28) = r3; // stw @ 0x807BA37C
    *(0xc + r31) = r0; // stw @ 0x807BA380
    *(8 + r31) = r0; // stw @ 0x807BA384
    r0 = *(0x24 + r1); // lwz @ 0x807BA388
    r31 = *(0x1c + r1); // lwz @ 0x807BA38C
    r30 = *(0x18 + r1); // lwz @ 0x807BA390
    r29 = *(0x14 + r1); // lwz @ 0x807BA394
    r28 = *(0x10 + r1); // lwz @ 0x807BA398
    return;
}