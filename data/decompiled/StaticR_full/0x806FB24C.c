/* Function at 0x806FB24C, size=364 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806FB24C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x806FB254
    *(0x1c + r1) = r31; // stw @ 0x806FB25C
    r31 = r3 + 0x4200; // 0x806FB260
    *(0x18 + r1) = r30; // stw @ 0x806FB264
    r30 = r3;
    *(8 + r1) = r4; // stw @ 0x806FB26C
    r0 = *(0x20 + r3); // lbz @ 0x806FB270
    if (!=) goto 0x0x806fb2bc;
    *(0x1c + r3) = r4; // stw @ 0x806FB27C
    r3 = *(0x758c + r3); // lwz @ 0x806FB280
    r12 = *(0x18 + r3); // lwz @ 0x806FB284
    r12 = *(0xc + r12); // lwz @ 0x806FB288
    /* mtctr r12 */ // 0x806FB28C
    /* bctrl  */ // 0x806FB290
    if (!=) goto 0x0x806fb2a8;
    /* li r0, 1 */ // 0x806FB29C
    *(0x20 + r30) = r0; // stb @ 0x806FB2A0
    /* b 0x806fb2bc */ // 0x806FB2A4
    r3 = *(0x758c + r30); // lwz @ 0x806FB2A8
    r0 = *(4 + r3); // lwz @ 0x806FB2AC
    *(0x1c + r30) = r0; // stw @ 0x806FB2B0
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fb2c0 */ // 0x806FB2B8
    /* li r3, 0 */ // 0x806FB2BC
    if (==) goto 0x0x806fb2d8;
    /* li r0, 6 */ // 0x806FB2C8
    *(0x757c + r30) = r3; // stw @ 0x806FB2CC
    *(0x14 + r30) = r0; // stw @ 0x806FB2D0
    /* b 0x806fb368 */ // 0x806FB2D4
    r3 = r30;
    r4 = r31;
    FUN_806FC504(r3, r4, r5); // bl 0x806FC504
    r5 = *(4 + r31); // lbz @ 0x806FB2E8
    r31 = r3;
    /* li r4, 1 */ // 0x806FB2F0
    /* li r3, 0 */ // 0x806FB2F4
    if (==) goto 0x0x806fb310;
    r0 = *(8 + r1); // lwz @ 0x806FB300
    if (!=) goto 0x0x806fb310;
    /* li r3, 1 */ // 0x806FB30C
    if (!=) goto 0x0x806fb340;
    /* li r3, 0 */ // 0x806FB31C
    if (!=) goto 0x0x806fb334;
    r0 = *(8 + r1); // lwz @ 0x806FB324
    if (>) goto 0x0x806fb334;
    /* li r3, 1 */ // 0x806FB330
    if (!=) goto 0x0x806fb340;
    /* li r4, 0 */ // 0x806FB33C
    r3 = r30;
    FUN_806FA40C(r3, r4, r3); // bl 0x806FA40C
    if (==) goto 0x0x806fb360;
    /* li r0, 6 */ // 0x806FB350
    *(0x757c + r30) = r31; // stw @ 0x806FB354
    *(0x14 + r30) = r0; // stw @ 0x806FB358
    /* b 0x806fb368 */ // 0x806FB35C
    /* li r0, 1 */ // 0x806FB360
    *(0x14 + r30) = r0; // stw @ 0x806FB364
    r0 = *(0x20 + r30); // lbz @ 0x806FB368
    if (==) goto 0x0x806fb3a4;
    r3 = *(0x758c + r30); // lwz @ 0x806FB374
    r12 = *(0x18 + r3); // lwz @ 0x806FB378
    r12 = *(0x10 + r12); // lwz @ 0x806FB37C
    /* mtctr r12 */ // 0x806FB380
    /* bctrl  */ // 0x806FB384
    if (!=) goto 0x0x806fb39c;
    /* li r0, 0 */ // 0x806FB390
    *(0x20 + r30) = r0; // stb @ 0x806FB394
    /* b 0x806fb3a4 */ // 0x806FB398
    r3 = *(0x758c + r30); // lwz @ 0x806FB39C
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x24 + r1); // lwz @ 0x806FB3A4
    r31 = *(0x1c + r1); // lwz @ 0x806FB3A8
    r30 = *(0x18 + r1); // lwz @ 0x806FB3AC
}