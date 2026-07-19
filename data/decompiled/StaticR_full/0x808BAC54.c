/* Function at 0x808BAC54, size=304 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808BAC54(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    r3 = r3 + 0x1c90; // 0x808BAC68
    *(0xd8 + r1) = r30; // stw @ 0x808BAC6C
    *(0xd4 + r1) = r29; // stw @ 0x808BAC70
    *(0xd0 + r1) = r28; // stw @ 0x808BAC74
    r29 = *(0x143c + r4); // lwz @ 0x808BAC78
    r4 = r29;
    FUN_80874020(r4); // bl 0x80874020
    /* lis r3, 0 */ // 0x808BAC84
    r5 = *(0 + r3); // lwz @ 0x808BAC88
    r0 = *(0x1760 + r5); // lwz @ 0x808BAC8C
    if (!=) goto 0x0x808bad64;
    /* lis r3, 0 */ // 0x808BAC98
    r6 = *(0 + r3); // lwz @ 0x808BAC9C
    r0 = *(0x36 + r6); // lha @ 0x808BACA0
    if (<) goto 0x0x808bacc8;
    /* lis r3, 1 */ // 0x808BACAC
    /* clrlwi r4, r0, 0x18 */ // 0x808BACB0
    r0 = r3 + -0x6c10; // 0x808BACB4
    r0 = r0 * r4; // 0x808BACB8
    r3 = r6 + r0; // 0x808BACBC
    r30 = r3 + 0x38; // 0x808BACC0
    /* b 0x808baccc */ // 0x808BACC4
    /* li r30, 0 */ // 0x808BACC8
    r0 = *(0x1780 + r5); // lwz @ 0x808BACCC
    /* clrlwi. r0, r0, 0x1f */ // 0x808BACD0
    if (==) goto 0x0x808bace0;
    /* li r28, 3 */ // 0x808BACD8
    /* b 0x808bace4 */ // 0x808BACDC
    r28 = *(0x175c + r5); // lwz @ 0x808BACE0
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* mulli r3, r28, 0x380 */ // 0x808BACEC
    /* mulli r0, r29, 0x70 */ // 0x808BACF0
    r3 = r30 + r3; // 0x808BACF4
    r0 = r3 + r0; // 0x808BACF8
    /* addic. r3, r0, 0x20 */ // 0x808BACFC
    if (==) goto 0x0x808bad10;
    r0 = *(0x56 + r3); // lbz @ 0x808BAD04
    if (!=) goto 0x0x808bad28;
    /* li r0, 0xd36 */ // 0x808BAD10
    r3 = r28 + 0xd53; // 0x808BAD14
    *(0x2c + r1) = r3; // stw @ 0x808BAD18
    *(0x30 + r1) = r0; // stw @ 0x808BAD1C
    *(0x34 + r1) = r0; // stw @ 0x808BAD20
    /* b 0x808bad54 */ // 0x808BAD24
    r0 = r28 + 0xd53; // 0x808BAD28
    *(0x2c + r1) = r0; // stw @ 0x808BAD2C
    /* li r0, 0xd36 */ // 0x808BAD30
    r4 = *(0x64 + r3); // lwz @ 0x808BAD34
    if (==) goto 0x0x808bad44;
    r0 = r4 + 0xd2a; // 0x808BAD40
    *(0x30 + r1) = r0; // stw @ 0x808BAD44
    r3 = *(0x60 + r3); // lwz @ 0x808BAD48
    r0 = r3 + 0xd2d; // 0x808BAD4C
    *(0x34 + r1) = r0; // stw @ 0x808BAD50
    r3 = *(0x2bc + r31); // lwz @ 0x808BAD54
    /* li r4, 0xd20 */ // 0x808BAD5C
    FUN_808D5A00(r5, r4); // bl 0x808D5A00
    r0 = *(0xe4 + r1); // lwz @ 0x808BAD64
    r31 = *(0xdc + r1); // lwz @ 0x808BAD68
    r30 = *(0xd8 + r1); // lwz @ 0x808BAD6C
    r29 = *(0xd4 + r1); // lwz @ 0x808BAD70
    r28 = *(0xd0 + r1); // lwz @ 0x808BAD74
    return;
}