/* Function at 0x80840A6C, size=964 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r16 */
/* Calls: 12 function(s) */

int FUN_80840A6C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -96(r1) */
    /* saved r16 */
    /* lis r9, 0 */ // 0x80840A74
    *(0x64 + r1) = r0; // stw @ 0x80840A78
    /* stmw r16, 0x20(r1) */ // 0x80840A7C
    r31 = r3;
    r22 = r4;
    r21 = r5;
    r20 = r6;
    r19 = r7;
    r18 = r8;
    /* li r24, 0x14 */ // 0x80840A98
    r0 = *(0 + r9); // lbz @ 0x80840A9C
    if (!=) goto 0x0x80840c24;
    /* lis r4, 0 */ // 0x80840AA8
    r0 = *(0 + r4); // lbz @ 0x80840AAC
    if (==) goto 0x0x80840c24;
    /* lis r5, 0 */ // 0x80840AB8
    /* lis r4, 0 */ // 0x80840ABC
    r0 = *(0 + r5); // lbz @ 0x80840AC0
    /* li r6, 1 */ // 0x80840AC4
    r5 = *(0 + r4); // lwz @ 0x80840AC8
    /* li r7, 0 */ // 0x80840ACC
    /* mtctr r0 */ // 0x80840AD0
    if (<=) goto 0x0x80840b10;
    r4 = *(0xc + r5); // lwz @ 0x80840ADC
    r0 = r7 rlwinm 2; // rlwinm
    /* lwzx r4, r4, r0 */ // 0x80840AE4
    r0 = *(0x38 + r4); // lwz @ 0x80840AE8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80840AEC
    if (!=) goto 0x0x80840b08;
    r4 = *(0x20 + r4); // lbz @ 0x80840AF4
    /* clrlwi r0, r6, 0x18 */ // 0x80840AF8
    if (<=) goto 0x0x80840b08;
    r6 = r4;
    r7 = r7 + 1; // 0x80840B08
    if (counter-- != 0) goto 0x0x80840adc;
    r4 = *(0x44 + r3); // lwz @ 0x80840B10
    /* clrlwi r0, r6, 0x18 */ // 0x80840B14
    if (==) goto 0x0x80840c24;
    /* lis r17, 0 */ // 0x80840B20
    *(0x44 + r3) = r0; // stw @ 0x80840B24
    /* lis r3, 0 */ // 0x80840B2C
    *(0x10 + r1) = r0; // stw @ 0x80840B34
    r3 = r3 + 0; // 0x80840B38
    *(8 + r1) = r3; // stw @ 0x80840B3C
    FUN_805E3430(r3, r3); // bl 0x805E3430
    /* lis r16, 0 */ // 0x80840B44
    *(0xc + r1) = r3; // stw @ 0x80840B48
    r3 = *(0 + r16); // lwz @ 0x80840B4C
    /* li r4, 1 */ // 0x80840B54
    /* li r6, 0 */ // 0x80840B58
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    if (==) goto 0x0x80840b6c;
    /* b 0x80840b80 */ // 0x80840B68
    r3 = *(0 + r16); // lwz @ 0x80840B6C
    /* li r4, 0 */ // 0x80840B74
    /* li r6, 0 */ // 0x80840B78
    FUN_805CFD60(r5, r4, r6); // bl 0x805CFD60
    r4 = *(1 + r3); // lbz @ 0x80840B80
    r8 = r3 + 3; // 0x80840B84
    r0 = *(2 + r3); // lbz @ 0x80840B88
    r3 = r31;
    r5 = r31 + 0x18; // 0x80840B90
    /* li r6, 0 */ // 0x80840B94
    r0 = r0 * r4; // 0x80840B98
    /* li r7, 0 */ // 0x80840B9C
    /* lbzux r4, r8, r0 */ // 0x80840BA0
    r0 = *(1 + r8); // lbz @ 0x80840BA4
    r8 = r8 + 2; // 0x80840BA8
    r0 = r0 * r4; // 0x80840BAC
    /* lbzux r4, r8, r0 */ // 0x80840BB0
    r0 = *(1 + r8); // lbz @ 0x80840BB4
    r8 = r8 + 2; // 0x80840BB8
    r0 = r0 * r4; // 0x80840BBC
    r4 = r8 + r0; // 0x80840BC0
    FUN_80840018(r8); // bl 0x80840018
    r4 = r3;
    r3 = r31;
    r5 = r31 + 0x10; // 0x80840BD0
    /* li r6, 1 */ // 0x80840BD4
    /* li r7, 0 */ // 0x80840BD8
    FUN_80840018(r4, r3, r5, r6, r7); // bl 0x80840018
    r4 = r3;
    r3 = r31;
    r5 = r31 + 0x20; // 0x80840BE8
    /* li r6, 1 */ // 0x80840BEC
    /* li r7, 1 */ // 0x80840BF0
    FUN_80840018(r4, r3, r5, r6, r7); // bl 0x80840018
    r3 = r31;
    r4 = r31 + 0x10; // 0x80840BFC
    FUN_80840360(r6, r7, r3, r4); // bl 0x80840360
    r3 = r31;
    r4 = r31 + 0x18; // 0x80840C08
    FUN_80840360(r3, r4, r3, r4); // bl 0x80840360
    /* lis r4, 0 */ // 0x80840C10
    r4 = r4 + 0; // 0x80840C18
    *(8 + r1) = r4; // stw @ 0x80840C1C
    FUN_805DE878(r4, r3, r4); // bl 0x805DE878
    if (==) goto 0x0x80840c3c;
    r0 = r22 + -1; // 0x80840C2C
    r5 = r31 + 0x20; // 0x80840C30
    /* clrlwi r21, r0, 0x18 */ // 0x80840C34
    /* b 0x80840c54 */ // 0x80840C38
    r21 = r21 + -1; // 0x80840C40
    if (==) goto 0x0x80840c50;
    r5 = r31 + 0x10; // 0x80840C48
    /* b 0x80840c54 */ // 0x80840C4C
    r5 = r31 + 0x18; // 0x80840C50
    /* lis r3, 0 */ // 0x80840C54
    /* clrlwi r4, r21, 0x18 */ // 0x80840C58
    r0 = *(0 + r3); // lbz @ 0x80840C5C
    /* mulli r3, r4, 0x26 */ // 0x80840C60
    r4 = *(4 + r5); // lwz @ 0x80840C64
    r23 = r4 + r3; // 0x80840C6C
    if (==) goto 0x0x80840ca4;
    /* lis r3, 0 */ // 0x80840C74
    r3 = *(0 + r3); // lwz @ 0x80840C78
    FUN_806E4428(r3); // bl 0x806E4428
    r16 = r3;
    /* li r3, 2 */ // 0x80840C84
    FUN_808287B4(r3, r3); // bl 0x808287B4
    /* clrlwi r4, r3, 0x18 */ // 0x80840C8C
    r0 = r3 rlwinm 2; // rlwinm
    /* subf r0, r4, r0 */ // 0x80840C94
    if (<=) goto 0x0x80840ca4;
    /* li r19, 1 */ // 0x80840CA0
    /* lis r3, 0 */ // 0x80840CA4
    r3 = *(0 + r3); // lwz @ 0x80840CA8
    r0 = *(0x42c + r3); // lwz @ 0x80840CAC
    if (<=) goto 0x0x80840cbc;
    /* li r19, 1 */ // 0x80840CB8
    /* lis r3, 0 */ // 0x80840CBC
    /* li r22, 0 */ // 0x80840CC0
    r3 = *(0 + r3); // lwz @ 0x80840CC4
    /* li r0, 0 */ // 0x80840CC8
    r3 = *(0xb70 + r3); // lwz @ 0x80840CCC
    if (==) goto 0x0x80840ce4;
    if (==) goto 0x0x80840ce4;
    /* li r0, 1 */ // 0x80840CE0
    /* li r27, 0x13 */ // 0x80840CE8
    if (==) goto 0x0x80840cf4;
    /* li r27, 0x10 */ // 0x80840CF0
    /* lis r26, 0 */ // 0x80840CF4
    /* lis r16, 0 */ // 0x80840CF8
    /* li r21, 0 */ // 0x80840CFC
    /* li r17, 0 */ // 0x80840D00
    r26 = r26 + 0; // 0x80840D04
    /* lis r30, 0 */ // 0x80840D0C
    /* lis r28, 0 */ // 0x80840D10
    /* lis r29, 0 */ // 0x80840D14
    /* b 0x80840e94 */ // 0x80840D18
    r25 = *(4 + r26); // lwz @ 0x80840D1C
    if (==) goto 0x0x80840d44;
    if (==) goto 0x0x80840d58;
    if (==) goto 0x0x80840d6c;
    if (==) goto 0x0x80840d80;
    /* b 0x80840d94 */ // 0x80840D40
    r3 = *(0x34 + r31); // lwz @ 0x80840D44
    /* neg r0, r3 */ // 0x80840D48
    /* andc r0, r0, r3 */ // 0x80840D4C
    /* srwi r0, r0, 0x1f */ // 0x80840D50
    /* b 0x80840d98 */ // 0x80840D54
    r3 = *(0x38 + r31); // lwz @ 0x80840D58
    /* neg r0, r3 */ // 0x80840D5C
    /* andc r0, r0, r3 */ // 0x80840D60
    /* srwi r0, r0, 0x1f */ // 0x80840D64
    /* b 0x80840d98 */ // 0x80840D68
    r3 = *(0x3c + r31); // lwz @ 0x80840D6C
    /* neg r0, r3 */ // 0x80840D70
    /* andc r0, r0, r3 */ // 0x80840D74
    /* srwi r0, r0, 0x1f */ // 0x80840D78
    /* b 0x80840d98 */ // 0x80840D7C
    r3 = *(0x40 + r31); // lwz @ 0x80840D80
    /* neg r0, r3 */ // 0x80840D84
    /* andc r0, r0, r3 */ // 0x80840D88
    /* srwi r0, r0, 0x1f */ // 0x80840D8C
    /* b 0x80840d98 */ // 0x80840D90
    /* li r0, 0 */ // 0x80840D94
    if (!=) goto 0x0x80840e80;
    if (==) goto 0x0x80840db0;
    if (!=) goto 0x0x80840dcc;
    if (==) goto 0x0x80840dcc;
    r3 = *(0 + r18); // lwz @ 0x80840DB8
    r3 = *(4 + r3); // lwz @ 0x80840DBC
    r0 = *(0xc + r3); // lwz @ 0x80840DC0
    /* rlwinm. r0, r0, 0, 0x10, 0x10 */ // 0x80840DC4
    if (!=) goto 0x0x80840e80;
    if (!=) goto 0x0x80840df0;
    if (==) goto 0x0x80840df0;
    r3 = *(0 + r18); // lwz @ 0x80840DDC
    r3 = *(4 + r3); // lwz @ 0x80840DE0
    r0 = *(8 + r3); // lwz @ 0x80840DE4
    /* rlwinm. r0, r0, 0, 0, 0 */ // 0x80840DE8
    if (!=) goto 0x0x80840e80;
    r0 = *(0 + r26); // lbz @ 0x80840DF0
    if (==) goto 0x0x80840e80;
    /* mulli r0, r25, 0x24 */ // 0x80840DFC
    r3 = *(0 + r28); // lwz @ 0x80840E00
    r3 = r3 + r0; // 0x80840E04
    r3 = r19;
    FUN_80822540(r3); // bl 0x80822540
    r0 = *(0x1c + r19); // lwz @ 0x80840E14
    /* subf. r0, r3, r0 */ // 0x80840E18
    if (<=) goto 0x0x80840e80;
    if (!=) goto 0x0x80840e78;
    r3 = *(0 + r29); // lwz @ 0x80840E28
    /* li r25, 0 */ // 0x80840E2C
}