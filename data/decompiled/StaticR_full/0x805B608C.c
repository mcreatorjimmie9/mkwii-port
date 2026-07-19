/* Function at 0x805B608C, size=444 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805B608C(int r3, int r4, int r5, int r6, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    *(0x24 + r1) = r0; // stw @ 0x805B6098
    /* stmw r27, 0xc(r1) */ // 0x805B609C
    r27 = r3;
    r28 = r9;
    /* li r31, 1 */ // 0x805B60A8
    if (==) goto 0x0x805b60e4;
    if (==) goto 0x0x805b60f8;
    if (==) goto 0x0x805b6110;
    if (==) goto 0x0x805b6134;
    if (==) goto 0x0x805b6160;
    if (==) goto 0x0x805b61ac;
    if (==) goto 0x0x805b61f8;
    /* b 0x805b624c */ // 0x805B60E0
    /* li r0, 0 */ // 0x805B60E4
    *(0 + r8) = r0; // stw @ 0x805B60E8
    *(0 + r9) = r4; // sth @ 0x805B60EC
    *(0 + r7) = r0; // stw @ 0x805B60F0
    /* b 0x805b6250 */ // 0x805B60F4
    /* li r0, 6 */ // 0x805B60F8
    *(0 + r8) = r0; // stw @ 0x805B60FC
    /* li r0, 0 */ // 0x805B6100
    *(0 + r9) = r4; // sth @ 0x805B6104
    *(0 + r7) = r0; // stw @ 0x805B6108
    /* b 0x805b6250 */ // 0x805B610C
    /* lis r3, 0 */ // 0x805B6110
    /* slwi r5, r5, 2 */ // 0x805B6114
    r3 = r3 + 0; // 0x805B6118
    /* li r0, 0 */ // 0x805B611C
    /* lwzx r3, r3, r5 */ // 0x805B6120
    *(0 + r8) = r3; // stw @ 0x805B6124
    *(0 + r9) = r4; // sth @ 0x805B6128
    *(0 + r7) = r0; // stw @ 0x805B612C
    /* b 0x805b6250 */ // 0x805B6130
    /* li r0, 7 */ // 0x805B6134
    *(0 + r8) = r0; // stw @ 0x805B6138
    /* clrlwi r0, r5, 0x10 */ // 0x805B613C
    /* lis r3, 0 */ // 0x805B6140
    *(0 + r9) = r4; // sth @ 0x805B6144
    /* mulli r0, r0, 0x18 */ // 0x805B6148
    r3 = *(0 + r3); // lwz @ 0x805B614C
    r3 = r3 + r0; // 0x805B6150
    r0 = r3 + 0xf8; // 0x805B6154
    *(0 + r7) = r0; // stw @ 0x805B6158
    /* b 0x805b6250 */ // 0x805B615C
    /* lis r3, 0x51ec */ // 0x805B6160
    /* li r5, 7 */ // 0x805B6164
    r0 = r3 + -0x7ae1; // 0x805B6168
    *(0 + r8) = r5; // stw @ 0x805B616C
    /* mulhw r0, r0, r4 */ // 0x805B6170
    /* lis r3, 0 */ // 0x805B6174
    r3 = *(0 + r3); // lwz @ 0x805B6178
    r0 = r0 >> 5; // srawi
    /* srwi r5, r0, 0x1f */ // 0x805B6180
    r0 = r0 + r5; // 0x805B6184
    /* clrlwi r5, r0, 0x10 */ // 0x805B6188
    /* mulli r0, r5, 0x18 */ // 0x805B618C
    r3 = r3 + r0; // 0x805B6190
    /* mulli r0, r5, 0x64 */ // 0x805B6194
    r3 = r3 + 0x68; // 0x805B6198
    *(0 + r7) = r3; // stw @ 0x805B619C
    /* subf r0, r0, r4 */ // 0x805B61A0
    *(0 + r9) = r0; // sth @ 0x805B61A4
    /* b 0x805b6250 */ // 0x805B61A8
    /* lis r3, 0x51ec */ // 0x805B61AC
    /* li r5, 7 */ // 0x805B61B0
    r0 = r3 + -0x7ae1; // 0x805B61B4
    *(0 + r8) = r5; // stw @ 0x805B61B8
    /* mulhw r0, r0, r4 */ // 0x805B61BC
    /* lis r3, 0 */ // 0x805B61C0
    r3 = *(0 + r3); // lwz @ 0x805B61C4
    r0 = r0 >> 5; // srawi
    /* srwi r5, r0, 0x1f */ // 0x805B61CC
    r0 = r0 + r5; // 0x805B61D0
    /* clrlwi r5, r0, 0x10 */ // 0x805B61D4
    /* mulli r0, r5, 0x18 */ // 0x805B61D8
    r3 = r3 + r0; // 0x805B61DC
    /* mulli r0, r5, 0x64 */ // 0x805B61E0
    r3 = r3 + 0x98; // 0x805B61E4
    *(0 + r7) = r3; // stw @ 0x805B61E8
    /* subf r0, r0, r4 */ // 0x805B61EC
    *(0 + r9) = r0; // sth @ 0x805B61F0
    /* b 0x805b6250 */ // 0x805B61F4
    /* li r0, 7 */ // 0x805B61F8
    *(0 + r8) = r0; // stw @ 0x805B61FC
    /* lis r5, 0 */ // 0x805B6200
    /* li r30, 0 */ // 0x805B6204
    r3 = *(0 + r5); // lwz @ 0x805B6208
    /* li r4, 4 */ // 0x805B620C
    /* li r6, 1 */ // 0x805B6210
    r0 = r3 + 0xe0; // 0x805B6214
    *(0 + r7) = r0; // stw @ 0x805B6218
    r29 = *(0 + r5); // lwz @ 0x805B621C
    r5 = *(0x34 + r29); // lwz @ 0x805B6220
    r3 = r29 + 0xe0; // 0x805B6224
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r29 + 0xe0; // 0x805B622C
    r4 = r27 + 0x10; // 0x805B6230
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (==) goto 0x0x805b6244;
    /* li r30, 0xff */ // 0x805B6240
    *(0 + r28) = r30; // sth @ 0x805B6244
}