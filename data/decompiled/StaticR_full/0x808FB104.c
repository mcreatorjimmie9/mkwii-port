/* Function at 0x808FB104, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_808FB104(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x808FB11C
    r30 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808FB124
    *(0x10 + r1) = r28; // stw @ 0x808FB128
    if (==) goto 0x0x808fb220;
    r0 = *(0xb0 + r3); // lbz @ 0x808FB130
    /* lis r4, 0 */ // 0x808FB134
    r4 = r4 + 0; // 0x808FB138
    *(0 + r3) = r4; // stw @ 0x808FB13C
    if (!=) goto 0x0x808fb160;
    /* lis r3, 0 */ // 0x808FB148
    r3 = *(0 + r3); // lwz @ 0x808FB14C
    if (==) goto 0x0x808fb160;
    r3 = r3 + -0x10; // 0x808FB158
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* lis r4, 0 */ // 0x808FB160
    /* addic. r0, r30, 0x310 */ // 0x808FB164
    r3 = *(0 + r4); // lbz @ 0x808FB168
    r0 = r3 + -1; // 0x808FB16C
    *(0 + r4) = r0; // stb @ 0x808FB170
    if (==) goto 0x0x808fb19c;
    r0 = *(0x310 + r30); // lwz @ 0x808FB178
    if (==) goto 0x0x808fb194;
    /* lis r4, 0 */ // 0x808FB184
    r3 = *(0x314 + r30); // lwz @ 0x808FB188
    r4 = r4 + 0; // 0x808FB18C
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r0, 0 */ // 0x808FB194
    *(0x310 + r30) = r0; // stw @ 0x808FB198
    /* addic. r0, r30, 0x150 */ // 0x808FB19C
    if (==) goto 0x0x808fb210;
    r0 = *(0x154 + r30); // lwz @ 0x808FB1A4
    if (==) goto 0x0x808fb1ec;
    r3 = *(0x158 + r30); // lwz @ 0x808FB1B0
    FUN_805E3430(); // bl 0x805E3430
    /* li r29, 0 */ // 0x808FB1B8
    /* li r28, 0 */ // 0x808FB1BC
    /* b 0x808fb1d8 */ // 0x808FB1C0
    r3 = *(0x170 + r30); // lwz @ 0x808FB1C4
    /* lwzx r3, r3, r28 */ // 0x808FB1C8
    FUN_805E3430(); // bl 0x805E3430
    r28 = r28 + 4; // 0x808FB1D0
    r29 = r29 + 1; // 0x808FB1D4
    r0 = *(0x154 + r30); // lwz @ 0x808FB1D8
    if (<) goto 0x0x808fb1c4;
    r3 = *(0x170 + r30); // lwz @ 0x808FB1E4
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x15c + r30); // lwz @ 0x808FB1EC
    /* li r3, 0 */ // 0x808FB1F0
    *(0x154 + r30) = r3; // stw @ 0x808FB1F4
    if (==) goto 0x0x808fb208;
    r3 = *(0x160 + r30); // lwz @ 0x808FB200
    FUN_805E3430(r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x808FB208
    *(0x15c + r30) = r0; // stw @ 0x808FB20C
}