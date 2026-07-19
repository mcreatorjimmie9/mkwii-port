/* Function at 0x805A7AB4, size=872 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */

int FUN_805A7AB4(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r6, 0xff */ // 0x805A7AB8
    /* li r5, 0 */ // 0x805A7ABC
    r0 = r4 + -1; // 0x805A7AC0
    *(0x1c + r1) = r31; // stw @ 0x805A7AC4
    r7 = r4 + 1; // 0x805A7AC8
    /* li r8, 0 */ // 0x805A7ACC
    /* li r10, 6 */ // 0x805A7AD0
    *(0x18 + r1) = r30; // stw @ 0x805A7AD4
    /* li r11, 6 */ // 0x805A7AD8
    *(0x14 + r1) = r29; // stw @ 0x805A7ADC
    *(0x11 + r3) = r5; // stb @ 0x805A7AE0
    *(0x10 + r3) = r5; // stb @ 0x805A7AE4
    /* lis r5, 0 */ // 0x805A7AE8
    *(4 + r3) = r6; // stb @ 0x805A7AEC
    *(5 + r3) = r6; // stb @ 0x805A7AF0
    *(6 + r3) = r6; // stb @ 0x805A7AF4
    *(7 + r3) = r6; // stb @ 0x805A7AF8
    *(8 + r3) = r6; // stb @ 0x805A7AFC
    *(9 + r3) = r6; // stb @ 0x805A7B00
    *(0xa + r3) = r6; // stb @ 0x805A7B04
    *(0xb + r3) = r6; // stb @ 0x805A7B08
    *(0xc + r3) = r6; // stb @ 0x805A7B0C
    *(0xd + r3) = r6; // stb @ 0x805A7B10
    *(0xe + r3) = r6; // stb @ 0x805A7B14
    *(0xf + r3) = r6; // stb @ 0x805A7B18
    /* b 0x805a7dc0 */ // 0x805A7B1C
    /* clrlwi r12, r8, 0x10 */ // 0x805A7B24
    /* li r9, 0 */ // 0x805A7B28
    if (==) goto 0x0x805a7b44;
    r6 = *(0x14 + r30); // lwz @ 0x805A7B30
    r6 = *(4 + r6); // lhz @ 0x805A7B34
    if (==) goto 0x0x805a7b44;
    /* li r9, 1 */ // 0x805A7B40
    if (==) goto 0x0x805a7b58;
    r6 = *(0x14 + r30); // lwz @ 0x805A7B4C
    r6 = *(4 + r6); // lhz @ 0x805A7B50
    /* b 0x805a7b5c */ // 0x805A7B54
    /* li r6, 0 */ // 0x805A7B58
    if (>=) goto 0x0x805a7b90;
    r12 = *(0x14 + r30); // lwz @ 0x805A7B64
    /* clrlwi r9, r8, 0x10 */ // 0x805A7B68
    r6 = *(4 + r12); // lhz @ 0x805A7B6C
    if (>=) goto 0x0x805a7b88;
    r9 = *(0 + r12); // lwz @ 0x805A7B78
    r6 = r8 rlwinm 2; // rlwinm
    /* lwzx r6, r9, r6 */ // 0x805A7B80
    /* b 0x805a7b94 */ // 0x805A7B84
    /* li r6, 0 */ // 0x805A7B88
    /* b 0x805a7b94 */ // 0x805A7B8C
    /* li r6, 0 */ // 0x805A7B90
    r9 = *(0 + r6); // lwz @ 0x805A7B94
    r12 = *(0 + r9); // lbz @ 0x805A7B98
    if (<) goto 0x0x805a7bc4;
    r9 = *(1 + r9); // lbz @ 0x805A7BA4
    r9 = r12 + r9; // 0x805A7BA8
    r9 = r9 + -1; // 0x805A7BAC
    /* clrlwi r9, r9, 0x18 */ // 0x805A7BB0
    if (>) goto 0x0x805a7bc4;
    /* li r9, 1 */ // 0x805A7BBC
    /* b 0x805a7bc8 */ // 0x805A7BC0
    /* li r9, 0 */ // 0x805A7BC4
    if (==) goto 0x0x805a7dbc;
    if (!=) goto 0x0x805a7ca0;
    /* li r9, 0 */ // 0x805A7BD8
    /* mtctr r11 */ // 0x805A7BDC
    r30 = *(0 + r6); // lwz @ 0x805A7BE0
    /* clrlwi r12, r9, 0x10 */ // 0x805A7BE4
    r12 = r30 + r12; // 0x805A7BE8
    r31 = *(2 + r12); // lbz @ 0x805A7BEC
    if (==) goto 0x0x805a7c94;
    r29 = *(0 + r5); // lwz @ 0x805A7BF8
    /* li r30, 0 */ // 0x805A7BFC
    r12 = *(0x14 + r29); // lwz @ 0x805A7C00
    if (==) goto 0x0x805a7c1c;
    r12 = *(4 + r12); // lhz @ 0x805A7C0C
    if (==) goto 0x0x805a7c1c;
    /* li r30, 1 */ // 0x805A7C18
    if (==) goto 0x0x805a7c30;
    r12 = *(0x14 + r29); // lwz @ 0x805A7C24
    r12 = *(4 + r12); // lhz @ 0x805A7C28
    /* b 0x805a7c34 */ // 0x805A7C2C
    /* li r12, 0 */ // 0x805A7C30
    if (>=) goto 0x0x805a7c64;
    r30 = *(0x14 + r29); // lwz @ 0x805A7C3C
    r12 = *(4 + r30); // lhz @ 0x805A7C40
    if (>=) goto 0x0x805a7c5c;
    r30 = *(0 + r30); // lwz @ 0x805A7C4C
    r12 = r31 rlwinm 2; // rlwinm
    /* lwzx r12, r30, r12 */ // 0x805A7C54
    /* b 0x805a7c68 */ // 0x805A7C58
    /* li r12, 0 */ // 0x805A7C5C
    /* b 0x805a7c68 */ // 0x805A7C60
    /* li r12, 0 */ // 0x805A7C64
    r30 = *(0 + r12); // lwz @ 0x805A7C68
    r12 = *(0x10 + r3); // lbz @ 0x805A7C6C
    r31 = *(1 + r30); // lbz @ 0x805A7C70
    r30 = *(0 + r30); // lbz @ 0x805A7C74
    r12 = r3 + r12; // 0x805A7C78
    r30 = r30 + r31; // 0x805A7C7C
    r30 = r30 + -1; // 0x805A7C80
    *(4 + r12) = r30; // stb @ 0x805A7C84
    r12 = *(0x10 + r3); // lbz @ 0x805A7C88
    *(0x10 + r3) = r12; // stb @ 0x805A7C90
    r9 = r9 + 1; // 0x805A7C94
    if (counter-- != 0) goto 0x0x805a7be0;
    /* b 0x805a7cc0 */ // 0x805A7C9C
    r9 = *(0x10 + r3); // lbz @ 0x805A7CA0
    if (!=) goto 0x0x805a7cc0;
    r9 = r3 + r9; // 0x805A7CAC
    *(4 + r9) = r0; // stb @ 0x805A7CB0
    r9 = *(0x10 + r3); // lbz @ 0x805A7CB4
    r9 = r9 + 1; // 0x805A7CB8
    *(0x10 + r3) = r9; // stb @ 0x805A7CBC
    r9 = *(0 + r6); // lwz @ 0x805A7CC0
    r12 = *(1 + r9); // lbz @ 0x805A7CC4
    r9 = *(0 + r9); // lbz @ 0x805A7CC8
    r9 = r9 + r12; // 0x805A7CCC
    r9 = r9 + -1; // 0x805A7CD0
    /* clrlwi r9, r9, 0x18 */ // 0x805A7CD4
    if (!=) goto 0x0x805a7d9c;
    /* li r9, 0 */ // 0x805A7CE0
    /* mtctr r10 */ // 0x805A7CE4
    r30 = *(0 + r6); // lwz @ 0x805A7CE8
    /* clrlwi r12, r9, 0x10 */ // 0x805A7CEC
    r12 = r30 + r12; // 0x805A7CF0
    r30 = *(8 + r12); // lbz @ 0x805A7CF4
    if (==) goto 0x0x805a7d90;
    r29 = *(0 + r5); // lwz @ 0x805A7D00
    /* li r31, 0 */ // 0x805A7D04
    r12 = *(0x14 + r29); // lwz @ 0x805A7D08
    if (==) goto 0x0x805a7d24;
    r12 = *(4 + r12); // lhz @ 0x805A7D14
    if (==) goto 0x0x805a7d24;
    /* li r31, 1 */ // 0x805A7D20
    if (==) goto 0x0x805a7d38;
    r12 = *(0x14 + r29); // lwz @ 0x805A7D2C
    r12 = *(4 + r12); // lhz @ 0x805A7D30
    /* b 0x805a7d3c */ // 0x805A7D34
    /* li r12, 0 */ // 0x805A7D38
    if (>=) goto 0x0x805a7d6c;
    r31 = *(0x14 + r29); // lwz @ 0x805A7D44
    r12 = *(4 + r31); // lhz @ 0x805A7D48
    if (>=) goto 0x0x805a7d64;
    r31 = *(0 + r31); // lwz @ 0x805A7D54
    r12 = r30 rlwinm 2; // rlwinm
    /* lwzx r12, r31, r12 */ // 0x805A7D5C
    /* b 0x805a7d70 */ // 0x805A7D60
    /* li r12, 0 */ // 0x805A7D64
    /* b 0x805a7d70 */ // 0x805A7D68
    /* li r12, 0 */ // 0x805A7D6C
    r31 = *(0 + r12); // lwz @ 0x805A7D70
    r12 = *(0x11 + r3); // lbz @ 0x805A7D74
    r31 = *(0 + r31); // lbz @ 0x805A7D78
    r12 = r3 + r12; // 0x805A7D7C
    *(0xa + r12) = r31; // stb @ 0x805A7D80
    r12 = *(0x11 + r3); // lbz @ 0x805A7D84
    *(0x11 + r3) = r12; // stb @ 0x805A7D8C
    r9 = r9 + 1; // 0x805A7D90
    if (counter-- != 0) goto 0x0x805a7ce8;
    /* b 0x805a7dbc */ // 0x805A7D98
    r6 = *(0x11 + r3); // lbz @ 0x805A7D9C
    if (!=) goto 0x0x805a7dbc;
    r6 = r3 + r6; // 0x805A7DA8
    *(0xa + r6) = r7; // stb @ 0x805A7DAC
    r6 = *(0x11 + r3); // lbz @ 0x805A7DB0
    r6 = r6 + 1; // 0x805A7DB4
    *(0x11 + r3) = r6; // stb @ 0x805A7DB8
    r8 = r8 + 1; // 0x805A7DBC
    r30 = *(0 + r5); // lwz @ 0x805A7DC0
    /* li r9, 0 */ // 0x805A7DC4
    r12 = *(0x14 + r30); // lwz @ 0x805A7DC8
    if (==) goto 0x0x805a7de4;
    r6 = *(4 + r12); // lhz @ 0x805A7DD4
    if (==) goto 0x0x805a7de4;
    /* li r9, 1 */ // 0x805A7DE0
    /* clrlwi r9, r8, 0x10 */ // 0x805A7DE8
    if (==) goto 0x0x805a7dfc;
    r6 = *(0x14 + r30); // lwz @ 0x805A7DF0
    r6 = *(4 + r6); // lhz @ 0x805A7DF4
    /* b 0x805a7e00 */ // 0x805A7DF8
    /* li r6, 0 */ // 0x805A7DFC
    if (<) goto 0x0x805a7b20;
    r31 = *(0x1c + r1); // lwz @ 0x805A7E08
    r30 = *(0x18 + r1); // lwz @ 0x805A7E0C
    r29 = *(0x14 + r1); // lwz @ 0x805A7E10
    return;
}