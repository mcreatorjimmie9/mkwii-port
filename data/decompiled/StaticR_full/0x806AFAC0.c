/* Function at 0x806AFAC0, size=196 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_806AFAC0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, -1 */ // 0x806AFAC8
    *(0x14 + r1) = r0; // stw @ 0x806AFACC
    /* li r0, 0 */ // 0x806AFAD0
    *(0xc + r1) = r31; // stw @ 0x806AFAD4
    r31 = r3;
    r5 = *(0x6c + r3); // lwz @ 0x806AFADC
    *(0x8b0 + r3) = r4; // stw @ 0x806AFAE0
    *(0x8b4 + r3) = r0; // stb @ 0x806AFAE8
    *(0x8b5 + r3) = r0; // stb @ 0x806AFAEC
    if (==) goto 0x0x806afb00;
    if (==) goto 0x0x806afb34;
    /* b 0x806afb64 */ // 0x806AFAFC
    /* li r4, 0x44d */ // 0x806AFB00
    /* li r5, 0 */ // 0x806AFB04
    r3 = r3 + 0x294; // 0x806AFB08
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    r3 = r31 + 0x408; // 0x806AFB10
    /* li r4, 0x3ea */ // 0x806AFB14
    /* li r5, 0 */ // 0x806AFB18
    FUN_806A0A34(r3, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x65c; // 0x806AFB20
    /* li r4, 0x3e9 */ // 0x806AFB24
    /* li r5, 0 */ // 0x806AFB28
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    /* b 0x806afb64 */ // 0x806AFB30
    /* li r4, 0x457 */ // 0x806AFB34
    /* li r5, 0 */ // 0x806AFB38
    r3 = r3 + 0x294; // 0x806AFB3C
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    r3 = r31 + 0x408; // 0x806AFB44
    /* li r4, 0x454 */ // 0x806AFB48
    /* li r5, 0 */ // 0x806AFB4C
    FUN_806A0A34(r3, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x65c; // 0x806AFB54
    /* li r4, 0x455 */ // 0x806AFB58
    /* li r5, 0 */ // 0x806AFB5C
    FUN_806A0A34(r5, r3, r4, r5); // bl 0x806A0A34
    r3 = r31 + 0x65c; // 0x806AFB64
    /* li r4, 0 */ // 0x806AFB68
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x806AFB70
    r31 = *(0xc + r1); // lwz @ 0x806AFB74
    return;
}