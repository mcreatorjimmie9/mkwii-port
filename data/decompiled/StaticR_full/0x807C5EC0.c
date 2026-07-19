/* Function at 0x807C5EC0, size=864 bytes */
/* Stack frame: 432 bytes */
/* Saved registers: r21 */
/* Calls: 8 function(s) */

int FUN_807C5EC0(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -432(r1) */
    /* saved r21 */
    /* stmw r21, 0x184(r1) */ // 0x807C5ECC
    /* lis r21, 0 */ // 0x807C5ED0
    /* lis r23, 0 */ // 0x807C5ED4
    r25 = r3;
    r26 = r4;
    r21 = r21 + 0; // 0x807C5EE0
    r3 = *(0 + r23); // lwz @ 0x807C5EE4
    FUN_807BFFA8(); // bl 0x807BFFA8
    /* li r31, 0 */ // 0x807C5EEC
    r22 = r3;
    r3 = *(0 + r23); // lwz @ 0x807C5EF4
    *(0xc + r1) = r31; // stw @ 0x807C5EFC
    /* li r30, 0 */ // 0x807C5F04
    /* li r29, 0 */ // 0x807C5F08
    *(8 + r1) = r31; // stw @ 0x807C5F0C
    /* li r28, 0 */ // 0x807C5F10
    /* li r27, 0 */ // 0x807C5F14
    /* li r23, 0 */ // 0x807C5F18
    FUN_807C0324(); // bl 0x807C0324
    if (==) goto 0x0x807c5f4c;
    if (==) goto 0x0x807c5f84;
    if (==) goto 0x0x807c6024;
    if (==) goto 0x0x807c6088;
    if (==) goto 0x0x807c60ec;
    /* b 0x807c614c */ // 0x807C5F48
    r3 = r21 + 0xa8; // 0x807C5F4C
    r31 = *(0xa8 + r21); // lwz @ 0x807C5F50
    r30 = *(4 + r3); // lwz @ 0x807C5F54
    r29 = *(8 + r3); // lwz @ 0x807C5F58
    r28 = *(0xc + r3); // lwz @ 0x807C5F5C
    r27 = *(0x10 + r3); // lwz @ 0x807C5F60
    r23 = *(0x14 + r3); // lwz @ 0x807C5F64
    *(0x10 + r1) = r31; // stw @ 0x807C5F68
    *(0x14 + r1) = r30; // stw @ 0x807C5F6C
    *(0x18 + r1) = r29; // stw @ 0x807C5F70
    *(0x1c + r1) = r28; // stw @ 0x807C5F74
    *(0x20 + r1) = r27; // stw @ 0x807C5F78
    *(0x24 + r1) = r23; // stw @ 0x807C5F7C
    /* b 0x807c614c */ // 0x807C5F80
    r0 = *(0xc + r1); // lwz @ 0x807C5F84
    r24 = r21 + 0xc0; // 0x807C5F88
    r22 = *(0xc0 + r21); // lwz @ 0x807C5F8C
    r23 = *(4 + r24); // lwz @ 0x807C5F94
    /* mulli r21, r0, 0x18 */ // 0x807C5F98
    r31 = *(8 + r24); // lwz @ 0x807C5F9C
    r30 = *(0xc + r24); // lwz @ 0x807C5FA4
    r29 = *(0x10 + r24); // lwz @ 0x807C5FAC
    r28 = *(0x14 + r24); // lwz @ 0x807C5FB0
    r27 = *(0x18 + r24); // lwz @ 0x807C5FB8
    r12 = *(0x1c + r24); // lwz @ 0x807C5FC0
    r11 = *(0x20 + r24); // lwz @ 0x807C5FC8
    r10 = *(0x24 + r24); // lwz @ 0x807C5FCC
    r9 = *(0x28 + r24); // lwz @ 0x807C5FD0
    r0 = *(0x2c + r24); // lwz @ 0x807C5FD4
    *(0x28 + r1) = r22; // stw @ 0x807C5FD8
    *(0x2c + r1) = r23; // stw @ 0x807C5FDC
    *(0x30 + r1) = r31; // stw @ 0x807C5FE0
    *(0x34 + r1) = r30; // stw @ 0x807C5FE4
    *(0x38 + r1) = r29; // stw @ 0x807C5FE8
    *(0x3c + r1) = r28; // stw @ 0x807C5FEC
    *(0x40 + r1) = r27; // stw @ 0x807C5FF0
    *(0x44 + r1) = r12; // stw @ 0x807C5FF4
    *(0x48 + r1) = r11; // stw @ 0x807C5FF8
    *(0x4c + r1) = r10; // stw @ 0x807C5FFC
    *(0x50 + r1) = r9; // stw @ 0x807C6000
    *(0x54 + r1) = r0; // stw @ 0x807C6004
    /* lwzx r31, r8, r21 */ // 0x807C6008
    /* lwzx r30, r7, r21 */ // 0x807C600C
    /* lwzx r29, r6, r21 */ // 0x807C6010
    /* lwzx r28, r5, r21 */ // 0x807C6014
    /* lwzx r27, r4, r21 */ // 0x807C6018
    /* lwzx r23, r3, r21 */ // 0x807C601C
    /* b 0x807c614c */ // 0x807C6020
    r3 = r21 + 0xf0; // 0x807C6024
    /* li r0, 9 */ // 0x807C6028
    r4 = r3 + -4; // 0x807C6030
    /* mtctr r0 */ // 0x807C6034
    r3 = *(4 + r4); // lwz @ 0x807C6038
    r0 = *(8 + r4); // lwzu @ 0x807C603C
    *(4 + r5) = r3; // stw @ 0x807C6040
    *(8 + r5) = r0; // stwu @ 0x807C6044
    if (counter-- != 0) goto 0x0x807c6038;
    r0 = *(0xc + r1); // lwz @ 0x807C604C
    /* mulli r0, r0, 0x18 */ // 0x807C605C
    /* lwzx r31, r8, r0 */ // 0x807C606C
    /* lwzx r30, r7, r0 */ // 0x807C6070
    /* lwzx r29, r6, r0 */ // 0x807C6074
    /* lwzx r28, r5, r0 */ // 0x807C6078
    /* lwzx r27, r4, r0 */ // 0x807C607C
    /* lwzx r23, r3, r0 */ // 0x807C6080
    /* b 0x807c614c */ // 0x807C6084
    r3 = r21 + 0x138; // 0x807C6088
    /* li r0, 0xc */ // 0x807C608C
    r4 = r3 + -4; // 0x807C6094
    /* mtctr r0 */ // 0x807C6098
    r3 = *(4 + r4); // lwz @ 0x807C609C
    r0 = *(8 + r4); // lwzu @ 0x807C60A0
    *(4 + r5) = r3; // stw @ 0x807C60A4
    *(8 + r5) = r0; // stwu @ 0x807C60A8
    if (counter-- != 0) goto 0x0x807c609c;
    r0 = *(0xc + r1); // lwz @ 0x807C60B0
    /* mulli r0, r0, 0x18 */ // 0x807C60C0
    /* lwzx r31, r8, r0 */ // 0x807C60D0
    /* lwzx r30, r7, r0 */ // 0x807C60D4
    /* lwzx r29, r6, r0 */ // 0x807C60D8
    /* lwzx r28, r5, r0 */ // 0x807C60DC
    /* lwzx r27, r4, r0 */ // 0x807C60E0
    /* lwzx r23, r3, r0 */ // 0x807C60E4
    /* b 0x807c614c */ // 0x807C60E8
    r3 = r21 + 0x198; // 0x807C60EC
    /* li r0, 0xf */ // 0x807C60F0
    r4 = r3 + -4; // 0x807C60F8
    /* mtctr r0 */ // 0x807C60FC
    r3 = *(4 + r4); // lwz @ 0x807C6100
    r0 = *(8 + r4); // lwzu @ 0x807C6104
    *(4 + r5) = r3; // stw @ 0x807C6108
    *(8 + r5) = r0; // stwu @ 0x807C610C
    if (counter-- != 0) goto 0x0x807c6100;
    r0 = *(0xc + r1); // lwz @ 0x807C6114
    /* mulli r0, r0, 0x18 */ // 0x807C6124
    /* lwzx r31, r8, r0 */ // 0x807C6134
    /* lwzx r30, r7, r0 */ // 0x807C6138
    /* lwzx r29, r6, r0 */ // 0x807C613C
    /* lwzx r28, r5, r0 */ // 0x807C6140
    /* lwzx r27, r4, r0 */ // 0x807C6144
    /* lwzx r23, r3, r0 */ // 0x807C6148
    /* add. r21, r31, r30 */ // 0x807C614C
    r22 = r29 + r28; // 0x807C6150
    r24 = r27 + r23; // 0x807C6154
    if (<=) goto 0x0x807c6188;
    r4 = *(0x168 + r25); // lwz @ 0x807C615C
    r3 = r25;
    r5 = r31;
    r6 = r30;
    /* li r7, 0 */ // 0x807C616C
    FUN_807C62E0(r3, r5, r6, r7); // bl 0x807C62E0
    r3 = *(0x168 + r25); // lwz @ 0x807C6174
    /* li r0, 1 */ // 0x807C6178
    *(8 + r3) = r0; // stw @ 0x807C617C
    r3 = *(0x168 + r25); // lwz @ 0x807C6180
    FUN_807C3A1C(); // bl 0x807C3A1C
    if (<=) goto 0x0x807c61c8;
    r4 = *(0x16c + r25); // lwz @ 0x807C6194
    r3 = r25;
    r5 = r29;
    r6 = r28;
    /* li r7, 2 */ // 0x807C61A4
    if (==) goto 0x0x807c61b0;
    /* li r7, 0 */ // 0x807C61AC
    FUN_807C62E0(r5, r6, r7, r7); // bl 0x807C62E0
    r3 = *(0x16c + r25); // lwz @ 0x807C61B4
    r0 = r21 + 1; // 0x807C61B8
    *(8 + r3) = r0; // stw @ 0x807C61BC
    r3 = *(0x16c + r25); // lwz @ 0x807C61C0
    FUN_807C3ACC(); // bl 0x807C3ACC
    if (<=) goto 0x0x807c620c;
    r4 = *(0x170 + r25); // lwz @ 0x807C61D4
    r3 = r25;
    r5 = r27;
    r6 = r23;
    /* li r7, 2 */ // 0x807C61E4
    if (==) goto 0x0x807c61f0;
    /* li r7, 0 */ // 0x807C61EC
    FUN_807C62E0(r5, r6, r7, r7); // bl 0x807C62E0
    r3 = *(0x170 + r25); // lwz @ 0x807C61F4
    r4 = r21 + r22; // 0x807C61F8
    r0 = r4 + 1; // 0x807C61FC
    *(8 + r3) = r0; // stw @ 0x807C6200
    r3 = *(0x170 + r25); // lwz @ 0x807C6204
    FUN_807C3ACC(); // bl 0x807C3ACC
    r0 = *(0x1b4 + r1); // lwz @ 0x807C6210
    return;
}