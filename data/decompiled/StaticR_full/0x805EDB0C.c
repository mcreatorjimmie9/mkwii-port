/* Function at 0x805EDB0C, size=360 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r23 */
/* Calls: 5 function(s) */

int FUN_805EDB0C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r23 */
    /* stmw r23, 0x2c(r1) */ // 0x805EDB18
    r23 = r3;
    r31 = *(0x5b + r1); // lbz @ 0x805EDB20
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r27 = r7;
    r28 = r8;
    r29 = r9;
    r30 = r10;
    r0 = *(0x28 + r3); // lwz @ 0x805EDB40
    if (!=) goto 0x0x805edc0c;
    r0 = *(4 + r3); // lwz @ 0x805EDB4C
    /* rlwinm. r0, r0, 0, 0x14, 0x14 */ // 0x805EDB50
    if (==) goto 0x0x805edbb4;
    r0 = *(0x3c + r3); // lwz @ 0x805EDB58
    /* li r3, 0 */ // 0x805EDB5C
    if (==) goto 0x0x805edb74;
    if (==) goto 0x0x805edb80;
    /* b 0x805edb8c */ // 0x805EDB70
    /* lis r3, 0 */ // 0x805EDB74
    r3 = *(0 + r3); // lwz @ 0x805EDB78
    /* b 0x805edb8c */ // 0x805EDB7C
    /* lis r3, 0 */ // 0x805EDB80
    r3 = r3 + 0; // 0x805EDB84
    r3 = *(4 + r3); // lwz @ 0x805EDB88
    r4 = *(0x10 + r3); // lwz @ 0x805EDB8C
    /* li r3, 0x44 */ // 0x805EDB90
    /* li r5, 4 */ // 0x805EDB94
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edc08;
    r4 = r23;
    /* li r5, 2 */ // 0x805EDBA8
    FUN_805E7A18(r4, r5); // bl 0x805E7A18
    /* b 0x805edc08 */ // 0x805EDBB0
    r0 = *(0x3c + r3); // lwz @ 0x805EDBB4
    /* li r3, 0 */ // 0x805EDBB8
    if (==) goto 0x0x805edbd0;
    if (==) goto 0x0x805edbdc;
    /* b 0x805edbe8 */ // 0x805EDBCC
    /* lis r3, 0 */ // 0x805EDBD0
    r3 = *(0 + r3); // lwz @ 0x805EDBD4
    /* b 0x805edbe8 */ // 0x805EDBD8
    /* lis r3, 0 */ // 0x805EDBDC
    r3 = r3 + 0; // 0x805EDBE0
    r3 = *(4 + r3); // lwz @ 0x805EDBE4
    r4 = *(0x10 + r3); // lwz @ 0x805EDBE8
    /* li r3, 0x3c */ // 0x805EDBEC
    /* li r5, 4 */ // 0x805EDBF0
    FUN_805E3430(r3, r3, r5); // bl 0x805E3430
    if (==) goto 0x0x805edc08;
    r4 = r23;
    FUN_805E5470(r5, r4); // bl 0x805E5470
    *(0x28 + r23) = r3; // stw @ 0x805EDC08
    r3 = *(0x28 + r23); // lwz @ 0x805EDC0C
    FUN_805E78D8(r4); // bl 0x805E78D8
    r0 = *(0x3c + r23); // lwz @ 0x805EDC14
    /* li r6, 0 */ // 0x805EDC18
    if (==) goto 0x0x805edc30;
    if (==) goto 0x0x805edc3c;
    /* b 0x805edc48 */ // 0x805EDC2C
    /* lis r3, 0 */ // 0x805EDC30
    r6 = *(0 + r3); // lwz @ 0x805EDC34
    /* b 0x805edc48 */ // 0x805EDC38
    /* lis r3, 0 */ // 0x805EDC3C
    r3 = r3 + 0; // 0x805EDC40
    r6 = *(4 + r3); // lwz @ 0x805EDC44
    r0 = *(0 + r25); // lwz @ 0x805EDC48
    r4 = r24;
    *(0x18 + r1) = r0; // stw @ 0x805EDC50
    r9 = r26;
    r10 = r27;
    r0 = *(0xc + r23); // lwz @ 0x805EDC60
    *(0x1c + r1) = r0; // stw @ 0x805EDC68
    *(8 + r1) = r28; // stw @ 0x805EDC6C
    *(0xc + r1) = r29; // stw @ 0x805EDC70
}