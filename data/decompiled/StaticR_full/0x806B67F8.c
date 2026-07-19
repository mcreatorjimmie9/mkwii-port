/* Function at 0x806B67F8, size=452 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_806B67F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x806B6800
    *(0xf4 + r1) = r0; // stw @ 0x806B6804
    /* stmw r27, 0xdc(r1) */ // 0x806B6808
    r29 = r3;
    /* li r31, 0 */ // 0x806B6814
    r28 = *(0 + r4); // lwz @ 0x806B6818
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x806B6820
    /* li r30, 0 */ // 0x806B6824
    r3 = *(0 + r3); // lwz @ 0x806B6828
    r3 = *(0 + r3); // lwz @ 0x806B682C
    r0 = *(0 + r3); // lwz @ 0x806B6830
    if (<) goto 0x0x806b6844;
    if (<=) goto 0x0x806b68d4;
    if (==) goto 0x0x806b6858;
    if (==) goto 0x0x806b6940;
    /* b 0x806b697c */ // 0x806B6854
    r27 = *(0x2368 + r28); // lwz @ 0x806B6858
    r3 = r27;
    FUN_808CFFA8(r3); // bl 0x808CFFA8
    r0 = *(0x234c + r28); // lwz @ 0x806B6864
    r30 = r3;
    /* li r31, 0x58d */ // 0x806B686C
    if (==) goto 0x0x806b688c;
    if (==) goto 0x0x806b6898;
    if (==) goto 0x0x806b68a4;
    /* b 0x806b68c4 */ // 0x806B6888
    /* li r0, 0x589 */ // 0x806B688C
    *(0x2c + r1) = r0; // stw @ 0x806B6890
    /* b 0x806b68c4 */ // 0x806B6894
    /* li r0, 0x58a */ // 0x806B6898
    *(0x2c + r1) = r0; // stw @ 0x806B689C
    /* b 0x806b68c4 */ // 0x806B68A0
    r0 = *(0x2370 + r28); // lwz @ 0x806B68A4
    /* clrlwi. r0, r0, 0x1f */ // 0x806B68A8
    if (==) goto 0x0x806b68bc;
    /* li r0, 0x58c */ // 0x806B68B0
    *(0x2c + r1) = r0; // stw @ 0x806B68B4
    /* b 0x806b68c4 */ // 0x806B68B8
    /* li r0, 0x58b */ // 0x806B68BC
    *(0x2c + r1) = r0; // stw @ 0x806B68C0
    r3 = r27;
    FUN_808AF7D8(r3); // bl 0x808AF7D8
    *(0x30 + r1) = r3; // stw @ 0x806B68CC
    /* b 0x806b697c */ // 0x806B68D0
    r0 = *(0x234c + r28); // lwz @ 0x806B68D4
    /* lis r3, 0 */ // 0x806B68D8
    r3 = r3 + 0; // 0x806B68DC
    /* li r31, 0x58e */ // 0x806B68E0
    r30 = r3 + 0x218; // 0x806B68E8
    if (==) goto 0x0x806b6904;
    if (==) goto 0x0x806b6910;
    if (==) goto 0x0x806b691c;
    /* b 0x806b697c */ // 0x806B6900
    /* li r0, 0x589 */ // 0x806B6904
    *(0x2c + r1) = r0; // stw @ 0x806B6908
    /* b 0x806b697c */ // 0x806B690C
    /* li r0, 0x58a */ // 0x806B6910
    *(0x2c + r1) = r0; // stw @ 0x806B6914
    /* b 0x806b697c */ // 0x806B6918
    r0 = *(0x2370 + r28); // lwz @ 0x806B691C
    /* clrlwi. r0, r0, 0x1f */ // 0x806B6920
    if (==) goto 0x0x806b6934;
    /* li r0, 0x58c */ // 0x806B6928
    *(0x2c + r1) = r0; // stw @ 0x806B692C
    /* b 0x806b697c */ // 0x806B6930
    /* li r0, 0x58b */ // 0x806B6934
    *(0x2c + r1) = r0; // stw @ 0x806B6938
    /* b 0x806b697c */ // 0x806B693C
    r0 = *(0x2358 + r28); // lwz @ 0x806B6940
    if (==) goto 0x0x806b6958;
    if (==) goto 0x0x806b696c;
    /* b 0x806b697c */ // 0x806B6954
    /* lis r3, 0 */ // 0x806B6958
    /* li r31, 0x587 */ // 0x806B695C
    r3 = r3 + 0; // 0x806B6960
    r30 = r3 + 0x225; // 0x806B6964
    /* b 0x806b697c */ // 0x806B6968
    /* lis r3, 0 */ // 0x806B696C
    /* li r31, 0x588 */ // 0x806B6970
    r3 = r3 + 0; // 0x806B6974
    r30 = r3 + 0x235; // 0x806B6978
    /* lis r28, 0 */ // 0x806B697C
    r5 = r30;
    r28 = r28 + 0; // 0x806B6984
    r3 = r29 + 0x1a0; // 0x806B6988
    r4 = r28 + 0x242; // 0x806B698C
    FUN_806A0D70(r5, r3, r4); // bl 0x806A0D70
    r5 = r31;
    r3 = r29 + 0x1a0; // 0x806B6998
    r4 = r28 + 0x24b; // 0x806B699C
    FUN_806A093C(r5, r3, r4, r6); // bl 0x806A093C
    r0 = *(0xf4 + r1); // lwz @ 0x806B69AC
    return;
}