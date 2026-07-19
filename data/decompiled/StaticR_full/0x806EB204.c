/* Function at 0x806EB204, size=272 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806EB204(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 3 */ // 0x806EB210
    r31 = r3 + 4; // 0x806EB218
    /* li r3, 0 */ // 0x806EB21C
    *(0x18 + r1) = r30; // stw @ 0x806EB220
    r30 = r7;
    *(0x14 + r1) = r29; // stw @ 0x806EB228
    r29 = r6;
    /* mtctr r0 */ // 0x806EB230
    r0 = *(0x19 + r31); // lbz @ 0x806EB234
    if (!=) goto 0x0x806eb244;
    /* b 0x806eb2e0 */ // 0x806EB240
    r0 = *(0x39 + r31); // lbz @ 0x806EB244
    r31 = r31 + 0x20; // 0x806EB248
    if (!=) goto 0x0x806eb258;
    /* b 0x806eb2e0 */ // 0x806EB254
    r0 = *(0x39 + r31); // lbz @ 0x806EB258
    r31 = r31 + 0x20; // 0x806EB25C
    if (!=) goto 0x0x806eb26c;
    /* b 0x806eb2e0 */ // 0x806EB268
    r0 = *(0x39 + r31); // lbz @ 0x806EB26C
    r31 = r31 + 0x20; // 0x806EB270
    if (!=) goto 0x0x806eb280;
    /* b 0x806eb2e0 */ // 0x806EB27C
    r0 = *(0x39 + r31); // lbz @ 0x806EB280
    r31 = r31 + 0x20; // 0x806EB284
    if (!=) goto 0x0x806eb294;
    /* b 0x806eb2e0 */ // 0x806EB290
    r0 = *(0x39 + r31); // lbz @ 0x806EB294
    r31 = r31 + 0x20; // 0x806EB298
    if (!=) goto 0x0x806eb2a8;
    /* b 0x806eb2e0 */ // 0x806EB2A4
    r0 = *(0x39 + r31); // lbz @ 0x806EB2A8
    r31 = r31 + 0x20; // 0x806EB2AC
    if (!=) goto 0x0x806eb2bc;
    /* b 0x806eb2e0 */ // 0x806EB2B8
    r0 = *(0x39 + r31); // lbz @ 0x806EB2BC
    r31 = r31 + 0x20; // 0x806EB2C0
    if (!=) goto 0x0x806eb2d0;
    /* b 0x806eb2e0 */ // 0x806EB2CC
    r31 = r31 + 0x20; // 0x806EB2D0
    r3 = r3 + 7; // 0x806EB2D4
    if (counter-- != 0) goto 0x0x806eb234;
    /* li r31, 0 */ // 0x806EB2DC
    /* lis r3, 0 */ // 0x806EB2E0
    /* li r0, 1 */ // 0x806EB2E4
    r6 = *(0 + r3); // lwz @ 0x806EB2E8
    r3 = r31 + 4; // 0x806EB2EC
    r6 = *(0x20 + r6); // lwz @ 0x806EB2F0
    r6 = r6 + 0xc8; // 0x806EB2F4
    *(0 + r31) = r6; // stw @ 0x806EB2F8
    *(0x19 + r31) = r0; // stb @ 0x806EB2FC
    *(0x1a + r31) = r4; // stb @ 0x806EB300
    /* li r4, 0 */ // 0x806EB304
    *(0x1b + r31) = r5; // stb @ 0x806EB308
    /* li r5, 0x15 */ // 0x806EB30C
    FUN_805E3430(r4, r5); // bl 0x805E3430
}