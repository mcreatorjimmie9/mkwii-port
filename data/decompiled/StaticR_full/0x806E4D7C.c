/* Function at 0x806E4D7C, size=828 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r20 */
/* Calls: 2 function(s) */

int FUN_806E4D7C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -96(r1) */
    /* saved r20 */
    /* stmw r20, 0x30(r1) */ // 0x806E4D88
    r22 = r3;
    /* li r23, 0 */ // 0x806E4D90
    /* li r28, 1 */ // 0x806E4D94
    /* lis r25, 0 */ // 0x806E4D98
    /* lis r26, 0 */ // 0x806E4D9C
    /* li r27, 0 */ // 0x806E4DA0
    /* li r29, 2 */ // 0x806E4DA4
    /* lis r30, 1 */ // 0x806E4DA8
    /* lis r31, 0 */ // 0x806E4DAC
    /* lis r20, 0 */ // 0x806E4DB0
    /* li r21, 2 */ // 0x806E4DB4
    r4 = *(0 + r31); // lwz @ 0x806E4DB8
    /* clrlwi r0, r23, 0x18 */ // 0x806E4DBC
    r24 = r28 << r0; // slw
    r0 = *(0x291c + r4); // lwz @ 0x806E4DC4
    /* mulli r0, r0, 0x58 */ // 0x806E4DC8
    r3 = r4 + r0; // 0x806E4DCC
    r0 = *(0x48 + r3); // lwz @ 0x806E4DD0
    /* and. r0, r24, r0 */ // 0x806E4DD4
    if (==) goto 0x0x806e5098;
    r0 = *(0x59 + r3); // lbz @ 0x806E4DDC
    if (==) goto 0x0x806e5098;
    r5 = *(0 + r25); // lwz @ 0x806E4DE8
    /* li r7, 0 */ // 0x806E4DEC
    r3 = *(0 + r26); // lwz @ 0x806E4DF0
    r0 = *(0x20 + r5); // lwz @ 0x806E4DF4
    *(8 + r1) = r0; // stw @ 0x806E4DF8
    r0 = *(0xb94 + r3); // lwz @ 0x806E4DFC
    *(0xc + r1) = r0; // stw @ 0x806E4E00
    *(0x14 + r1) = r27; // sth @ 0x806E4E04
    r0 = *(0xb78 + r3); // lwz @ 0x806E4E08
    if (!=) goto 0x0x806e4e18;
    r7 = r7 | 0x8000; // 0x806E4E14
    r8 = r3 + 0x28; // 0x806E4E18
    /* li r6, 0 */ // 0x806E4E1C
    /* mtctr r29 */ // 0x806E4E20
    /* clrlwi r0, r6, 0x18 */ // 0x806E4E24
    /* mulli r0, r0, 0xf0 */ // 0x806E4E28
    r5 = r8 + r0; // 0x806E4E2C
    r0 = *(0xcc + r5); // lwz @ 0x806E4E30
    if (!=) goto 0x0x806e4e44;
    r0 = r28 << r6; // slw
    r7 = r7 | r0; // 0x806E4E40
    r6 = r6 + 1; // 0x806E4E44
    /* clrlwi r0, r6, 0x18 */ // 0x806E4E48
    /* mulli r0, r0, 0xf0 */ // 0x806E4E4C
    r5 = r8 + r0; // 0x806E4E50
    r0 = *(0xcc + r5); // lwz @ 0x806E4E54
    if (!=) goto 0x0x806e4e68;
    r0 = r28 << r6; // slw
    r7 = r7 | r0; // 0x806E4E64
    r6 = r6 + 1; // 0x806E4E68
    /* clrlwi r0, r6, 0x18 */ // 0x806E4E6C
    /* mulli r0, r0, 0xf0 */ // 0x806E4E70
    r5 = r8 + r0; // 0x806E4E74
    r0 = *(0xcc + r5); // lwz @ 0x806E4E78
    if (!=) goto 0x0x806e4e8c;
    r0 = r28 << r6; // slw
    r7 = r7 | r0; // 0x806E4E88
    r6 = r6 + 1; // 0x806E4E8C
    /* clrlwi r0, r6, 0x18 */ // 0x806E4E90
    /* mulli r0, r0, 0xf0 */ // 0x806E4E94
    r5 = r8 + r0; // 0x806E4E98
    r0 = *(0xcc + r5); // lwz @ 0x806E4E9C
    if (!=) goto 0x0x806e4eb0;
    r0 = r28 << r6; // slw
    r7 = r7 | r0; // 0x806E4EAC
    r6 = r6 + 1; // 0x806E4EB0
    /* clrlwi r0, r6, 0x18 */ // 0x806E4EB4
    /* mulli r0, r0, 0xf0 */ // 0x806E4EB8
    r5 = r8 + r0; // 0x806E4EBC
    r0 = *(0xcc + r5); // lwz @ 0x806E4EC0
    if (!=) goto 0x0x806e4ed4;
    r0 = r28 << r6; // slw
    r7 = r7 | r0; // 0x806E4ED0
    r6 = r6 + 1; // 0x806E4ED4
    /* clrlwi r0, r6, 0x18 */ // 0x806E4ED8
    /* mulli r0, r0, 0xf0 */ // 0x806E4EDC
    r5 = r8 + r0; // 0x806E4EE0
    r0 = *(0xcc + r5); // lwz @ 0x806E4EE4
    if (!=) goto 0x0x806e4ef8;
    r0 = r28 << r6; // slw
    r7 = r7 | r0; // 0x806E4EF4
    r6 = r6 + 1; // 0x806E4EF8
    if (counter-- != 0) goto 0x0x806e4e24;
    *(0x10 + r1) = r7; // stw @ 0x806E4F00
    r5 = *(0 + r26); // lwz @ 0x806E4F04
    r0 = *(0xb68 + r5); // lwz @ 0x806E4F08
    *(0x1e + r1) = r0; // stb @ 0x806E4F0C
    *(0x1f + r1) = r29; // stb @ 0x806E4F10
    r0 = *(0xb90 + r5); // lwz @ 0x806E4F14
    /* clrlwi. r0, r0, 0x1f */ // 0x806E4F18
    if (==) goto 0x0x806e4f28;
    /* li r0, 3 */ // 0x806E4F20
    /* b 0x806e4f3c */ // 0x806E4F24
    r3 = *(0xb6c + r3); // lwz @ 0x806E4F28
    /* li r0, 1 */ // 0x806E4F2C
    if (!=) goto 0x0x806e4f3c;
    /* li r0, 2 */ // 0x806E4F38
    *(0x2c + r1) = r0; // stb @ 0x806E4F3C
    /* li r6, 0 */ // 0x806E4F44
    *(0x1a + r1) = r27; // sth @ 0x806E4F48
    /* mtctr r21 */ // 0x806E4F4C
    if (<) goto 0x0x806e4f6c;
    if (>=) goto 0x0x806e4f6c;
    r3 = r4 + r6; // 0x806E4F60
    r0 = *(0x2920 + r3); // lbz @ 0x806E4F64
    /* b 0x806e4f70 */ // 0x806E4F68
    /* li r0, 0xff */ // 0x806E4F6C
    /* addic. r6, r6, 1 */ // 0x806E4F70
    *(0x18 + r5) = r0; // stb @ 0x806E4F74
    if (<) goto 0x0x806e4f90;
    if (>=) goto 0x0x806e4f90;
    r3 = r4 + r6; // 0x806E4F84
    r0 = *(0x2920 + r3); // lbz @ 0x806E4F88
    /* b 0x806e4f94 */ // 0x806E4F8C
    /* li r0, 0xff */ // 0x806E4F90
    /* addic. r6, r6, 1 */ // 0x806E4F94
    *(0x19 + r5) = r0; // stb @ 0x806E4F98
    if (<) goto 0x0x806e4fb4;
    if (>=) goto 0x0x806e4fb4;
    r3 = r4 + r6; // 0x806E4FA8
    r0 = *(0x2920 + r3); // lbz @ 0x806E4FAC
    /* b 0x806e4fb8 */ // 0x806E4FB0
    /* li r0, 0xff */ // 0x806E4FB4
    /* addic. r6, r6, 1 */ // 0x806E4FB8
    *(0x1a + r5) = r0; // stb @ 0x806E4FBC
    if (<) goto 0x0x806e4fd8;
    if (>=) goto 0x0x806e4fd8;
    r3 = r4 + r6; // 0x806E4FCC
    r0 = *(0x2920 + r3); // lbz @ 0x806E4FD0
    /* b 0x806e4fdc */ // 0x806E4FD4
    /* li r0, 0xff */ // 0x806E4FD8
    /* addic. r6, r6, 1 */ // 0x806E4FDC
    *(0x1b + r5) = r0; // stb @ 0x806E4FE0
    if (<) goto 0x0x806e4ffc;
    if (>=) goto 0x0x806e4ffc;
    r3 = r4 + r6; // 0x806E4FF0
    r0 = *(0x2920 + r3); // lbz @ 0x806E4FF4
    /* b 0x806e5000 */ // 0x806E4FF8
    /* li r0, 0xff */ // 0x806E4FFC
    /* addic. r6, r6, 1 */ // 0x806E5000
    *(0x1c + r5) = r0; // stb @ 0x806E5004
    if (<) goto 0x0x806e5020;
    if (>=) goto 0x0x806e5020;
    r3 = r4 + r6; // 0x806E5014
    r0 = *(0x2920 + r3); // lbz @ 0x806E5018
    /* b 0x806e5024 */ // 0x806E501C
    /* li r0, 0xff */ // 0x806E5020
    *(0x1d + r5) = r0; // stb @ 0x806E5024
    r5 = r5 + 6; // 0x806E5028
    r6 = r6 + 1; // 0x806E502C
    if (counter-- != 0) goto 0x0x806e4f50;
    r4 = *(0 + r31); // lwz @ 0x806E5034
    r0 = r30 + -1; // 0x806E5038
    r3 = r23 rlwinm 2; // rlwinm
    *(0x16 + r1) = r0; // sth @ 0x806E5040
    r3 = r4 + r3; // 0x806E5044
    *(0x1c + r1) = r27; // stb @ 0x806E504C
    /* li r5, 0x28 */ // 0x806E5050
    *(0x18 + r1) = r0; // sth @ 0x806E5054
    *(0x1d + r1) = r27; // stb @ 0x806E5058
    r0 = *(0x276c + r3); // lwz @ 0x806E505C
    /* mulli r0, r0, 0x30 */ // 0x806E5060
    r3 = r0 + r3; // 0x806E5064
    r3 = *(0xf0 + r3); // lwz @ 0x806E5068
    r3 = *(4 + r3); // lwz @ 0x806E506C
    FUN_806E9F64(); // bl 0x806E9F64
    r3 = *(0 + r20); // lwz @ 0x806E5074
    r0 = *(0 + r3); // lbz @ 0x806E5078
    if (==) goto 0x0x806e5098;
    r0 = *(4 + r22); // lwz @ 0x806E5084
    /* and. r0, r0, r24 */ // 0x806E5088
    if (!=) goto 0x0x806e5098;
    /* clrlwi r4, r23, 0x18 */ // 0x806E5090
    FUN_806F4A78(); // bl 0x806F4A78
    r23 = r23 + 1; // 0x806E5098
    if (<) goto 0x0x806e4db8;
    r0 = *(0x64 + r1); // lwz @ 0x806E50A8
    return;
}