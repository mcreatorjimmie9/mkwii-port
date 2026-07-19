/* Function at 0x806A81B4, size=556 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806A81B4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806A81BC
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806A81CC
    /* li r30, 0 */ // 0x806A81D0
    *(0x14 + r1) = r29; // stw @ 0x806A81D4
    *(0x6e + r3) = r30; // stb @ 0x806A81D8
    *(0x6c + r3) = r30; // stb @ 0x806A81DC
    *(0x6d + r3) = r30; // stb @ 0x806A81E0
    r3 = *(0 + r4); // lwz @ 0x806A81E4
    FUN_806E69B4(); // bl 0x806E69B4
    if (==) goto 0x0x806a8204;
    /* li r0, 1 */ // 0x806A81F4
    *(0x6e + r31) = r0; // stb @ 0x806A81F8
    *(0x58 + r31) = r30; // stw @ 0x806A81FC
    /* b 0x806a8648 */ // 0x806A8200
    /* lis r30, 0 */ // 0x806A8204
    r3 = *(0 + r30); // lwz @ 0x806A8208
    r3 = *(0x98 + r3); // lwz @ 0x806A820C
    r0 = *(0x4c4 + r3); // lwz @ 0x806A8210
    if (!=) goto 0x0x806a83c0;
    /* li r0, 1 */ // 0x806A821C
    *(0x58 + r31) = r0; // stw @ 0x806A8220
    r3 = *(0 + r30); // lwz @ 0x806A8224
    r3 = *(0 + r3); // lwz @ 0x806A8228
    r29 = *(0x14c + r3); // lwz @ 0x806A822C
    if (!=) goto 0x0x806a8240;
    /* li r29, 0 */ // 0x806A8238
    /* b 0x806a8294 */ // 0x806A823C
    /* lis r30, 0 */ // 0x806A8240
    r30 = r30 + 0; // 0x806A8244
    if (==) goto 0x0x806a8290;
    r12 = *(0 + r29); // lwz @ 0x806A824C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806A8254
    /* mtctr r12 */ // 0x806A8258
    /* bctrl  */ // 0x806A825C
    /* b 0x806a8278 */ // 0x806A8260
    if (!=) goto 0x0x806a8274;
    /* li r0, 1 */ // 0x806A826C
    /* b 0x806a8284 */ // 0x806A8270
    r3 = *(0 + r3); // lwz @ 0x806A8274
    if (!=) goto 0x0x806a8264;
    /* li r0, 0 */ // 0x806A8280
    if (==) goto 0x0x806a8290;
    /* b 0x806a8294 */ // 0x806A828C
    /* li r29, 0 */ // 0x806A8290
    r12 = *(0 + r29); // lwz @ 0x806A8294
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806A829C
    /* mtctr r12 */ // 0x806A82A0
    /* bctrl  */ // 0x806A82A4
    /* lis r3, 0 */ // 0x806A82A8
    r3 = *(0 + r3); // lwz @ 0x806A82AC
    r3 = *(0 + r3); // lwz @ 0x806A82B0
    r0 = *(0 + r3); // lwz @ 0x806A82B4
    if (==) goto 0x0x806a836c;
    if (>=) goto 0x0x806a8304;
    if (>=) goto 0x0x806a82ec;
    if (>=) goto 0x0x806a82e0;
    if (>=) goto 0x0x806a833c;
    /* b 0x806a836c */ // 0x806A82DC
    if (>=) goto 0x0x806a8344;
    /* b 0x806a836c */ // 0x806A82E8
    if (==) goto 0x0x806a836c;
    if (>=) goto 0x0x806a835c;
    if (>=) goto 0x0x806a8354;
    /* b 0x806a836c */ // 0x806A8300
    if (>=) goto 0x0x806a8324;
    if (==) goto 0x0x806a8364;
    if (>=) goto 0x0x806a836c;
    if (>=) goto 0x0x806a836c;
    /* b 0x806a834c */ // 0x806A8320
    if (==) goto 0x0x806a834c;
    if (>=) goto 0x0x806a836c;
    if (>=) goto 0x0x806a836c;
    /* b 0x806a8354 */ // 0x806A8338
    /* li r4, 0x7f1 */ // 0x806A833C
    /* b 0x806a8370 */ // 0x806A8340
    /* li r4, 0x7f2 */ // 0x806A8344
    /* b 0x806a8370 */ // 0x806A8348
    /* li r4, 0x13ba */ // 0x806A834C
    /* b 0x806a8370 */ // 0x806A8350
    /* li r4, 0 */ // 0x806A8354
    /* b 0x806a8370 */ // 0x806A8358
    /* li r4, 0xfa3 */ // 0x806A835C
    /* b 0x806a8370 */ // 0x806A8360
    /* li r4, 0x19cd */ // 0x806A8364
    /* b 0x806a8370 */ // 0x806A8368
    /* li r4, 0 */ // 0x806A836C
    r3 = r29;
    /* li r5, 0 */ // 0x806A8374
    FUN_8066CDDC(r4, r4, r3, r5); // bl 0x8066CDDC
    r12 = *(0 + r29); // lwz @ 0x806A837C
    r3 = r29;
    /* li r4, 0x18ae */ // 0x806A8384
    /* li r5, 0 */ // 0x806A8388
    r12 = *(0x68 + r12); // lwz @ 0x806A838C
    /* mtctr r12 */ // 0x806A8390
    /* bctrl  */ // 0x806A8394
    r0 = r31 + 0x44; // 0x806A8398
    *(0x188 + r29) = r0; // stw @ 0x806A839C
    r3 = r31;
    /* li r4, 0x51 */ // 0x806A83A4
    r12 = *(0 + r31); // lwz @ 0x806A83A8
    /* li r5, 0 */ // 0x806A83AC
    r12 = *(0x24 + r12); // lwz @ 0x806A83B0
    /* mtctr r12 */ // 0x806A83B4
    /* bctrl  */ // 0x806A83B8
    /* b 0x806a8648 */ // 0x806A83BC
    FUN_805E3430(r5); // bl 0x805E3430
    if (!=) goto 0x0x806a8570;
    /* li r0, 2 */ // 0x806A83CC
    *(0x58 + r31) = r0; // stw @ 0x806A83D0
    r3 = *(0 + r30); // lwz @ 0x806A83D4
    r3 = *(0 + r3); // lwz @ 0x806A83D8
    r29 = *(0x14c + r3); // lwz @ 0x806A83DC
}