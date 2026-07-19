/* Function at 0x805FAE1C, size=316 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_805FAE1C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r7, 0 */ // 0x805FAE24
    *(0x14 + r1) = r29; // stw @ 0x805FAE34
    *(0x10 + r1) = r28; // stw @ 0x805FAE38
    r28 = r3;
    /* lbzu r6, 0(r7) */ // 0x805FAE40
    *(8 + r1) = r6; // stb @ 0x805FAE44
    r5 = *(1 + r7); // lbz @ 0x805FAE48
    r4 = *(2 + r7); // lbz @ 0x805FAE4C
    r0 = *(3 + r7); // lbz @ 0x805FAE50
    *(9 + r1) = r5; // stb @ 0x805FAE54
    *(0xa + r1) = r4; // stb @ 0x805FAE58
    *(0xb + r1) = r0; // stb @ 0x805FAE5C
    r0 = *(8 + r1); // lwz @ 0x805FAE60
    *(0x14 + r3) = r0; // stw @ 0x805FAE64
    FUN_8061E2BC(); // bl 0x8061E2BC
    r31 = r3;
    /* li r30, 0 */ // 0x805FAE70
    r29 = r31;
    /* b 0x805fae9c */ // 0x805FAE78
    r12 = *(0xc + r28); // lwz @ 0x805FAE7C
    r3 = r28;
    r4 = *(0xd8 + r29); // lwz @ 0x805FAE84
    r12 = *(8 + r12); // lwz @ 0x805FAE88
    /* mtctr r12 */ // 0x805FAE8C
    /* bctrl  */ // 0x805FAE90
    r29 = r29 + 4; // 0x805FAE94
    r30 = r30 + 1; // 0x805FAE98
    r0 = *(0xf0 + r31); // lwz @ 0x805FAE9C
    if (<) goto 0x0x805fae7c;
    r3 = r28;
    FUN_8061DF18(r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x805FAEB0
    r12 = *(0x28 + r12); // lwz @ 0x805FAEB4
    /* mtctr r12 */ // 0x805FAEB8
    /* bctrl  */ // 0x805FAEBC
    /* li r31, 0 */ // 0x805FAEC0
    /* b 0x805faee8 */ // 0x805FAEC4
    r3 = r28;
    r4 = r31;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x805FAED4
    r12 = *(0x28 + r12); // lwz @ 0x805FAED8
    /* mtctr r12 */ // 0x805FAEDC
    /* bctrl  */ // 0x805FAEE0
    r31 = r31 + 1; // 0x805FAEE4
    r3 = r28;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x805FAEF0
    if (<) goto 0x0x805faec8;
    /* li r31, 0 */ // 0x805FAEFC
    /* b 0x805faf24 */ // 0x805FAF00
    r3 = r28;
    r4 = r31;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r12 = *(0xc + r3); // lwz @ 0x805FAF10
    r12 = *(0x28 + r12); // lwz @ 0x805FAF14
    /* mtctr r12 */ // 0x805FAF18
    /* bctrl  */ // 0x805FAF1C
    r31 = r31 + 1; // 0x805FAF20
    r3 = r28;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x805FAF2C
    if (<) goto 0x0x805faf04;
    r0 = *(0x24 + r1); // lwz @ 0x805FAF38
    r31 = *(0x1c + r1); // lwz @ 0x805FAF3C
    r30 = *(0x18 + r1); // lwz @ 0x805FAF40
    r29 = *(0x14 + r1); // lwz @ 0x805FAF44
    r28 = *(0x10 + r1); // lwz @ 0x805FAF48
    return;
}