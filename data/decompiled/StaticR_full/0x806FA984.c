/* Function at 0x806FA984, size=276 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806FA984(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806FA990
    r31 = r3;
    r0 = *(0x20 + r3); // lbz @ 0x806FA998
    if (!=) goto 0x0x806fa9e8;
    /* li r0, 0 */ // 0x806FA9A4
    *(0x1c + r3) = r0; // stw @ 0x806FA9A8
    r3 = *(0x758c + r3); // lwz @ 0x806FA9AC
    r12 = *(0x18 + r3); // lwz @ 0x806FA9B0
    r12 = *(0xc + r12); // lwz @ 0x806FA9B4
    /* mtctr r12 */ // 0x806FA9B8
    /* bctrl  */ // 0x806FA9BC
    if (!=) goto 0x0x806fa9d4;
    /* li r0, 1 */ // 0x806FA9C8
    *(0x20 + r31) = r0; // stb @ 0x806FA9CC
    /* b 0x806fa9e8 */ // 0x806FA9D0
    r3 = *(0x758c + r31); // lwz @ 0x806FA9D4
    r0 = *(4 + r3); // lwz @ 0x806FA9D8
    *(0x1c + r31) = r0; // stw @ 0x806FA9DC
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806fa9ec */ // 0x806FA9E4
    /* li r3, 0 */ // 0x806FA9E8
    if (==) goto 0x0x806faa04;
    /* li r0, 6 */ // 0x806FA9F4
    *(0x757c + r31) = r3; // stw @ 0x806FA9F8
    *(0x14 + r31) = r0; // stw @ 0x806FA9FC
    /* b 0x806faa4c */ // 0x806FAA00
    r5 = *(0x4200 + r31); // lwz @ 0x806FAA04
    r3 = r31;
    r6 = *(0x4204 + r31); // lwz @ 0x806FAA0C
    r7 = r31 + 0x4224; // 0x806FAA10
    r8 = r31 + 0x4208; // 0x806FAA14
    FUN_806FAA9C(r3, r7, r8); // bl 0x806FAA9C
    if (==) goto 0x0x806faa34;
    /* li r0, 6 */ // 0x806FAA24
    *(0x757c + r31) = r3; // stw @ 0x806FAA28
    *(0x14 + r31) = r0; // stw @ 0x806FAA2C
    /* b 0x806faa4c */ // 0x806FAA30
    /* addis r4, r31, 1 */ // 0x806FAA34
    /* li r0, 1 */ // 0x806FAA38
    r3 = *(-0x764c + r4); // lwz @ 0x806FAA3C
    *(0x14 + r31) = r0; // stw @ 0x806FAA40
    r0 = r3 + 1; // 0x806FAA44
    *(-0x764c + r4) = r0; // stw @ 0x806FAA48
    r0 = *(0x20 + r31); // lbz @ 0x806FAA4C
    if (==) goto 0x0x806faa88;
    r3 = *(0x758c + r31); // lwz @ 0x806FAA58
    r12 = *(0x18 + r3); // lwz @ 0x806FAA5C
    r12 = *(0x10 + r12); // lwz @ 0x806FAA60
    /* mtctr r12 */ // 0x806FAA64
    /* bctrl  */ // 0x806FAA68
    if (!=) goto 0x0x806faa80;
    /* li r0, 0 */ // 0x806FAA74
    *(0x20 + r31) = r0; // stb @ 0x806FAA78
    /* b 0x806faa88 */ // 0x806FAA7C
    r3 = *(0x758c + r31); // lwz @ 0x806FAA80
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x806FAA88
    r31 = *(0xc + r1); // lwz @ 0x806FAA8C
}