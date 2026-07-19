/* Function at 0x808B6B9C, size=632 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r26 */
/* Calls: 11 function(s) */

int FUN_808B6B9C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r26 */
    /* stmw r26, 8(r1) */ // 0x808B6BA8
    /* li r28, 0 */ // 0x808B6BAC
    r30 = r3;
    *(0x90c + r3) = r28; // stw @ 0x808B6BB4
    FUN_808CFA50(); // bl 0x808CFA50
    r4 = r3 rlwinm 1; // rlwinm
    /* clrlwi r3, r3, 0x18 */ // 0x808B6BC0
    r0 = r4 + 1; // 0x808B6BC4
    *(0x904 + r30) = r3; // stw @ 0x808B6BC8
    r5 = r30;
    /* li r6, 0 */ // 0x808B6BD0
    *(0x3d8 + r30) = r0; // stw @ 0x808B6BD4
    /* li r3, 1 */ // 0x808B6BD8
    *(0x6bc + r30) = r28; // stw @ 0x808B6BDC
    /* b 0x808b6c04 */ // 0x808B6BE0
    r4 = *(0x6bc + r30); // lwz @ 0x808B6BE4
    r0 = r3 << r6; // slw
    r6 = r6 + 1; // 0x808B6BEC
    r0 = r4 | r0; // 0x808B6BF0
    *(0x6bc + r30) = r0; // stw @ 0x808B6BF4
    *(0x8f4 + r5) = r28; // stw @ 0x808B6BF8
    *(0x35c + r5) = r28; // stw @ 0x808B6BFC
    r5 = r5 + 4; // 0x808B6C00
    r0 = *(0x904 + r30); // lwz @ 0x808B6C04
    if (<) goto 0x0x808b6be4;
    r3 = *(0x6bc + r30); // lwz @ 0x808B6C10
    /* li r0, 1 */ // 0x808B6C14
    *(0x6c0 + r30) = r3; // stw @ 0x808B6C18
    /* lis r5, 0 */ // 0x808B6C1C
    *(0x3dc + r30) = r0; // stb @ 0x808B6C20
    r3 = *(0 + r5); // lwz @ 0x808B6C24
    r3 = *(0 + r3); // lwz @ 0x808B6C28
    r0 = *(0 + r3); // lwz @ 0x808B6C2C
    if (<) goto 0x0x808b6c68;
    if (>) goto 0x0x808b6c68;
    /* li r0, 0x69 */ // 0x808B6C40
    *(0x3ec + r30) = r0; // stw @ 0x808B6C44
    /* lis r3, 0 */ // 0x808B6C48
    /* li r4, 2 */ // 0x808B6C4C
    r3 = *(0 + r3); // lwz @ 0x808B6C50
    /* li r0, 0 */ // 0x808B6C54
    *(0x1760 + r3) = r4; // stw @ 0x808B6C58
    r3 = *(0 + r5); // lwz @ 0x808B6C5C
    r3 = *(0x98 + r3); // lwz @ 0x808B6C60
    *(0x128 + r3) = r0; // stw @ 0x808B6C64
    /* lis r28, 0 */ // 0x808B6C68
    r3 = *(0 + r28); // lwz @ 0x808B6C6C
    r3 = *(0 + r3); // lwz @ 0x808B6C70
    r3 = *(0 + r3); // lwz @ 0x808B6C74
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808b6cc8;
    r3 = *(0 + r28); // lwz @ 0x808B6C84
    r26 = r30;
    /* li r27, 0 */ // 0x808B6C8C
    r3 = *(0x98 + r3); // lwz @ 0x808B6C90
    r0 = r3 + 0x238; // 0x808B6C94
    *(0x44 + r30) = r0; // stw @ 0x808B6C98
    /* b 0x808b6cb8 */ // 0x808B6C9C
    r3 = *(0x44 + r30); // lwz @ 0x808B6CA0
    r4 = r27;
    FUN_8066E0EC(r4); // bl 0x8066E0EC
    *(0x8f4 + r26) = r3; // stw @ 0x808B6CAC
    r26 = r26 + 4; // 0x808B6CB0
    r27 = r27 + 1; // 0x808B6CB4
    r0 = *(0x904 + r30); // lwz @ 0x808B6CB8
    if (<) goto 0x0x808b6ca0;
    /* b 0x808b6da8 */ // 0x808B6CC4
    r3 = *(0 + r28); // lwz @ 0x808B6CC8
    r26 = r30;
    /* li r31, 0 */ // 0x808B6CD0
    /* li r27, 0 */ // 0x808B6CD4
    r3 = *(0x98 + r3); // lwz @ 0x808B6CD8
    /* lis r29, 0 */ // 0x808B6CDC
    r0 = r3 + 0x188; // 0x808B6CE0
    *(0x44 + r30) = r0; // stw @ 0x808B6CE4
    /* b 0x808b6d9c */ // 0x808B6CE8
    r4 = *(0 + r28); // lwz @ 0x808B6CEC
    r3 = *(0 + r4); // lwz @ 0x808B6CF0
    r0 = *(0 + r3); // lwz @ 0x808B6CF4
    if (<) goto 0x0x808b6d08;
    if (<=) goto 0x0x808b6d10;
    if (!=) goto 0x0x808b6d58;
    r0 = *(0x98 + r4); // lwz @ 0x808B6D10
    r3 = *(0 + r29); // lwz @ 0x808B6D14
    r4 = r0 + r27; // 0x808B6D18
    r0 = *(0x2d4 + r3); // lbz @ 0x808B6D1C
    r5 = *(0x154 + r4); // lwz @ 0x808B6D20
    if (>=) goto 0x0x808b6d40;
    r3 = *(0x44 + r30); // lwz @ 0x808B6D2C
    r4 = r31;
    /* clrlwi r5, r5, 0x18 */ // 0x808B6D34
    FUN_8066DE34(r4); // bl 0x8066DE34
    /* b 0x808b6d70 */ // 0x808B6D3C
    /* subf r0, r0, r5 */ // 0x808B6D40
    r3 = *(0x44 + r30); // lwz @ 0x808B6D44
    r4 = r31;
    /* clrlwi r5, r0, 0x18 */ // 0x808B6D4C
    FUN_8066DF04(r4); // bl 0x8066DF04
    /* b 0x808b6d70 */ // 0x808B6D54
    r4 = *(0x98 + r4); // lwz @ 0x808B6D58
    r6 = r31;
    /* li r5, 0 */ // 0x808B6D60
    r3 = r4 + 0x188; // 0x808B6D64
    r4 = r4 + 0x238; // 0x808B6D68
    FUN_8066E6F0(r6, r5, r3, r4); // bl 0x8066E6F0
    r3 = *(0x44 + r30); // lwz @ 0x808B6D70
    r4 = r31;
    /* li r5, 1 */ // 0x808B6D78
    FUN_8066E0FC(r4, r4, r5); // bl 0x8066E0FC
    r3 = *(0x44 + r30); // lwz @ 0x808B6D80
    r4 = r31;
    FUN_8066E0EC(r4, r5, r4); // bl 0x8066E0EC
    *(0x8f4 + r26) = r3; // stw @ 0x808B6D8C
    r27 = r27 + 4; // 0x808B6D90
    r26 = r26 + 4; // 0x808B6D94
    r31 = r31 + 1; // 0x808B6D98
    r0 = *(0x904 + r30); // lwz @ 0x808B6D9C
    if (<) goto 0x0x808b6cec;
    /* lis r31, 0 */ // 0x808B6DA8
    r3 = *(0 + r31); // lwz @ 0x808B6DAC
    r3 = *(0 + r3); // lwz @ 0x808B6DB0
    r3 = *(0 + r3); // lwz @ 0x808B6DB4
    FUN_808CF8A4(); // bl 0x808CF8A4
    if (!=) goto 0x0x808b6ddc;
    r3 = *(0 + r31); // lwz @ 0x808B6DC4
    r3 = *(0 + r3); // lwz @ 0x808B6DC8
    r3 = *(0 + r3); // lwz @ 0x808B6DCC
    FUN_808CF8D8(); // bl 0x808CF8D8
    if (==) goto 0x0x808b6e04;
    r3 = r30;
    /* li r4, 0 */ // 0x808B6DE0
    /* b 0x808b6df8 */ // 0x808B6DE4
    r0 = *(0x8f4 + r3); // lwz @ 0x808B6DE8
    r4 = r4 + 1; // 0x808B6DEC
    *(0x35c + r3) = r0; // stw @ 0x808B6DF0
    r3 = r3 + 4; // 0x808B6DF4
    r0 = *(0x904 + r30); // lwz @ 0x808B6DF8
    if (<) goto 0x0x808b6de8;
    r28 = *(0x904 + r30); // lwz @ 0x808B6E04
    /* mulli r3, r28, 0x178 */ // 0x808B6E08
    r3 = r3 + 0x10; // 0x808B6E0C
    FUN_805E3430(r3); // bl 0x805E3430
}