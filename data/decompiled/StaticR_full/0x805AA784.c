/* Function at 0x805AA784, size=412 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r26 */
/* Calls: 6 function(s) */

int FUN_805AA784(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x805AA78C
    /* li r6, 1 */ // 0x805AA790
    *(0x44 + r1) = r0; // stw @ 0x805AA794
    /* li r0, 0 */ // 0x805AA798
    /* stmw r26, 0x28(r1) */ // 0x805AA79C
    r31 = r3;
    r5 = *(0 + r4); // lwz @ 0x805AA7A4
    /* lis r4, 0 */ // 0x805AA7A8
    *(0x60d + r5) = r6; // stb @ 0x805AA7AC
    *(0x2530 + r3) = r0; // stb @ 0x805AA7B0
    *(0x2531 + r3) = r0; // stb @ 0x805AA7B4
    r3 = *(0 + r4); // lwz @ 0x805AA7B8
    if (==) goto 0x0x805aa7cc;
    r3 = r3 + 0x2f0; // 0x805AA7C4
    FUN_805E3550(r3); // bl 0x805E3550
    r29 = *(0x14 + r31); // lwz @ 0x805AA7CC
    if (==) goto 0x0x805aa7f8;
    r12 = *(0 + r29); // lwz @ 0x805AA7D8
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x805AA7E0
    /* mtctr r12 */ // 0x805AA7E4
    /* bctrl  */ // 0x805AA7E8
    if (!=) goto 0x0x805aa7f8;
    /* b 0x805aa7fc */ // 0x805AA7F4
    /* li r29, 0 */ // 0x805AA7F8
    r28 = *(0x18 + r31); // lwz @ 0x805AA7FC
    if (==) goto 0x0x805aa828;
    r12 = *(0 + r28); // lwz @ 0x805AA808
    r3 = r28;
    r12 = *(0xc + r12); // lwz @ 0x805AA810
    /* mtctr r12 */ // 0x805AA814
    /* bctrl  */ // 0x805AA818
    if (!=) goto 0x0x805aa828;
    /* b 0x805aa82c */ // 0x805AA824
    /* li r28, 0 */ // 0x805AA828
    r27 = *(0x1c + r31); // lwz @ 0x805AA82C
    if (==) goto 0x0x805aa858;
    r12 = *(0 + r27); // lwz @ 0x805AA838
    r3 = r27;
    r12 = *(0xc + r12); // lwz @ 0x805AA840
    /* mtctr r12 */ // 0x805AA844
    /* bctrl  */ // 0x805AA848
    if (!=) goto 0x0x805aa858;
    /* b 0x805aa85c */ // 0x805AA854
    /* li r27, 0 */ // 0x805AA858
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* li r4, 8 */ // 0x805AA868
    FUN_805E364C(r3, r3, r4); // bl 0x805E364C
    r0 = r3 + 1; // 0x805AA870
    r3 = r29;
    /* slwi r4, r0, 5 */ // 0x805AA878
    *(0x2514 + r31) = r4; // stw @ 0x805AA87C
    /* li r5, 4 */ // 0x805AA880
    r12 = *(0 + r29); // lwz @ 0x805AA884
    r12 = *(0x14 + r12); // lwz @ 0x805AA888
    /* mtctr r12 */ // 0x805AA88C
    /* bctrl  */ // 0x805AA890
    *(0x251c + r31) = r3; // stw @ 0x805AA894
    /* li r4, 8 */ // 0x805AA89C
    FUN_805E364C(r3, r4); // bl 0x805E364C
    r0 = r3 + 1; // 0x805AA8A4
    r3 = r29;
    /* slwi r4, r0, 5 */ // 0x805AA8AC
    *(0x2518 + r31) = r4; // stw @ 0x805AA8B0
    /* li r5, 4 */ // 0x805AA8B4
    r12 = *(0 + r29); // lwz @ 0x805AA8B8
    r12 = *(0x14 + r12); // lwz @ 0x805AA8BC
    /* mtctr r12 */ // 0x805AA8C0
    /* bctrl  */ // 0x805AA8C4
    *(0x2520 + r31) = r3; // stw @ 0x805AA8C8
    /* li r4, -1 */ // 0x805AA8D0
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r12 = *(0 + r29); // lwz @ 0x805AA8D8
    r3 = r29;
    /* li r4, 4 */ // 0x805AA8E0
    r12 = *(0x24 + r12); // lwz @ 0x805AA8E4
    /* mtctr r12 */ // 0x805AA8E8
    /* bctrl  */ // 0x805AA8EC
    r12 = *(0 + r28); // lwz @ 0x805AA8F0
    r30 = r3;
    r3 = r28;
    /* li r4, 4 */ // 0x805AA8FC
    r12 = *(0x24 + r12); // lwz @ 0x805AA900
    /* mtctr r12 */ // 0x805AA904
    /* bctrl  */ // 0x805AA908
    r26 = r3;
    r3 = r30;
    r4 = r29;
    /* li r5, 0 */ // 0x805AA918
    FUN_805E3430(r3, r4, r5); // bl 0x805E3430
}