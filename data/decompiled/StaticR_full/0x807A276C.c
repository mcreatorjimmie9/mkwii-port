/* Function at 0x807A276C, size=324 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 12 function(s) */

int FUN_807A276C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807A2778
    r3 = *(0x10 + r3); // lwz @ 0x807A277C
    FUN_8069526C(); // bl 0x8069526C
    if (!=) goto 0x0x807a289c;
    /* lis r3, 0 */ // 0x807A278C
    /* li r26, 0 */ // 0x807A2790
    r3 = *(0 + r3); // lwz @ 0x807A2794
    r0 = *(0xb68 + r3); // lwz @ 0x807A2798
    if (==) goto 0x0x807a27c4;
    if (==) goto 0x0x807a27c4;
    if (==) goto 0x0x807a27c4;
    if (==) goto 0x0x807a27c4;
    if (!=) goto 0x0x807a27c8;
    /* li r26, 1 */ // 0x807A27C4
    /* lis r3, 0 */ // 0x807A27C8
    r3 = *(0 + r3); // lwz @ 0x807A27CC
    FUN_808F8D14(r3); // bl 0x808F8D14
    /* lis r29, 0 */ // 0x807A27D4
    /* li r25, 0 */ // 0x807A27D8
    r3 = *(0 + r29); // lwz @ 0x807A27DC
    /* lis r31, 0 */ // 0x807A27E0
    r30 = *(0x24 + r3); // lbz @ 0x807A27E4
    /* b 0x807a2894 */ // 0x807A27E8
    r3 = *(0 + r29); // lwz @ 0x807A27EC
    r4 = r25;
    FUN_8061D97C(r4); // bl 0x8061D97C
    r28 = r3;
    if (==) goto 0x0x807a2890;
    FUN_8061DEF4(r4); // bl 0x8061DEF4
    if (!=) goto 0x0x807a2890;
    r3 = r28;
    FUN_8061E2BC(r3); // bl 0x8061E2BC
    r27 = *(0xc + r3); // lwz @ 0x807A2818
    r3 = r27;
    FUN_808F5FF8(r3, r3); // bl 0x808F5FF8
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x807A2828
    /* li r5, 0 */ // 0x807A282C
    FUN_807A9C14(r3, r4, r5); // bl 0x807A9C14
    r3 = r28;
    FUN_8061DECC(r4, r5, r3); // bl 0x8061DECC
    if (==) goto 0x0x807a2870;
    /* li r28, 0 */ // 0x807A2844
    r3 = r27;
    r4 = r28;
    FUN_808F6134(r3, r4); // bl 0x808F6134
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x807A2858
    /* li r5, 0 */ // 0x807A285C
    FUN_807A9C14(r4, r4, r5); // bl 0x807A9C14
    r28 = r28 + 1; // 0x807A2864
    if (<) goto 0x0x807a2848;
    if (==) goto 0x0x807a2890;
    r3 = r27;
    FUN_808F6074(r3); // bl 0x808F6074
    r4 = r3;
    r3 = *(0 + r31); // lwz @ 0x807A2884
    /* li r5, 0 */ // 0x807A2888
    FUN_807A9C14(r3, r4, r5); // bl 0x807A9C14
    r25 = r25 + 1; // 0x807A2890
    if (<) goto 0x0x807a27ec;
    r0 = *(0x34 + r1); // lwz @ 0x807A28A0
    return;
}