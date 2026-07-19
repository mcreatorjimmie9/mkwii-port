/* Function at 0x806FF17C, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806FF17C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806FF190
    r0 = *(0x20 + r3); // lbz @ 0x806FF194
    if (!=) goto 0x0x806ff1e4;
    /* li r0, 0 */ // 0x806FF1A0
    *(0x1c + r3) = r0; // stw @ 0x806FF1A4
    r3 = *(0x758c + r3); // lwz @ 0x806FF1A8
    r12 = *(0x18 + r3); // lwz @ 0x806FF1AC
    r12 = *(0xc + r12); // lwz @ 0x806FF1B0
    /* mtctr r12 */ // 0x806FF1B4
    /* bctrl  */ // 0x806FF1B8
    if (!=) goto 0x0x806ff1d0;
    /* li r0, 1 */ // 0x806FF1C4
    *(0x20 + r31) = r0; // stb @ 0x806FF1C8
    /* b 0x806ff1e4 */ // 0x806FF1CC
    r3 = *(0x758c + r31); // lwz @ 0x806FF1D0
    r0 = *(4 + r3); // lwz @ 0x806FF1D4
    *(0x1c + r31) = r0; // stw @ 0x806FF1D8
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806ff1e8 */ // 0x806FF1E0
    /* li r3, 0 */ // 0x806FF1E4
    if (==) goto 0x0x806ff200;
    /* li r0, 6 */ // 0x806FF1F0
    *(0x757c + r31) = r3; // stw @ 0x806FF1F4
    *(0x14 + r31) = r0; // stw @ 0x806FF1F8
    /* b 0x806ff2e8 */ // 0x806FF1FC
    r3 = *(0x4208 + r31); // lwz @ 0x806FF200
    FUN_805E3430(); // bl 0x805E3430
    /* slwi r4, r3, 1 */ // 0x806FF208
    /* li r3, 0 */ // 0x806FF20C
    r5 = r4 + 0x24; // 0x806FF210
    /* li r4, 2 */ // 0x806FF214
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    if (==) goto 0x0x806ff238;
    /* lis r4, -2 */ // 0x806FF224
    r0 = r4 + 0x55ce; // 0x806FF228
    *(0x1c + r31) = r0; // stw @ 0x806FF22C
    FUN_805E3430(r4); // bl 0x805E3430
    /* b 0x806ff23c */ // 0x806FF234
    /* li r3, 0 */ // 0x806FF238
    if (==) goto 0x0x806ff254;
    /* li r0, 6 */ // 0x806FF244
    *(0x757c + r31) = r3; // stw @ 0x806FF248
    *(0x14 + r31) = r0; // stw @ 0x806FF24C
    /* b 0x806ff2e8 */ // 0x806FF250
    r5 = *(0x4200 + r31); // lwz @ 0x806FF254
}