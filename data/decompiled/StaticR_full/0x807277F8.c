/* Function at 0x807277F8, size=804 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 27 function(s) */

int FUN_807277F8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x80727810
    *(0x10 + r1) = r28; // stw @ 0x80727814
    r0 = *(0x124 + r3); // lwz @ 0x80727818
    if (!=) goto 0x0x807279e8;
    r0 = *(0x128 + r3); // lbz @ 0x80727824
    /* li r4, 2 */ // 0x80727828
    if (==) goto 0x0x80727838;
    /* li r4, 1 */ // 0x80727834
    /* slwi r0, r4, 2 */ // 0x80727838
    /* li r28, 0 */ // 0x8072783C
    r29 = r3 + r0; // 0x80727840
    /* lis r30, 0 */ // 0x80727844
    r3 = *(0x164 + r29); // lwz @ 0x80727848
    if (==) goto 0x0x80727860;
    r0 = *(0xada + r31); // lhz @ 0x80727854
    if (==) goto 0x0x80727870;
    r3 = r31;
    r4 = r28;
    FUN_8073DB0C(r3, r4); // bl 0x8073DB0C
    /* b 0x8072792c */ // 0x8072786C
    if (==) goto 0x0x80727884;
    r0 = *(0xadc + r31); // lhz @ 0x80727878
    if (==) goto 0x0x80727894;
    r3 = r31;
    r4 = r28;
    FUN_8073E1A4(r3, r4); // bl 0x8073E1A4
    /* b 0x8072792c */ // 0x80727890
    if (!=) goto 0x0x807278ac;
    r3 = r31;
    r4 = r28;
    FUN_8073E6E0(r3, r4); // bl 0x8073E6E0
    /* b 0x8072792c */ // 0x807278A8
    if (!=) goto 0x0x807278c4;
    r3 = r31;
    r4 = r28;
    FUN_8073F380(r3, r4); // bl 0x8073F380
    /* b 0x8072792c */ // 0x807278C0
    if (!=) goto 0x0x807278dc;
    r3 = r31;
    r4 = r28;
    FUN_8073EC50(r3, r4); // bl 0x8073EC50
    /* b 0x8072792c */ // 0x807278D8
    if (==) goto 0x0x807278f0;
    r0 = *(0xade + r31); // lhz @ 0x807278E4
    if (==) goto 0x0x80727900;
    r3 = r31;
    r4 = r28;
    FUN_8073F81C(r3, r4); // bl 0x8073F81C
    /* b 0x8072792c */ // 0x807278FC
    if (!=) goto 0x0x80727918;
    r3 = r31;
    r4 = r28;
    FUN_8073FCB0(r3, r4); // bl 0x8073FCB0
    /* b 0x8072792c */ // 0x80727914
    if (!=) goto 0x0x8072792c;
    r3 = r31;
    r4 = r28;
    FUN_807400D4(r3, r4); // bl 0x807400D4
    r4 = *(0x174 + r29); // lwz @ 0x8072792C
    r0 = *(0x164 + r29); // lwz @ 0x80727930
    if (==) goto 0x0x807279d4;
    if (>) goto 0x0x807279d4;
    r3 = r30 + 0; // 0x80727944
    /* slwi r0, r4, 2 */ // 0x80727948
    /* lwzx r3, r3, r0 */ // 0x8072794C
    /* mtctr r3 */ // 0x80727950
    /* bctr  */ // 0x80727954
    r3 = r31;
    r4 = r28;
    FUN_8073DFBC(r3, r4); // bl 0x8073DFBC
    /* b 0x807279d4 */ // 0x80727964
    r3 = r31;
    r4 = r28;
    FUN_8073E504(r4, r3, r4); // bl 0x8073E504
    /* b 0x807279d4 */ // 0x80727974
    r3 = r31;
    r4 = r28;
    FUN_8073E9D4(r4, r3, r4); // bl 0x8073E9D4
    /* b 0x807279d4 */ // 0x80727984
    r3 = r31;
    r4 = r28;
    FUN_8073F604(r4, r3, r4); // bl 0x8073F604
    /* b 0x807279d4 */ // 0x80727994
    r3 = r31;
    r4 = r28;
    FUN_8073F0E8(r4, r3, r4); // bl 0x8073F0E8
    /* b 0x807279d4 */ // 0x807279A4
    r3 = r31;
    r4 = r28;
    FUN_8073FB28(r4, r3, r4); // bl 0x8073FB28
    /* b 0x807279d4 */ // 0x807279B4
    r3 = r31;
    r4 = r28;
    FUN_8073FF4C(r4, r3, r4); // bl 0x8073FF4C
    /* b 0x807279d4 */ // 0x807279C4
    r3 = r31;
    r4 = r28;
    FUN_8074036C(r4, r3, r4); // bl 0x8074036C
    r28 = r28 + 1; // 0x807279D4
    r29 = r29 + 4; // 0x807279D8
    if (<) goto 0x0x80727848;
    /* b 0x80727b6c */ // 0x807279E4
    if (!=) goto 0x0x80727b6c;
    r4 = *(0x168 + r3); // lwz @ 0x807279F0
    if (==) goto 0x0x80727a08;
    r0 = *(0xada + r3); // lhz @ 0x807279FC
    if (==) goto 0x0x80727a18;
    r3 = r31;
    /* li r4, 1 */ // 0x80727A0C
    FUN_8073DB0C(r3, r4); // bl 0x8073DB0C
    /* b 0x80727ac0 */ // 0x80727A14
    if (==) goto 0x0x80727a2c;
    r0 = *(0xadc + r3); // lhz @ 0x80727A20
    if (==) goto 0x0x80727a3c;
    r3 = r31;
    /* li r4, 1 */ // 0x80727A30
    FUN_8073E1A4(r3, r4); // bl 0x8073E1A4
    /* b 0x80727ac0 */ // 0x80727A38
    if (!=) goto 0x0x80727a50;
    /* li r4, 1 */ // 0x80727A44
    FUN_8073E6E0(r4); // bl 0x8073E6E0
    /* b 0x80727ac0 */ // 0x80727A4C
    if (!=) goto 0x0x80727a64;
    /* li r4, 1 */ // 0x80727A58
    FUN_8073F380(r4); // bl 0x8073F380
    /* b 0x80727ac0 */ // 0x80727A60
    if (!=) goto 0x0x80727a78;
    /* li r4, 1 */ // 0x80727A6C
    FUN_8073EC50(r4); // bl 0x8073EC50
    /* b 0x80727ac0 */ // 0x80727A74
    if (==) goto 0x0x80727a8c;
    r0 = *(0xade + r3); // lhz @ 0x80727A80
    if (==) goto 0x0x80727a9c;
    r3 = r31;
    /* li r4, 1 */ // 0x80727A90
    FUN_8073F81C(r3, r4); // bl 0x8073F81C
    /* b 0x80727ac0 */ // 0x80727A98
    if (!=) goto 0x0x80727ab0;
    /* li r4, 1 */ // 0x80727AA4
    FUN_8073FCB0(r4); // bl 0x8073FCB0
    /* b 0x80727ac0 */ // 0x80727AAC
    if (!=) goto 0x0x80727ac0;
    /* li r4, 1 */ // 0x80727AB8
    FUN_807400D4(r4); // bl 0x807400D4
    r4 = *(0x178 + r31); // lwz @ 0x80727AC0
    r0 = *(0x168 + r31); // lwz @ 0x80727AC4
    if (==) goto 0x0x80727b6c;
    if (>) goto 0x0x80727b6c;
    /* lis r3, 0 */ // 0x80727AD8
    /* slwi r0, r4, 2 */ // 0x80727ADC
    r3 = r3 + 0; // 0x80727AE0
    /* lwzx r3, r3, r0 */ // 0x80727AE4
    /* mtctr r3 */ // 0x80727AE8
    /* bctr  */ // 0x80727AEC
    r3 = r31;
    /* li r4, 1 */ // 0x80727AF4
    FUN_8073DFBC(r3, r4); // bl 0x8073DFBC
    /* b 0x80727b6c */ // 0x80727AFC
    r3 = r31;
    /* li r4, 1 */ // 0x80727B04
    FUN_8073E504(r4, r3, r4); // bl 0x8073E504
    /* b 0x80727b6c */ // 0x80727B0C
    r3 = r31;
    /* li r4, 1 */ // 0x80727B14
    FUN_8073E9D4(r4, r3, r4); // bl 0x8073E9D4
}