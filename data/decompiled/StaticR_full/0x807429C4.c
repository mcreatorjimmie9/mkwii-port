/* Function at 0x807429C4, size=1360 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 21 function(s) */

int FUN_807429C4(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x807429D8
    *(0x34 + r1) = r29; // stw @ 0x807429DC
    r0 = *(7 + r3); // lbz @ 0x807429E0
    if (!=) goto 0x0x80742ef8;
    /* lis r4, 0 */ // 0x807429EC
    r4 = *(0 + r4); // lwz @ 0x807429F0
    r0 = *(0x10 + r4); // lbz @ 0x807429F4
    if (==) goto 0x0x80742a04;
    /* b 0x80742ef8 */ // 0x80742A00
    r4 = *(0x118 + r3); // lwz @ 0x80742A04
    r0 = *(0x91 + r3); // lbz @ 0x80742A08
    r4 = *(0 + r4); // lwz @ 0x80742A0C
    r4 = *(4 + r4); // lwz @ 0x80742A14
    r4 = *(4 + r4); // lwz @ 0x80742A18
    r0 = r4 rlwinm 0x13; // rlwinm
    r4 = r4 rlwinm 8; // rlwinm
    if (!=) goto 0x0x80742c00;
    r5 = *(0x124 + r3); // lwz @ 0x80742A28
    if (!=) goto 0x0x80742ae0;
    r0 = *(0x7b9 + r3); // lbz @ 0x80742A34
    r5 = *(0x530 + r3); // lwz @ 0x80742A38
    if (!=) goto 0x0x80742a54;
    r4 = *(0x80 + r3); // lwz @ 0x80742A44
    r0 = *(0xae0 + r3); // lbz @ 0x80742A48
    if (>=) goto 0x0x80742a88;
    r29 = r5 + 0x28; // 0x80742A54
    /* li r30, 0xa */ // 0x80742A58
    r3 = *(0 + r29); // lwz @ 0x80742A5C
    if (==) goto 0x0x80742a78;
    r12 = *(0 + r3); // lwz @ 0x80742A68
    r12 = *(0xc + r12); // lwz @ 0x80742A6C
    /* mtctr r12 */ // 0x80742A70
    /* bctrl  */ // 0x80742A74
    r30 = r30 + 1; // 0x80742A78
    r29 = r29 + 4; // 0x80742A7C
    if (<) goto 0x0x80742a5c;
    r0 = *(0x7ba + r31); // lbz @ 0x80742A88
    r4 = *(0x530 + r31); // lwz @ 0x80742A8C
    if (!=) goto 0x0x80742aa8;
    r3 = *(0x84 + r31); // lwz @ 0x80742A98
    r0 = *(0xae0 + r31); // lbz @ 0x80742A9C
    if (>=) goto 0x0x80742dc8;
    r29 = r4 + 0x34; // 0x80742AA8
    /* li r30, 0xd */ // 0x80742AAC
    r3 = *(0 + r29); // lwz @ 0x80742AB0
    if (==) goto 0x0x80742acc;
    r12 = *(0 + r3); // lwz @ 0x80742ABC
    r12 = *(0xc + r12); // lwz @ 0x80742AC0
    /* mtctr r12 */ // 0x80742AC4
    /* bctrl  */ // 0x80742AC8
    r30 = r30 + 1; // 0x80742ACC
    r29 = r29 + 4; // 0x80742AD0
    if (<) goto 0x0x80742ab0;
    /* b 0x80742dc8 */ // 0x80742ADC
    if (!=) goto 0x0x80742dc8;
    if (==) goto 0x0x80742b48;
    r0 = *(0x7ba + r3); // lbz @ 0x80742AF0
    if (!=) goto 0x0x80742b0c;
    r4 = *(0x84 + r3); // lwz @ 0x80742AFC
    r0 = *(0xae0 + r3); // lbz @ 0x80742B00
    if (>=) goto 0x0x80742dc8;
    r3 = *(0x614 + r3); // lwz @ 0x80742B0C
    /* li r30, 0xa */ // 0x80742B10
    r29 = r3 + 0x28; // 0x80742B14
    r3 = *(0 + r29); // lwz @ 0x80742B18
    if (==) goto 0x0x80742b34;
    r12 = *(0 + r3); // lwz @ 0x80742B24
    r12 = *(0xc + r12); // lwz @ 0x80742B28
    /* mtctr r12 */ // 0x80742B2C
    /* bctrl  */ // 0x80742B30
    r30 = r30 + 1; // 0x80742B34
    r29 = r29 + 4; // 0x80742B38
    if (<) goto 0x0x80742b18;
    /* b 0x80742dc8 */ // 0x80742B44
    if (==) goto 0x0x80742ba8;
    r0 = *(0x7ba + r3); // lbz @ 0x80742B50
    if (!=) goto 0x0x80742b6c;
    r4 = *(0x84 + r3); // lwz @ 0x80742B5C
    r0 = *(0xae0 + r3); // lbz @ 0x80742B60
    if (>=) goto 0x0x80742dc8;
    r3 = *(0x614 + r3); // lwz @ 0x80742B6C
    /* li r30, 7 */ // 0x80742B70
    r29 = r3 + 0x1c; // 0x80742B74
    r3 = *(0 + r29); // lwz @ 0x80742B78
    if (==) goto 0x0x80742b94;
    r12 = *(0 + r3); // lwz @ 0x80742B84
    r12 = *(0xc + r12); // lwz @ 0x80742B88
    /* mtctr r12 */ // 0x80742B8C
    /* bctrl  */ // 0x80742B90
    r30 = r30 + 1; // 0x80742B94
    r29 = r29 + 4; // 0x80742B98
    if (<) goto 0x0x80742b78;
    /* b 0x80742dc8 */ // 0x80742BA4
    r0 = *(0x7ba + r3); // lbz @ 0x80742BA8
    if (!=) goto 0x0x80742bc4;
    r4 = *(0x84 + r3); // lwz @ 0x80742BB4
    r0 = *(0xae0 + r3); // lbz @ 0x80742BB8
    if (>=) goto 0x0x80742dc8;
    r3 = *(0x614 + r3); // lwz @ 0x80742BC4
    /* li r30, 0xd */ // 0x80742BC8
    r29 = r3 + 0x34; // 0x80742BCC
    r3 = *(0 + r29); // lwz @ 0x80742BD0
    if (==) goto 0x0x80742bec;
    r12 = *(0 + r3); // lwz @ 0x80742BDC
    r12 = *(0xc + r12); // lwz @ 0x80742BE0
    /* mtctr r12 */ // 0x80742BE4
    /* bctrl  */ // 0x80742BE8
    r30 = r30 + 1; // 0x80742BEC
    r29 = r29 + 4; // 0x80742BF0
    if (<) goto 0x0x80742bd0;
    /* b 0x80742dc8 */ // 0x80742BFC
    r5 = *(0x124 + r3); // lwz @ 0x80742C00
    if (!=) goto 0x0x80742cc4;
    r0 = *(0x7b9 + r3); // lbz @ 0x80742C0C
    r4 = *(0x530 + r3); // lwz @ 0x80742C10
    if (!=) goto 0x0x80742c2c;
    r5 = *(0x80 + r3); // lwz @ 0x80742C1C
    r0 = *(0xae0 + r3); // lbz @ 0x80742C20
    if (>=) goto 0x0x80742c4c;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742C30
    r8 = r31 + 0x7bc; // 0x80742C34
    /* li r5, 2 */ // 0x80742C38
    /* li r6, 4 */ // 0x80742C3C
    /* li r9, 1 */ // 0x80742C40
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80742c64 */ // 0x80742C48
    r7 = r3 + 0x6f4; // 0x80742C4C
    r8 = r3 + 0x7bc; // 0x80742C50
    /* li r5, 2 */ // 0x80742C54
    /* li r6, 4 */ // 0x80742C58
    /* li r9, 1 */ // 0x80742C5C
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x7ba + r31); // lbz @ 0x80742C64
    r4 = *(0x530 + r31); // lwz @ 0x80742C68
    if (!=) goto 0x0x80742c84;
    r3 = *(0x84 + r31); // lwz @ 0x80742C74
    r0 = *(0xae0 + r31); // lbz @ 0x80742C78
    if (>=) goto 0x0x80742ca4;
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742C88
    r8 = r31 + 0x7c8; // 0x80742C8C
    /* li r5, 4 */ // 0x80742C90
    /* li r6, 6 */ // 0x80742C94
    /* li r9, 1 */ // 0x80742C98
    FUN_807271EC(r7, r8, r5, r6, r9); // bl 0x807271EC
    /* b 0x80742dc8 */ // 0x80742CA0
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742CA8
    r8 = r31 + 0x7c8; // 0x80742CAC
    /* li r5, 4 */ // 0x80742CB0
    /* li r6, 6 */ // 0x80742CB4
    /* li r9, 1 */ // 0x80742CB8
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x80742dc8 */ // 0x80742CC0
    if (!=) goto 0x0x80742dc8;
    if (==) goto 0x0x80742d24;
    r8 = *(0x7c8 + r3); // lwz @ 0x80742CD4
    r0 = *(0x7cc + r3); // lwz @ 0x80742CDC
    /* li r4, 1 */ // 0x80742CE0
    *(0x24 + r1) = r0; // stw @ 0x80742CE4
    /* li r5, 1 */ // 0x80742CE8
    /* li r6, 3 */ // 0x80742CEC
    /* li r7, 3 */ // 0x80742CF0
    *(0x20 + r1) = r8; // stw @ 0x80742CF4
    /* li r8, 5 */ // 0x80742CF8
    r0 = *(0x7d0 + r3); // lwz @ 0x80742CFC
    *(0x28 + r1) = r0; // stw @ 0x80742D00
    FUN_80732B38(r7, r8); // bl 0x80732B38
    r3 = r31;
    /* li r4, -1 */ // 0x80742D0C
    FUN_80732D9C(r3, r4); // bl 0x80732D9C
    r3 = r31;
    /* li r4, 0 */ // 0x80742D18
    FUN_80732D9C(r3, r4, r3, r4); // bl 0x80732D9C
    /* b 0x80742dc8 */ // 0x80742D20
    if (==) goto 0x0x80742d7c;
    r8 = *(0x7c8 + r3); // lwz @ 0x80742D2C
    r0 = *(0x7cc + r3); // lwz @ 0x80742D34
    /* li r4, -1 */ // 0x80742D38
    *(0x18 + r1) = r0; // stw @ 0x80742D3C
    /* li r5, 1 */ // 0x80742D40
    /* li r6, 3 */ // 0x80742D44
    /* li r7, 3 */ // 0x80742D48
    *(0x14 + r1) = r8; // stw @ 0x80742D4C
    /* li r8, 5 */ // 0x80742D50
    r0 = *(0x7d0 + r3); // lwz @ 0x80742D54
    *(0x1c + r1) = r0; // stw @ 0x80742D58
    FUN_80732B38(r7, r8); // bl 0x80732B38
    r3 = r31;
    /* li r4, 1 */ // 0x80742D64
    FUN_80732D9C(r3, r4); // bl 0x80732D9C
    r3 = r31;
    /* li r4, 0 */ // 0x80742D70
    FUN_80732D9C(r3, r4, r3, r4); // bl 0x80732D9C
    /* b 0x80742dc8 */ // 0x80742D78
    r8 = *(0x7c8 + r3); // lwz @ 0x80742D7C
    r0 = *(0x7cc + r3); // lwz @ 0x80742D84
    /* li r4, 0 */ // 0x80742D88
    *(0xc + r1) = r0; // stw @ 0x80742D8C
    /* li r5, 1 */ // 0x80742D90
    /* li r6, 3 */ // 0x80742D94
    /* li r7, 3 */ // 0x80742D98
    *(8 + r1) = r8; // stw @ 0x80742D9C
    /* li r8, 5 */ // 0x80742DA0
    r0 = *(0x7d0 + r3); // lwz @ 0x80742DA4
    *(0x10 + r1) = r0; // stw @ 0x80742DA8
    FUN_80732B38(r7, r8); // bl 0x80732B38
    r3 = r31;
    /* li r4, -1 */ // 0x80742DB4
    FUN_80732D9C(r3, r4); // bl 0x80732D9C
    r3 = r31;
    /* li r4, 1 */ // 0x80742DC0
    FUN_80732D9C(r3, r4, r3, r4); // bl 0x80732D9C
    r0 = *(0x124 + r31); // lwz @ 0x80742DC8
    if (!=) goto 0x0x80742e18;
    r4 = *(0x530 + r31); // lwz @ 0x80742DD4
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742DDC
    r8 = r31 + 0x7bc; // 0x80742DE0
    /* li r5, 0xa */ // 0x80742DE4
    /* li r6, 0xd */ // 0x80742DE8
    /* li r9, 1 */ // 0x80742DEC
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r4 = *(0x530 + r31); // lwz @ 0x80742DF4
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742DFC
    r8 = r31 + 0x7c8; // 0x80742E00
    /* li r5, 0xd */ // 0x80742E04
    /* li r6, 0x10 */ // 0x80742E08
    /* li r9, 1 */ // 0x80742E0C
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    /* b 0x80742ef0 */ // 0x80742E14
    if (!=) goto 0x0x80742ef0;
    r0 = *(0xd + r31); // lbz @ 0x80742E20
    if (!=) goto 0x0x80742e90;
    r4 = *(0x614 + r31); // lwz @ 0x80742E2C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742E34
    r8 = r31 + 0x7c8; // 0x80742E38
    /* li r5, 7 */ // 0x80742E3C
    /* li r6, 0xa */ // 0x80742E40
    /* li r9, 1 */ // 0x80742E44
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r4 = *(0x614 + r31); // lwz @ 0x80742E4C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742E54
    r8 = r31 + 0x7c8; // 0x80742E58
    /* li r5, 0xa */ // 0x80742E5C
    /* li r6, 0xd */ // 0x80742E60
    /* li r9, 1 */ // 0x80742E64
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r4 = *(0x614 + r31); // lwz @ 0x80742E6C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80742E74
    r8 = r31 + 0x7c8; // 0x80742E78
    /* li r5, 0xd */ // 0x80742E7C
    /* li r6, 0x10 */ // 0x80742E80
    /* li r9, 1 */ // 0x80742E84
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    /* b 0x80742ef0 */ // 0x80742E8C
    r4 = *(0x614 + r31); // lwz @ 0x80742E90
    r3 = r31;
    r7 = r31 + 0x818; // 0x80742E98
    r8 = r31 + 0x7c8; // 0x80742E9C
    /* li r5, 7 */ // 0x80742EA0
    /* li r6, 0xa */ // 0x80742EA4
    /* li r9, 1 */ // 0x80742EA8
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r4 = *(0x614 + r31); // lwz @ 0x80742EB0
    r3 = r31;
    r7 = r31 + 0x818; // 0x80742EB8
    r8 = r31 + 0x7c8; // 0x80742EBC
    /* li r5, 0xa */ // 0x80742EC0
    /* li r6, 0xd */ // 0x80742EC4
    /* li r9, 1 */ // 0x80742EC8
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    r4 = *(0x614 + r31); // lwz @ 0x80742ED0
    r3 = r31;
    r7 = r31 + 0x818; // 0x80742ED8
    r8 = r31 + 0x7c8; // 0x80742EDC
    /* li r5, 0xd */ // 0x80742EE0
    /* li r6, 0x10 */ // 0x80742EE4
    /* li r9, 1 */ // 0x80742EE8
    FUN_80727608(r7, r8, r5, r6, r9); // bl 0x80727608
    /* li r0, 1 */ // 0x80742EF0
    *(0x90 + r31) = r0; // stb @ 0x80742EF4
    r0 = *(0x44 + r1); // lwz @ 0x80742EF8
    r31 = *(0x3c + r1); // lwz @ 0x80742EFC
    r30 = *(0x38 + r1); // lwz @ 0x80742F00
    r29 = *(0x34 + r1); // lwz @ 0x80742F04
    return;
}