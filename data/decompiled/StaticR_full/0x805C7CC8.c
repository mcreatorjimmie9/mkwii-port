/* Function at 0x805C7CC8, size=548 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 5 function(s) */

int FUN_805C7CC8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r6, 0 */ // 0x805C7CD0
    *(0x34 + r1) = r0; // stw @ 0x805C7CD4
    /* stmw r25, 0x14(r1) */ // 0x805C7CD8
    r26 = r3;
    r25 = r4;
    r27 = r5;
    /* li r4, 4 */ // 0x805C7CE8
    r3 = *(0 + r6); // lwz @ 0x805C7CEC
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c7ed8;
    /* lis r3, 0 */ // 0x805C7CFC
    /* mulli r28, r27, 0x18 */ // 0x805C7D00
    r0 = *(0 + r3); // lwz @ 0x805C7D04
    r3 = r0 + r28; // 0x805C7D08
    r0 = *(0x3c4 + r3); // lbz @ 0x805C7D0C
    if (==) goto 0x0x805c7ed8;
    /* lis r3, 0 */ // 0x805C7D18
    r4 = *(4 + r26); // lwz @ 0x805C7D1C
    /* mulli r6, r25, 0xf0 */ // 0x805C7D20
    r5 = *(0 + r3); // lwz @ 0x805C7D24
    r7 = *(0xc + r4); // lwz @ 0x805C7D28
    r4 = r25 rlwinm 2; // rlwinm
    r0 = r27 rlwinm 2; // rlwinm
    r3 = r5 + r6; // 0x805C7D34
    r6 = *(0xf4 + r3); // lwz @ 0x805C7D38
    /* lwzx r30, r7, r4 */ // 0x805C7D3C
    /* lwzx r29, r7, r0 */ // 0x805C7D44
    if (!=) goto 0x0x805c7d54;
    /* li r31, 0 */ // 0x805C7D4C
    /* b 0x805c7d7c */ // 0x805C7D50
    /* mulli r0, r27, 0xf0 */ // 0x805C7D54
    r3 = r5 + r0; // 0x805C7D58
    r0 = *(0xf4 + r3); // lwz @ 0x805C7D5C
    if (!=) goto 0x0x805c7d70;
    /* li r31, 0 */ // 0x805C7D68
    /* b 0x805c7d7c */ // 0x805C7D6C
    /* subf r0, r6, r0 */ // 0x805C7D70
    /* cntlzw r0, r0 */ // 0x805C7D74
    /* srwi r31, r0, 5 */ // 0x805C7D78
    /* lis r25, 0 */ // 0x805C7D7C
    /* lis r4, 0 */ // 0x805C7D80
    /* lis r5, 0 */ // 0x805C7D84
    r7 = *(0 + r4); // lwz @ 0x805C7D88
    r9 = *(0 + r5); // lwz @ 0x805C7D8C
    r4 = r27;
    r3 = *(0 + r25); // lwz @ 0x805C7D94
    /* li r5, 1 */ // 0x805C7D98
    /* li r6, 1 */ // 0x805C7D9C
    /* li r8, 1 */ // 0x805C7DA0
    FUN_808F9C40(r4, r5, r6, r8); // bl 0x808F9C40
    r0 = *(0 + r25); // lwz @ 0x805C7DA8
    r3 = r0 + r28; // 0x805C7DAC
    r0 = *(0x3c4 + r3); // lbz @ 0x805C7DB0
    if (!=) goto 0x0x805c7dd4;
    /* lis r3, 0 */ // 0x805C7DBC
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x805C7DC4
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DFF8(r3, r4); // bl 0x8061DFF8
    FUN_8060EFB4(r3, r4); // bl 0x8060EFB4
    if (==) goto 0x0x805c7e28;
    r3 = *(4 + r26); // lwz @ 0x805C7DDC
    r0 = *(0x22 + r30); // lhz @ 0x805C7DE0
    r3 = *(0x3c + r3); // lwz @ 0x805C7DE4
    r3 = *(4 + r3); // lwz @ 0x805C7DE8
    r3 = *(0x1d0 + r3); // lha @ 0x805C7DEC
    /* add. r0, r3, r0 */ // 0x805C7DF0
    if (>=) goto 0x0x805c7dfc;
    /* li r0, 0 */ // 0x805C7DF8
    *(0x22 + r30) = r0; // sth @ 0x805C7DFC
    r3 = *(4 + r26); // lwz @ 0x805C7E00
    r0 = *(0x22 + r29); // lhz @ 0x805C7E04
    r3 = *(0x3c + r3); // lwz @ 0x805C7E08
    r3 = *(4 + r3); // lwz @ 0x805C7E0C
    r3 = *(0x1d2 + r3); // lha @ 0x805C7E10
    /* add. r0, r3, r0 */ // 0x805C7E14
    if (>=) goto 0x0x805c7e20;
    /* li r0, 0 */ // 0x805C7E1C
    *(0x22 + r29) = r0; // sth @ 0x805C7E20
    /* b 0x805c7e70 */ // 0x805C7E24
    r3 = *(4 + r26); // lwz @ 0x805C7E28
    r0 = *(0x22 + r30); // lhz @ 0x805C7E2C
    r3 = *(0x3c + r3); // lwz @ 0x805C7E30
    r3 = *(4 + r3); // lwz @ 0x805C7E34
    r3 = *(0x1c8 + r3); // lha @ 0x805C7E38
    /* add. r0, r3, r0 */ // 0x805C7E3C
    if (>=) goto 0x0x805c7e48;
    /* li r0, 0 */ // 0x805C7E44
    *(0x22 + r30) = r0; // sth @ 0x805C7E48
    r3 = *(4 + r26); // lwz @ 0x805C7E4C
    r0 = *(0x22 + r29); // lhz @ 0x805C7E50
    r3 = *(0x3c + r3); // lwz @ 0x805C7E54
    r3 = *(4 + r3); // lwz @ 0x805C7E58
    r3 = *(0x1ce + r3); // lha @ 0x805C7E5C
    /* add. r0, r3, r0 */ // 0x805C7E60
    if (>=) goto 0x0x805c7e6c;
    /* li r0, 0 */ // 0x805C7E68
    *(0x22 + r29) = r0; // sth @ 0x805C7E6C
    /* lis r3, 0 */ // 0x805C7E70
    r0 = *(0 + r3); // lwz @ 0x805C7E74
    r3 = r0 + r28; // 0x805C7E78
    r0 = *(0x3c4 + r3); // lbz @ 0x805C7E7C
    if (!=) goto 0x0x805c7ed8;
    if (!=) goto 0x0x805c7ed8;
    r3 = *(4 + r26); // lwz @ 0x805C7E90
    r0 = *(0x22 + r30); // lhz @ 0x805C7E94
    r3 = *(0x3c + r3); // lwz @ 0x805C7E98
    r3 = *(4 + r3); // lwz @ 0x805C7E9C
    r3 = *(0x1ca + r3); // lha @ 0x805C7EA0
    /* add. r0, r3, r0 */ // 0x805C7EA4
    if (>=) goto 0x0x805c7eb0;
    /* li r0, 0 */ // 0x805C7EAC
    *(0x22 + r30) = r0; // sth @ 0x805C7EB0
    r3 = *(4 + r26); // lwz @ 0x805C7EB4
    r0 = *(0x22 + r29); // lhz @ 0x805C7EB8
    r3 = *(0x3c + r3); // lwz @ 0x805C7EBC
    r3 = *(4 + r3); // lwz @ 0x805C7EC0
    r3 = *(0x1cc + r3); // lha @ 0x805C7EC4
    /* add. r0, r3, r0 */ // 0x805C7EC8
    if (>=) goto 0x0x805c7ed4;
    /* li r0, 0 */ // 0x805C7ED0
    *(0x22 + r29) = r0; // sth @ 0x805C7ED4
    r0 = *(0x34 + r1); // lwz @ 0x805C7EDC
    return;
}