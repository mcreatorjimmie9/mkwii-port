/* Function at 0x806FE184, size=476 bytes */
/* Stack frame: 304 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806FE184(int r3)
{
    /* Stack frame: -304(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r3;
    *(0x124 + r1) = r29; // stw @ 0x806FE19C
    r0 = *(0x20 + r3); // lbz @ 0x806FE1A0
    if (!=) goto 0x0x806fe1f0;
    /* li r0, 0 */ // 0x806FE1AC
    *(0x1c + r3) = r0; // stw @ 0x806FE1B0
    r3 = *(0x758c + r3); // lwz @ 0x806FE1B4
    r12 = *(0x18 + r3); // lwz @ 0x806FE1B8
    r12 = *(0xc + r12); // lwz @ 0x806FE1BC
    /* mtctr r12 */ // 0x806FE1C0
    /* bctrl  */ // 0x806FE1C4
    if (!=) goto 0x0x806fe1dc;
    /* li r0, 1 */ // 0x806FE1D0
    *(0x20 + r30) = r0; // stb @ 0x806FE1D4
    /* b 0x806fe1f0 */ // 0x806FE1D8
    r3 = *(0x758c + r30); // lwz @ 0x806FE1DC
    r0 = *(4 + r3); // lwz @ 0x806FE1E0
    *(0x1c + r30) = r0; // stw @ 0x806FE1E4
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fe1f4 */ // 0x806FE1EC
    /* li r3, 0 */ // 0x806FE1F0
    r29 = r3;
    if (!=) goto 0x0x806fe2a4;
    /* li r3, 2 */ // 0x806FE200
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x806fe238;
    FUN_805E3430(r3); // bl 0x805E3430
    *(0x1c + r30) = r3; // stw @ 0x806FE21C
    if (!=) goto 0x0x806fe22c;
    /* li r3, 8 */ // 0x806FE224
    /* b 0x806fe23c */ // 0x806FE228
    r3 = r29;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* b 0x806fe23c */ // 0x806FE234
    /* li r3, 0 */ // 0x806FE238
    r29 = r3;
    if (==) goto 0x0x806fe2a4;
    r0 = *(0x20 + r30); // lbz @ 0x806FE248
    if (==) goto 0x0x806fe28c;
    r3 = *(0x758c + r30); // lwz @ 0x806FE254
    r12 = *(0x18 + r3); // lwz @ 0x806FE258
    r12 = *(0x10 + r12); // lwz @ 0x806FE25C
    /* mtctr r12 */ // 0x806FE260
    /* bctrl  */ // 0x806FE264
    if (!=) goto 0x0x806fe27c;
    /* li r0, 0 */ // 0x806FE270
    *(0x20 + r30) = r0; // stb @ 0x806FE274
    /* b 0x806fe28c */ // 0x806FE278
    r3 = *(0x758c + r30); // lwz @ 0x806FE27C
    FUN_805E3430(); // bl 0x805E3430
    r31 = r3;
    /* b 0x806fe290 */ // 0x806FE288
    /* li r31, 0 */ // 0x806FE28C
    r3 = r31;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806fe2a4;
    /* b 0x806fe2a8 */ // 0x806FE2A0
    r31 = r29;
    if (==) goto 0x0x806fe2c0;
    /* li r0, 6 */ // 0x806FE2B0
    *(0x757c + r30) = r31; // stw @ 0x806FE2B4
    *(0x14 + r30) = r0; // stw @ 0x806FE2B8
    /* b 0x806fe430 */ // 0x806FE2BC
    /* lis r3, 0 */ // 0x806FE2C0
    r3 = *(0 + r3); // lwz @ 0x806FE2C4
    r0 = *(0x84 + r3); // lwz @ 0x806FE2C8
    if (==) goto 0x0x806fe308;
    if (==) goto 0x0x806fe318;
    if (==) goto 0x0x806fe328;
    if (==) goto 0x0x806fe338;
    if (==) goto 0x0x806fe348;
    if (==) goto 0x0x806fe358;
    if (==) goto 0x0x806fe368;
    /* b 0x806fe378 */ // 0x806FE304
    /* lis r3, 0 */ // 0x806FE308
    r3 = r3 + 0; // 0x806FE30C
    r29 = r3 + 0x61; // 0x806FE310
    /* b 0x806fe384 */ // 0x806FE314
    /* lis r3, 0 */ // 0x806FE318
    r3 = r3 + 0; // 0x806FE31C
    r29 = r3 + 0x64; // 0x806FE320
    /* b 0x806fe384 */ // 0x806FE324
    /* lis r3, 0 */ // 0x806FE328
    r3 = r3 + 0; // 0x806FE32C
    r29 = r3 + 0x67; // 0x806FE330
    /* b 0x806fe384 */ // 0x806FE334
    /* lis r3, 0 */ // 0x806FE338
    r3 = r3 + 0; // 0x806FE33C
    r29 = r3 + 0x6a; // 0x806FE340
    /* b 0x806fe384 */ // 0x806FE344
    /* lis r3, 0 */ // 0x806FE348
    r3 = r3 + 0; // 0x806FE34C
    r29 = r3 + 0x6d; // 0x806FE350
    /* b 0x806fe384 */ // 0x806FE354
    /* lis r3, 0 */ // 0x806FE358
    r3 = r3 + 0; // 0x806FE35C
}