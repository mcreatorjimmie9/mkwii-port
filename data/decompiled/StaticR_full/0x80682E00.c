/* Function at 0x80682E00, size=408 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80682E00(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x80682E14
    r29 = r3;
    r0 = *(0x68 + r3); // lwz @ 0x80682E1C
    if (!=) goto 0x0x80682f7c;
    /* lis r3, 0 */ // 0x80682E28
    r3 = *(0 + r3); // lwz @ 0x80682E2C
    r3 = *(0 + r3); // lwz @ 0x80682E30
    r30 = *(0x154 + r3); // lwz @ 0x80682E34
    if (!=) goto 0x0x80682e48;
    /* li r30, 0 */ // 0x80682E40
    /* b 0x80682e9c */ // 0x80682E44
    /* lis r31, 0 */ // 0x80682E48
    r31 = r31 + 0; // 0x80682E4C
    if (==) goto 0x0x80682e98;
    r12 = *(0 + r30); // lwz @ 0x80682E54
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80682E5C
    /* mtctr r12 */ // 0x80682E60
    /* bctrl  */ // 0x80682E64
    /* b 0x80682e80 */ // 0x80682E68
    if (!=) goto 0x0x80682e7c;
    /* li r0, 1 */ // 0x80682E74
    /* b 0x80682e8c */ // 0x80682E78
    r3 = *(0 + r3); // lwz @ 0x80682E7C
    if (!=) goto 0x0x80682e6c;
    /* li r0, 0 */ // 0x80682E88
    if (==) goto 0x0x80682e98;
    /* b 0x80682e9c */ // 0x80682E94
    /* li r30, 0 */ // 0x80682E98
    r0 = *(0x270 + r30); // lwz @ 0x80682E9C
    if (!=) goto 0x0x80682f7c;
    /* lis r3, 0 */ // 0x80682EA8
    r3 = *(0 + r3); // lwz @ 0x80682EAC
    r3 = *(0 + r3); // lwz @ 0x80682EB0
    r30 = *(0x144 + r3); // lwz @ 0x80682EB4
    if (!=) goto 0x0x80682ec8;
    /* li r30, 0 */ // 0x80682EC0
    /* b 0x80682f1c */ // 0x80682EC4
    /* lis r31, 0 */ // 0x80682EC8
    r31 = r31 + 0; // 0x80682ECC
    if (==) goto 0x0x80682f18;
    r12 = *(0 + r30); // lwz @ 0x80682ED4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x80682EDC
    /* mtctr r12 */ // 0x80682EE0
    /* bctrl  */ // 0x80682EE4
    /* b 0x80682f00 */ // 0x80682EE8
    if (!=) goto 0x0x80682efc;
    /* li r0, 1 */ // 0x80682EF4
    /* b 0x80682f0c */ // 0x80682EF8
    r3 = *(0 + r3); // lwz @ 0x80682EFC
    if (!=) goto 0x0x80682eec;
    /* li r0, 0 */ // 0x80682F08
    if (==) goto 0x0x80682f18;
    /* b 0x80682f1c */ // 0x80682F14
    /* li r30, 0 */ // 0x80682F18
    r12 = *(0 + r30); // lwz @ 0x80682F1C
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x80682F24
    /* mtctr r12 */ // 0x80682F28
    /* bctrl  */ // 0x80682F2C
    r12 = *(0 + r30); // lwz @ 0x80682F30
    r3 = r30;
    /* li r4, 0x811 */ // 0x80682F38
    /* li r5, 0 */ // 0x80682F3C
    r12 = *(0x68 + r12); // lwz @ 0x80682F40
    /* mtctr r12 */ // 0x80682F44
    /* bctrl  */ // 0x80682F48
    r12 = *(0 + r29); // lwz @ 0x80682F4C
    r3 = r29;
    /* li r4, 0x4f */ // 0x80682F54
    /* li r5, 0 */ // 0x80682F58
    r12 = *(0x24 + r12); // lwz @ 0x80682F5C
    /* mtctr r12 */ // 0x80682F60
    /* bctrl  */ // 0x80682F64
    /* lis r3, 0 */ // 0x80682F68
    r3 = *(0 + r3); // lwz @ 0x80682F6C
    FUN_806FDEC4(r3); // bl 0x806FDEC4
    /* li r0, 1 */ // 0x80682F74
    *(0x68 + r29) = r0; // stw @ 0x80682F78
    r0 = *(0x24 + r1); // lwz @ 0x80682F7C
    r31 = *(0x1c + r1); // lwz @ 0x80682F80
    r30 = *(0x18 + r1); // lwz @ 0x80682F84
    r29 = *(0x14 + r1); // lwz @ 0x80682F88
    return;
}