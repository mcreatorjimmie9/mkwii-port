/* Function at 0x8063B8B8, size=616 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r18 */
/* Calls: 11 function(s) */

int FUN_8063B8B8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -96(r1) */
    /* saved r18 */
    /* stmw r18, 0x28(r1) */ // 0x8063B8C4
    r23 = r3;
    r18 = r4;
    r19 = r5;
    r20 = r6;
    r21 = r7;
    r22 = r8;
    r0 = *(0 + r3); // lwz @ 0x8063B8E0
    if (!=) goto 0x0x8063b918;
    /* lis r3, 0 */ // 0x8063B8EC
    /* lis r5, 0 */ // 0x8063B8F0
    /* lis r6, 0 */ // 0x8063B8F4
    /* lis r7, 0 */ // 0x8063B8F8
    r3 = r3 + 0; // 0x8063B8FC
    r5 = r5 + 0; // 0x8063B900
    r6 = r6 + 0; // 0x8063B904
    r7 = r7 + 0; // 0x8063B908
    /* li r4, 0x26d */ // 0x8063B90C
    /* crclr cr1eq */ // 0x8063B910
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0 + r23); // lwz @ 0x8063B918
    r24 = r3 + 0x14; // 0x8063B91C
    /* clrlwi. r0, r24, 0x1e */ // 0x8063B920
    if (==) goto 0x0x8063b944;
    /* lis r3, 0 */ // 0x8063B928
    /* lis r5, 0 */ // 0x8063B92C
    r3 = r3 + 0; // 0x8063B930
    /* li r4, 0xaf */ // 0x8063B934
    r5 = r5 + 0; // 0x8063B938
    /* crclr cr1eq */ // 0x8063B93C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0x20 + r1) = r24; // stw @ 0x8063B944
    r0 = *(0 + r23); // lwz @ 0x8063B948
    if (!=) goto 0x0x8063b980;
    /* lis r3, 0 */ // 0x8063B954
    /* lis r5, 0 */ // 0x8063B958
    /* lis r6, 0 */ // 0x8063B95C
    /* lis r7, 0 */ // 0x8063B960
    r3 = r3 + 0; // 0x8063B964
    r5 = r5 + 0; // 0x8063B968
    r6 = r6 + 0; // 0x8063B96C
    r7 = r7 + 0; // 0x8063B970
    /* li r4, 0x26d */ // 0x8063B974
    /* crclr cr1eq */ // 0x8063B978
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0 + r23); // lwz @ 0x8063B980
    r0 = *(0x3c + r3); // lwz @ 0x8063B984
    if (==) goto 0x0x8063b998;
    r3 = r3 + r0; // 0x8063B990
    /* b 0x8063b99c */ // 0x8063B994
    /* li r3, 0 */ // 0x8063B998
    r24 = r3 + 0x20; // 0x8063B99C
    /* clrlwi. r0, r24, 0x1b */ // 0x8063B9A0
    if (==) goto 0x0x8063b9c4;
    /* lis r3, 0 */ // 0x8063B9A8
    /* lis r5, 0 */ // 0x8063B9AC
    r3 = r3 + 0; // 0x8063B9B0
    /* li r4, 0x17a */ // 0x8063B9B4
    r5 = r5 + 0; // 0x8063B9B8
    /* crclr cr1eq */ // 0x8063B9BC
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0x1c + r1) = r24; // stw @ 0x8063B9C4
    r0 = *(0 + r23); // lwz @ 0x8063B9C8
    if (!=) goto 0x0x8063ba00;
    /* lis r3, 0 */ // 0x8063B9D4
    /* lis r5, 0 */ // 0x8063B9D8
    /* lis r6, 0 */ // 0x8063B9DC
    /* lis r7, 0 */ // 0x8063B9E0
    r3 = r3 + 0; // 0x8063B9E4
    r5 = r5 + 0; // 0x8063B9E8
    r6 = r6 + 0; // 0x8063B9EC
    r7 = r7 + 0; // 0x8063B9F0
    /* li r4, 0x26d */ // 0x8063B9F4
    /* crclr cr1eq */ // 0x8063B9F8
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0 + r23); // lwz @ 0x8063BA00
    r0 = *(0x3c + r3); // lwz @ 0x8063BA04
    if (==) goto 0x0x8063ba18;
    r3 = r3 + r0; // 0x8063BA10
    /* b 0x8063ba1c */ // 0x8063BA14
    /* li r3, 0 */ // 0x8063BA18
    r24 = r3 + 0xe0; // 0x8063BA1C
    /* clrlwi. r0, r24, 0x1b */ // 0x8063BA20
    if (==) goto 0x0x8063ba44;
    /* lis r3, 0 */ // 0x8063BA28
    /* lis r5, 0 */ // 0x8063BA2C
    r3 = r3 + 0; // 0x8063BA30
    /* li r4, 0x201 */ // 0x8063BA34
    r5 = r5 + 0; // 0x8063BA38
    /* crclr cr1eq */ // 0x8063BA3C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0x18 + r1) = r24; // stw @ 0x8063BA44
    r0 = *(0 + r23); // lwz @ 0x8063BA48
    if (!=) goto 0x0x8063ba80;
    /* lis r3, 0 */ // 0x8063BA54
    /* lis r5, 0 */ // 0x8063BA58
    /* lis r6, 0 */ // 0x8063BA5C
    /* lis r7, 0 */ // 0x8063BA60
    r3 = r3 + 0; // 0x8063BA64
    r5 = r5 + 0; // 0x8063BA68
    r6 = r6 + 0; // 0x8063BA6C
    r7 = r7 + 0; // 0x8063BA70
    /* li r4, 0x26d */ // 0x8063BA74
    /* crclr cr1eq */ // 0x8063BA78
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0 + r23); // lwz @ 0x8063BA80
    r24 = r3 + 0x40; // 0x8063BA84
    /* clrlwi. r0, r24, 0x1e */ // 0x8063BA88
    if (==) goto 0x0x8063baac;
    /* lis r3, 0 */ // 0x8063BA90
    /* lis r5, 0 */ // 0x8063BA94
    r3 = r3 + 0; // 0x8063BA98
    /* li r4, 0x28 */ // 0x8063BA9C
    r5 = r5 + 0; // 0x8063BAA0
    /* crclr cr1eq */ // 0x8063BAA4
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0x14 + r1) = r24; // stw @ 0x8063BAAC
    r0 = *(0 + r23); // lwz @ 0x8063BAB0
    if (!=) goto 0x0x8063bae8;
    /* lis r3, 0 */ // 0x8063BABC
    /* lis r5, 0 */ // 0x8063BAC0
    /* lis r6, 0 */ // 0x8063BAC4
    /* lis r7, 0 */ // 0x8063BAC8
    r3 = r3 + 0; // 0x8063BACC
    r5 = r5 + 0; // 0x8063BAD0
    r6 = r6 + 0; // 0x8063BAD4
    r7 = r7 + 0; // 0x8063BAD8
    /* li r4, 0x26d */ // 0x8063BADC
    /* crclr cr1eq */ // 0x8063BAE0
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0 + r23); // lwz @ 0x8063BAE8
    r24 = r3 + 0x1a8; // 0x8063BAEC
    /* clrlwi. r0, r24, 0x1e */ // 0x8063BAF0
    if (==) goto 0x0x8063bb14;
    /* lis r3, 0 */ // 0x8063BAF8
    /* lis r5, 0 */ // 0x8063BAFC
    r3 = r3 + 0; // 0x8063BB00
    /* li r4, 0x6b */ // 0x8063BB04
    r5 = r5 + 0; // 0x8063BB08
    /* crclr cr1eq */ // 0x8063BB0C
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    *(0x10 + r1) = r24; // stw @ 0x8063BB14
    r3 = r23;
    FUN_805E3430(r5, r3); // bl 0x805E3430
}