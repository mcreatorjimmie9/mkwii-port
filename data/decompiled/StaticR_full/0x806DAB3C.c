/* Function at 0x806DAB3C, size=328 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806DAB3C(int r3, int r4)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806DAB44
    *(0xd8 + r1) = r30; // stw @ 0x806DAB50
    *(0xd4 + r1) = r29; // stw @ 0x806DAB54
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806DAB5C
    r3 = *(0 + r3); // lwz @ 0x806DAB60
    r30 = *(0x14c + r3); // lwz @ 0x806DAB64
    if (!=) goto 0x0x806dab78;
    /* li r30, 0 */ // 0x806DAB70
    /* b 0x806dabcc */ // 0x806DAB74
    /* lis r31, 0 */ // 0x806DAB78
    r31 = r31 + 0; // 0x806DAB7C
    if (==) goto 0x0x806dabc8;
    r12 = *(0 + r30); // lwz @ 0x806DAB84
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806DAB8C
    /* mtctr r12 */ // 0x806DAB90
    /* bctrl  */ // 0x806DAB94
    /* b 0x806dabb0 */ // 0x806DAB98
    if (!=) goto 0x0x806dabac;
    /* li r0, 1 */ // 0x806DABA4
    /* b 0x806dabbc */ // 0x806DABA8
    r3 = *(0 + r3); // lwz @ 0x806DABAC
    if (!=) goto 0x0x806dab9c;
    /* li r0, 0 */ // 0x806DABB8
    if (==) goto 0x0x806dabc8;
    /* b 0x806dabcc */ // 0x806DABC4
    /* li r30, 0 */ // 0x806DABC8
    r12 = *(0 + r30); // lwz @ 0x806DABCC
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806DABD4
    /* mtctr r12 */ // 0x806DABD8
    /* bctrl  */ // 0x806DABDC
    /* lis r3, 0 */ // 0x806DABE0
    /* li r31, 0 */ // 0x806DABE4
    r3 = *(0 + r3); // lwz @ 0x806DABE8
    FUN_806F5918(r3); // bl 0x806F5918
    if (>) goto 0x0x806dac80;
    /* lis r4, 0 */ // 0x806DABF8
    /* slwi r0, r3, 2 */ // 0x806DABFC
    r4 = r4 + 0; // 0x806DAC00
    /* lwzx r4, r4, r0 */ // 0x806DAC04
    /* mtctr r4 */ // 0x806DAC08
    /* bctr  */ // 0x806DAC0C
    /* li r31, 0x18a6 */ // 0x806DAC10
    /* b 0x806dac80 */ // 0x806DAC14
    /* li r31, 0x18a7 */ // 0x806DAC18
    /* b 0x806dac80 */ // 0x806DAC1C
    /* li r31, 0x18a8 */ // 0x806DAC20
    /* b 0x806dac80 */ // 0x806DAC24
    /* li r31, 0x18a9 */ // 0x806DAC28
    /* b 0x806dac80 */ // 0x806DAC2C
    /* li r31, 0x18aa */ // 0x806DAC30
    /* b 0x806dac80 */ // 0x806DAC34
    /* li r31, 0x18ab */ // 0x806DAC38
    /* b 0x806dac80 */ // 0x806DAC3C
    /* li r31, 0x18ad */ // 0x806DAC40
    /* b 0x806dac80 */ // 0x806DAC44
    /* li r31, 0x815 */ // 0x806DAC48
    /* b 0x806dac80 */ // 0x806DAC4C
    /* lis r3, 0 */ // 0x806DAC50
    r3 = *(0 + r3); // lwz @ 0x806DAC54
    r3 = *(0x90 + r3); // lwz @ 0x806DAC58
    FUN_806845A4(r3); // bl 0x806845A4
    /* lis r4, 0 */ // 0x806DAC60
    /* li r0, 0xa8 */ // 0x806DAC64
    /* lfs f1, 0(r4) */ // 0x806DAC68
    r3 = r29;
    *(0x2878 + r29) = r0; // stw @ 0x806DAC70
    /* li r4, 1 */ // 0x806DAC74
    FUN_80671C48(r3, r4); // bl 0x80671C48
    /* b 0x806dacd8 */ // 0x806DAC7C
}