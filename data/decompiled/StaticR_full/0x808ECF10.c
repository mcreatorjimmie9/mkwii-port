/* Function at 0x808ECF10, size=348 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808ECF10(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808ECF24
    r29 = r3;
    r0 = *(0xb44 + r3); // lwz @ 0x808ECF2C
    if (==) goto 0x0x808ed050;
    /* lis r5, 0 */ // 0x808ECF38
    r4 = *(0 + r5); // lwz @ 0x808ECF3C
    r4 = *(0x18 + r4); // lwz @ 0x808ECF40
    r0 = *(0x11 + r4); // lbz @ 0x808ECF44
    if (==) goto 0x0x808ed028;
    /* li r0, 0 */ // 0x808ECF50
    *(0xa40 + r3) = r0; // stb @ 0x808ECF54
    /* lis r3, 0 */ // 0x808ECF58
    r3 = *(0 + r3); // lwz @ 0x808ECF5C
    r3 = *(0 + r3); // lwz @ 0x808ECF60
    r30 = *(0x204 + r3); // lwz @ 0x808ECF64
    if (!=) goto 0x0x808ecf78;
    /* li r30, 0 */ // 0x808ECF70
    /* b 0x808ecfcc */ // 0x808ECF74
    /* lis r31, 0 */ // 0x808ECF78
    r31 = r31 + 0; // 0x808ECF7C
    if (==) goto 0x0x808ecfc8;
    r12 = *(0 + r30); // lwz @ 0x808ECF84
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x808ECF8C
    /* mtctr r12 */ // 0x808ECF90
    /* bctrl  */ // 0x808ECF94
    /* b 0x808ecfb0 */ // 0x808ECF98
    if (!=) goto 0x0x808ecfac;
    /* li r0, 1 */ // 0x808ECFA4
    /* b 0x808ecfbc */ // 0x808ECFA8
    r3 = *(0 + r3); // lwz @ 0x808ECFAC
    if (!=) goto 0x0x808ecf9c;
    /* li r0, 0 */ // 0x808ECFB8
    if (==) goto 0x0x808ecfc8;
    /* b 0x808ecfcc */ // 0x808ECFC4
    /* li r30, 0 */ // 0x808ECFC8
    r5 = *(0xb44 + r29); // lwz @ 0x808ECFCC
    r3 = r30;
    /* li r4, 0 */ // 0x808ECFD4
    FUN_806CCB14(r3, r4); // bl 0x806CCB14
    /* lis r3, 0 */ // 0x808ECFDC
    r3 = *(0 + r3); // lwz @ 0x808ECFE0
    if (==) goto 0x0x808ed050;
    r3 = *(0x14 + r3); // lwz @ 0x808ECFEC
    if (==) goto 0x0x808ed050;
    r4 = *(0x18 + r3); // lwz @ 0x808ECFF8
    r0 = *(0xb44 + r29); // lwz @ 0x808ECFFC
    if (==) goto 0x0x808ed050;
    if (==) goto 0x0x808ed014;
    *(0x14 + r4) = r0; // stw @ 0x808ED010
    r3 = *(0x18 + r3); // lwz @ 0x808ED014
    /* li r4, 0 */ // 0x808ED018
    /* li r5, 2 */ // 0x808ED01C
    FUN_808E08F0(r4, r5); // bl 0x808E08F0
    /* b 0x808ed050 */ // 0x808ED024
    /* li r0, 1 */ // 0x808ED028
    *(0xa40 + r3) = r0; // stb @ 0x808ED02C
    r3 = *(0 + r5); // lwz @ 0x808ED030
    r3 = *(0x14 + r3); // lwz @ 0x808ED034
    r3 = *(0x18 + r3); // lwz @ 0x808ED038
    if (==) goto 0x0x808ed050;
    /* li r4, 0 */ // 0x808ED044
    /* li r5, 0 */ // 0x808ED048
    FUN_808E08F0(r4, r5); // bl 0x808E08F0
    r0 = *(0x24 + r1); // lwz @ 0x808ED050
    r31 = *(0x1c + r1); // lwz @ 0x808ED054
    r30 = *(0x18 + r1); // lwz @ 0x808ED058
    r29 = *(0x14 + r1); // lwz @ 0x808ED05C
    return;
}