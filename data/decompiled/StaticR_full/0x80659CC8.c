/* Function at 0x80659CC8, size=964 bytes */
/* Stack frame: 128 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_80659CC8(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -128(r1) */
    /* saved r27 */
    /* stmw r27, 0x6c(r1) */ // 0x80659CD4
    /* lis r29, 0 */ // 0x80659CD8
    r27 = r3;
    r28 = r4;
    r3 = *(0 + r29); // lwz @ 0x80659CE4
    FUN_806E69B4(); // bl 0x806E69B4
    if (!=) goto 0x0x80659cfc;
    /* li r3, -1 */ // 0x80659CF4
    /* b 0x8065a078 */ // 0x80659CF8
    r3 = *(0 + r29); // lwz @ 0x80659CFC
    /* li r0, 1 */ // 0x80659D00
    r4 = r0 << r28; // slw
    r0 = *(0x291c + r3); // lwz @ 0x80659D08
    /* mulli r0, r0, 0x58 */ // 0x80659D0C
    r3 = r3 + r0; // 0x80659D10
    r0 = *(0x48 + r3); // lwz @ 0x80659D14
    /* and. r0, r4, r0 */ // 0x80659D18
    if (!=) goto 0x0x80659d28;
    /* li r3, -1 */ // 0x80659D20
    /* b 0x8065a078 */ // 0x80659D24
    r0 = *(0x59 + r3); // lbz @ 0x80659D28
    if (!=) goto 0x0x80659d3c;
    /* li r3, -1 */ // 0x80659D34
    /* b 0x8065a078 */ // 0x80659D38
    /* lis r3, 0 */ // 0x80659D3C
    r7 = *(0 + r3); // lwz @ 0x80659D40
    r0 = *(0x9e0 + r7); // lwz @ 0x80659D44
    /* and. r0, r4, r0 */ // 0x80659D48
    if (!=) goto 0x0x80659d58;
    /* li r3, -1 */ // 0x80659D50
    /* b 0x8065a078 */ // 0x80659D54
    /* mulli r29, r28, 0xc0 */ // 0x80659D58
    /* li r0, 5 */ // 0x80659D5C
    r6 = r27;
    /* li r31, 0 */ // 0x80659D64
    r3 = r7 + r29; // 0x80659D68
    r4 = *(0x170 + r3); // lwz @ 0x80659D6C
    r5 = *(0x174 + r3); // lwz @ 0x80659D70
    /* mtctr r0 */ // 0x80659D74
    r0 = *(0 + r6); // lwz @ 0x80659D78
    r3 = *(4 + r6); // lwz @ 0x80659D7C
    r0 = r4 ^ r0; // 0x80659D80
    r3 = r5 ^ r3; // 0x80659D84
    /* or. r0, r3, r0 */ // 0x80659D88
    if (!=) goto 0x0x80659d94;
    /* b 0x80659e44 */ // 0x80659D90
    r0 = *(0x1d8 + r6); // lwz @ 0x80659D94
    r31 = r31 + 1; // 0x80659D98
    r3 = *(0x1dc + r6); // lwz @ 0x80659D9C
    r0 = r4 ^ r0; // 0x80659DA0
    r3 = r5 ^ r3; // 0x80659DA4
    /* or. r0, r3, r0 */ // 0x80659DA8
    if (!=) goto 0x0x80659db4;
    /* b 0x80659e44 */ // 0x80659DB0
    r0 = *(0x3b0 + r6); // lwz @ 0x80659DB4
    r31 = r31 + 1; // 0x80659DB8
    r3 = *(0x3b4 + r6); // lwz @ 0x80659DBC
    r0 = r4 ^ r0; // 0x80659DC0
    r3 = r5 ^ r3; // 0x80659DC4
    /* or. r0, r3, r0 */ // 0x80659DC8
    if (!=) goto 0x0x80659dd4;
    /* b 0x80659e44 */ // 0x80659DD0
    r0 = *(0x588 + r6); // lwz @ 0x80659DD4
    r31 = r31 + 1; // 0x80659DD8
    r3 = *(0x58c + r6); // lwz @ 0x80659DDC
    r0 = r4 ^ r0; // 0x80659DE0
    r3 = r5 ^ r3; // 0x80659DE4
    /* or. r0, r3, r0 */ // 0x80659DE8
    if (!=) goto 0x0x80659df4;
    /* b 0x80659e44 */ // 0x80659DF0
    r0 = *(0x760 + r6); // lwz @ 0x80659DF4
    r31 = r31 + 1; // 0x80659DF8
    r3 = *(0x764 + r6); // lwz @ 0x80659DFC
    r0 = r4 ^ r0; // 0x80659E00
    r3 = r5 ^ r3; // 0x80659E04
    /* or. r0, r3, r0 */ // 0x80659E08
    if (!=) goto 0x0x80659e14;
    /* b 0x80659e44 */ // 0x80659E10
    r0 = *(0x938 + r6); // lwz @ 0x80659E14
    r31 = r31 + 1; // 0x80659E18
    r3 = *(0x93c + r6); // lwz @ 0x80659E1C
    r0 = r4 ^ r0; // 0x80659E20
    r3 = r5 ^ r3; // 0x80659E24
    /* or. r0, r3, r0 */ // 0x80659E28
    if (!=) goto 0x0x80659e34;
    /* b 0x80659e44 */ // 0x80659E30
    r6 = r6 + 0xb10; // 0x80659E34
    r31 = r31 + 1; // 0x80659E38
    if (counter-- != 0) goto 0x0x80659d78;
    /* li r31, -1 */ // 0x80659E40
    if (>=) goto 0x0x80659e54;
    /* li r3, -1 */ // 0x80659E4C
    /* b 0x8065a078 */ // 0x80659E50
    if (>) goto 0x0x80659e84;
    /* mulli r0, r31, 0x1d8 */ // 0x80659E5C
    r4 = r27 + r0; // 0x80659E60
    /* lwzx r0, r27, r0 */ // 0x80659E64
    r3 = *(4 + r4); // lwz @ 0x80659E68
    /* or. r0, r3, r0 */ // 0x80659E6C
    if (==) goto 0x0x80659e7c;
    r30 = r4 + 8; // 0x80659E74
    /* b 0x80659e88 */ // 0x80659E78
    /* li r30, 0 */ // 0x80659E7C
    /* b 0x80659e88 */ // 0x80659E80
    /* li r30, 0 */ // 0x80659E84
    /* lis r3, 0 */ // 0x80659E88
    r5 = r7 + 0x9c8; // 0x80659E8C
    r3 = *(0 + r3); // lwz @ 0x80659E90
    r6 = r28;
    /* li r7, 0 */ // 0x80659E9C
    FUN_805B93C4(r5, r6, r4, r7); // bl 0x805B93C4
    if (>) goto 0x0x80659ee4;
    /* mulli r0, r31, 0x1d8 */ // 0x80659EAC
    r4 = r27 + r0; // 0x80659EB0
    /* lwzx r0, r27, r0 */ // 0x80659EB4
    r3 = *(4 + r4); // lwz @ 0x80659EB8
    /* or. r0, r3, r0 */ // 0x80659EBC
    if (==) goto 0x0x80659ee4;
    r3 = *(0x1d0 + r4); // lwz @ 0x80659EC4
    r0 = r3 + -1; // 0x80659EC8
    if (<=) goto 0x0x80659edc;
    /* li r0, 0 */ // 0x80659ED4
    /* b 0x80659ee8 */ // 0x80659ED8
    /* li r0, 1 */ // 0x80659EDC
    /* b 0x80659ee8 */ // 0x80659EE0
    /* li r0, 0 */ // 0x80659EE4
    if (==) goto 0x0x80659f70;
    /* li r0, 0x26 */ // 0x80659EF0
    r5 = r30 + 0x21; // 0x80659EF4
    /* mtctr r0 */ // 0x80659EFC
    r3 = *(1 + r4); // lbz @ 0x80659F00
    /* lbzu r0, 2(r4) */ // 0x80659F04
    *(1 + r5) = r3; // stb @ 0x80659F08
    /* stbu r0, 2(r5) */ // 0x80659F0C
    if (counter-- != 0) goto 0x0x80659f00;
    /* lis r4, 0 */ // 0x80659F14
    r0 = *(0 + r4); // lwz @ 0x80659F18
    r3 = r0 + r29; // 0x80659F1C
    r0 = *(0x178 + r3); // lwz @ 0x80659F20
    *(0x70 + r30) = r0; // stw @ 0x80659F24
    r0 = *(0 + r4); // lwz @ 0x80659F28
    r3 = r0 + r29; // 0x80659F2C
    r0 = *(0x17c + r3); // lhz @ 0x80659F30
    *(0x74 + r30) = r0; // sth @ 0x80659F34
    r0 = *(0 + r4); // lwz @ 0x80659F38
    r3 = r0 + r29; // 0x80659F3C
    r0 = *(0x17e + r3); // lhz @ 0x80659F40
    *(0x76 + r30) = r0; // sth @ 0x80659F44
    r3 = *(0 + r4); // lwz @ 0x80659F48
    r0 = r3 + 0x168; // 0x80659F4C
    r3 = r0 + r29; // 0x80659F50
    /* lwzx r4, r29, r0 */ // 0x80659F54
    r3 = *(4 + r3); // lwz @ 0x80659F58
    /* or. r0, r3, r4 */ // 0x80659F5C
    if (==) goto 0x0x80659fa4;
    *(0x14 + r30) = r3; // stw @ 0x80659F64
    *(0x10 + r30) = r4; // stw @ 0x80659F68
    /* b 0x80659fa4 */ // 0x80659F6C
    /* lis r4, 0 */ // 0x80659F70
    r3 = r30;
    r0 = *(0 + r4); // lwz @ 0x80659F78
    r8 = r0 + r29; // 0x80659F80
    r0 = *(0x184 + r8); // lbz @ 0x80659F84
    *(8 + r1) = r0; // stw @ 0x80659F88
    r5 = *(0x178 + r8); // lwz @ 0x80659F8C
    r6 = *(0x17c + r8); // lhz @ 0x80659F90
    r7 = *(0x17e + r8); // lhz @ 0x80659F94
    r9 = *(0x168 + r8); // lwz @ 0x80659F98
    r10 = *(0x16c + r8); // lwz @ 0x80659F9C
    FUN_805A95AC(); // bl 0x805A95AC
    /* lis r3, 0 */ // 0x80659FA4
    r0 = *(0 + r3); // lwz @ 0x80659FA8
    r3 = r0 + r29; // 0x80659FAC
    r3 = *(0x180 + r3); // lhz @ 0x80659FB0
    if (<=) goto 0x0x80659fc0;
    /* li r3, 0x270f */ // 0x80659FBC
    /* clrlwi r0, r3, 0x10 */ // 0x80659FC0
    if (>=) goto 0x0x80659fd0;
    /* li r3, 1 */ // 0x80659FCC
    *(0x1e + r30) = r3; // sth @ 0x80659FD0
    /* lis r3, 0 */ // 0x80659FD4
    r0 = *(0 + r3); // lwz @ 0x80659FD8
    r3 = r0 + r29; // 0x80659FDC
    r4 = *(0x182 + r3); // lhz @ 0x80659FE0
    if (<=) goto 0x0x80659ff0;
    /* li r4, 0x270f */ // 0x80659FEC
    /* clrlwi r0, r4, 0x10 */ // 0x80659FF0
    if (>=) goto 0x0x8065a000;
    /* li r4, 1 */ // 0x80659FFC
    /* lis r3, 1 */ // 0x8065A000
    *(0x20 + r30) = r4; // sth @ 0x8065A004
    /* li r30, 0 */ // 0x8065A008
    /* lis r29, 0 */ // 0x8065A00C
    r28 = r3 + -0x6c10; // 0x8065A010
    r4 = *(0 + r29); // lwz @ 0x8065A014
    r3 = r27 + 8; // 0x8065A018
    r0 = *(0x36 + r4); // lha @ 0x8065A01C
    if (<) goto 0x0x8065a03c;
    /* clrlwi r0, r0, 0x18 */ // 0x8065A028
    r0 = r28 * r0; // 0x8065A02C
    r4 = r4 + r0; // 0x8065A030
    r4 = r4 + 0x38; // 0x8065A034
    /* b 0x8065a040 */ // 0x8065A038
    /* li r4, 0 */ // 0x8065A03C
    /* clrlwi r0, r30, 0x10 */ // 0x8065A040
    /* mulli r0, r0, 0x1c0 */ // 0x8065A044
    r4 = r4 + r0; // 0x8065A048
    r4 = r4 + 0x59d0; // 0x8065A04C
    FUN_805A931C(r4, r4); // bl 0x805A931C
    r30 = r30 + 1; // 0x8065A054
    r27 = r27 + 0x1d8; // 0x8065A058
    if (<) goto 0x0x8065a014;
    /* lis r3, 0 */ // 0x8065A064
    r3 = *(0 + r3); // lwz @ 0x8065A068
    r3 = *(0x90 + r3); // lwz @ 0x8065A06C
    FUN_806845FC(r3); // bl 0x806845FC
    r3 = r31;
    r0 = *(0x84 + r1); // lwz @ 0x8065A07C
    return;
}