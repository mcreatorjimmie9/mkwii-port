/* Function at 0x80787EB0, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80787EB0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80787EC4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80787ECC
    r29 = r3;
    r0 = *(0x24 + r3); // lbz @ 0x80787ED4
    if (==) goto 0x0x80787ee8;
    /* li r3, 0 */ // 0x80787EE0
    /* b 0x80787fa0 */ // 0x80787EE4
    if (==) goto 0x0x80787f18;
    r3 = *(0x20 + r3); // lwz @ 0x80787EF0
    if (==) goto 0x0x80787f18;
    r3 = *(0 + r3); // lwz @ 0x80787EFC
    if (==) goto 0x0x80787f10;
    /* li r4, 0 */ // 0x80787F08
    FUN_805E3430(r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x80787F10
    *(0x20 + r29) = r0; // stw @ 0x80787F14
    /* li r0, 2 */ // 0x80787F18
    r5 = r29;
    *(0x24 + r29) = r31; // stb @ 0x80787F20
    /* li r4, 0 */ // 0x80787F24
    /* li r3, 0 */ // 0x80787F28
    /* mtctr r0 */ // 0x80787F2C
    r0 = *(0x14 + r5); // lwz @ 0x80787F30
    if (!=) goto 0x0x80787f4c;
    /* slwi r0, r3, 2 */ // 0x80787F3C
    r3 = r29 + r0; // 0x80787F40
    r4 = r3 + 0x14; // 0x80787F44
    /* b 0x80787f58 */ // 0x80787F48
    r5 = r5 + 4; // 0x80787F4C
    r3 = r3 + 1; // 0x80787F50
    if (counter-- != 0) goto 0x0x80787f30;
    if (!=) goto 0x0x80787f7c;
    r3 = *(0x20 + r29); // lwz @ 0x80787F60
    r3 = *(0 + r3); // lwz @ 0x80787F64
    if (==) goto 0x0x80787f78;
    /* li r4, 0 */ // 0x80787F70
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x20 + r29); // lwz @ 0x80787F78
    *(0x20 + r29) = r4; // stw @ 0x80787F7C
    /* lis r3, 0 */ // 0x80787F80
    r5 = r30;
    r3 = *(0 + r3); // lwz @ 0x80787F88
    r12 = *(0xf8 + r3); // lwzu @ 0x80787F8C
    r12 = *(0x44 + r12); // lwz @ 0x80787F90
    /* mtctr r12 */ // 0x80787F94
    /* bctrl  */ // 0x80787F98
    r3 = *(0x20 + r29); // lwz @ 0x80787F9C
    r0 = *(0x24 + r1); // lwz @ 0x80787FA0
    r31 = *(0x1c + r1); // lwz @ 0x80787FA4
    r30 = *(0x18 + r1); // lwz @ 0x80787FA8
    r29 = *(0x14 + r1); // lwz @ 0x80787FAC
    return;
}