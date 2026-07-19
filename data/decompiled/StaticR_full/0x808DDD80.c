/* Function at 0x808DDD80, size=192 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808DDD80(int r3, int r4)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    *(0x74 + r1) = r0; // stw @ 0x808DDD8C
    *(0x6c + r1) = r31; // stw @ 0x808DDD90
    r31 = r3;
    if (!=) goto 0x0x808dddb0;
    r12 = *(0 + r3); // lwz @ 0x808DDD9C
    r12 = *(0x74 + r12); // lwz @ 0x808DDDA0
    /* mtctr r12 */ // 0x808DDDA4
    /* bctrl  */ // 0x808DDDA8
    /* b 0x808de09c */ // 0x808DDDAC
    r12 = *(0 + r3); // lwz @ 0x808DDDB0
    r12 = *(0x12c + r12); // lwz @ 0x808DDDB4
    /* mtctr r12 */ // 0x808DDDB8
    /* bctrl  */ // 0x808DDDBC
    /* lfs f0, 0(r3) */ // 0x808DDDC0
    /* stfs f0, 0x38(r1) */ // 0x808DDDC8
    /* lfs f0, 4(r3) */ // 0x808DDDCC
    /* stfs f0, 0x3c(r1) */ // 0x808DDDD0
    /* lfs f0, 8(r3) */ // 0x808DDDD4
    /* stfs f0, 0x40(r1) */ // 0x808DDDD8
    /* lfs f0, 0xc(r3) */ // 0x808DDDDC
    /* stfs f0, 0x44(r1) */ // 0x808DDDE0
    /* lfs f0, 0x10(r3) */ // 0x808DDDE4
    /* stfs f0, 0x48(r1) */ // 0x808DDDE8
    /* lfs f0, 0x14(r3) */ // 0x808DDDEC
    /* stfs f0, 0x4c(r1) */ // 0x808DDDF0
    /* lfs f0, 0x18(r3) */ // 0x808DDDF4
    /* stfs f0, 0x50(r1) */ // 0x808DDDF8
    /* lfs f0, 0x1c(r3) */ // 0x808DDDFC
    /* stfs f0, 0x54(r1) */ // 0x808DDE00
    /* lfs f0, 0x20(r3) */ // 0x808DDE04
    /* stfs f0, 0x58(r1) */ // 0x808DDE08
    /* lfs f0, 0x24(r3) */ // 0x808DDE0C
    /* stfs f0, 0x5c(r1) */ // 0x808DDE10
    /* lfs f0, 0x28(r3) */ // 0x808DDE14
    /* stfs f0, 0x60(r1) */ // 0x808DDE18
    /* lfs f0, 0x2c(r3) */ // 0x808DDE1C
    /* stfs f0, 0x64(r1) */ // 0x808DDE24
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0xac + r31); // lwz @ 0x808DDE2C
    /* lfs f0, 0x38(r1) */ // 0x808DDE30
    /* stfs f0, 4(r3) */ // 0x808DDE34
    /* lfs f0, 0x3c(r1) */ // 0x808DDE38
    /* stfs f0, 8(r3) */ // 0x808DDE3C
}