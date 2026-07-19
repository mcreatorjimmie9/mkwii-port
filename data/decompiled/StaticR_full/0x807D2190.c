/* Function at 0x807D2190, size=388 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */

int FUN_807D2190(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x807D219C
    /* lis r30, 0 */ // 0x807D21A0
    r27 = r3;
    /* li r25, 0 */ // 0x807D21A8
    r31 = r30 + 0; // 0x807D21AC
    /* lis r29, 0 */ // 0x807D21B0
    r24 = *(0xc0 + r27); // lwz @ 0x807D21B4
    /* li r23, 0 */ // 0x807D21B8
    r26 = r24;
    /* b 0x807d22e4 */ // 0x807D21C0
    r3 = *(0 + r29); // lwz @ 0x807D21C4
    r5 = r30 + 0; // 0x807D21C8
    r28 = *(0 + r26); // lwz @ 0x807D21CC
    /* li r4, 0 */ // 0x807D21D0
    r0 = *(0xb68 + r3); // lwz @ 0x807D21D4
    /* b 0x807d21f8 */ // 0x807D21D8
    if (!=) goto 0x0x807d21f0;
    /* slwi r0, r4, 4 */ // 0x807D21E4
    r4 = r31 + r0; // 0x807D21E8
    /* b 0x807d2208 */ // 0x807D21EC
    r5 = r5 + 0x10; // 0x807D21F0
    r4 = r4 + 1; // 0x807D21F4
    r3 = *(0 + r5); // lwz @ 0x807D21F8
    if (!=) goto 0x0x807d21dc;
    /* li r4, 0 */ // 0x807D2204
    r3 = *(0x10 + r28); // lwz @ 0x807D2208
    r4 = *(0xc + r4); // lbz @ 0x807D220C
    r3 = *(0x144 + r3); // lwz @ 0x807D2210
    r12 = *(0x34 + r3); // lwz @ 0x807D2214
    r12 = *(0x54 + r12); // lwz @ 0x807D2218
    /* mtctr r12 */ // 0x807D221C
    /* bctrl  */ // 0x807D2220
    r3 = *(0 + r29); // lwz @ 0x807D2224
    r5 = r30 + 0; // 0x807D2228
    /* li r4, 0 */ // 0x807D222C
    r0 = *(0xb68 + r3); // lwz @ 0x807D2230
    /* b 0x807d2254 */ // 0x807D2234
    if (!=) goto 0x0x807d224c;
    /* slwi r0, r4, 4 */ // 0x807D2240
    r22 = r31 + r0; // 0x807D2244
    /* b 0x807d2264 */ // 0x807D2248
    r5 = r5 + 0x10; // 0x807D224C
    r4 = r4 + 1; // 0x807D2250
    r3 = *(0 + r5); // lwz @ 0x807D2254
    if (!=) goto 0x0x807d2238;
    /* li r22, 0 */ // 0x807D2260
    r3 = *(0x10 + r28); // lwz @ 0x807D2264
    r3 = *(0x144 + r3); // lwz @ 0x807D2268
    r12 = *(0x34 + r3); // lwz @ 0x807D226C
    r12 = *(0x44 + r12); // lwz @ 0x807D2270
    /* mtctr r12 */ // 0x807D2274
    /* bctrl  */ // 0x807D2278
    r12 = *(0 + r3); // lwz @ 0x807D227C
    r4 = *(0xd + r22); // lbz @ 0x807D2280
    r12 = *(0x14 + r12); // lwz @ 0x807D2284
    /* mtctr r12 */ // 0x807D2288
    /* bctrl  */ // 0x807D228C
    r3 = *(0 + r29); // lwz @ 0x807D2290
    r5 = r30 + 0; // 0x807D2294
    /* li r4, 0 */ // 0x807D2298
    r0 = *(0xb68 + r3); // lwz @ 0x807D229C
    /* b 0x807d22c0 */ // 0x807D22A0
    if (!=) goto 0x0x807d22b8;
    /* slwi r0, r4, 4 */ // 0x807D22AC
    r4 = r31 + r0; // 0x807D22B0
    /* b 0x807d22d0 */ // 0x807D22B4
    r5 = r5 + 0x10; // 0x807D22B8
    r4 = r4 + 1; // 0x807D22BC
    r3 = *(0 + r5); // lwz @ 0x807D22C0
    if (!=) goto 0x0x807d22a4;
    /* li r4, 0 */ // 0x807D22CC
    r3 = *(0x10 + r28); // lwz @ 0x807D22D0
    r26 = r26 + 4; // 0x807D22D4
    r0 = *(0xe + r4); // lbz @ 0x807D22D8
    r23 = r23 + 1; // 0x807D22DC
    *(0x162 + r3) = r0; // stb @ 0x807D22E0
    r0 = *(0x18 + r24); // lwz @ 0x807D22E4
    if (<) goto 0x0x807d21c4;
    r25 = r25 + 1; // 0x807D22F0
    r27 = r27 + 4; // 0x807D22F4
    if (<) goto 0x0x807d21b4;
    r0 = *(0x34 + r1); // lwz @ 0x807D2304
    return;
}