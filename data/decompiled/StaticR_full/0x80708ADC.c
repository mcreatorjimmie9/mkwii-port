/* Function at 0x80708ADC, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_80708ADC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x80708AE4
    *(0x14 + r1) = r29; // stw @ 0x80708AF4
    *(0x10 + r1) = r28; // stw @ 0x80708AF8
    r28 = r3;
    r3 = r3 + 0x98; // 0x80708B00
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r3 = *(0x38 + r3); // lwz @ 0x80708B08
    r0 = r3 + -1; // 0x80708B0C
    if (>) goto 0x0x80708b98;
    r3 = r28 + 0x98; // 0x80708B18
    /* li r4, 0 */ // 0x80708B1C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x35 + r3); // lbz @ 0x80708B24
    if (!=) goto 0x0x80708b98;
    r31 = r28;
    r30 = r28 + 0x174; // 0x80708B34
    /* li r29, 0 */ // 0x80708B38
    r0 = *(0x3b4 + r31); // lwz @ 0x80708B3C
    if (<) goto 0x0x80708b68;
    r3 = r30;
    /* li r4, 1 */ // 0x80708B4C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    if (!=) goto 0x0x80708b68;
    r3 = r30;
    /* li r4, 0 */ // 0x80708B60
    FUN_80649F40(r3, r4); // bl 0x80649F40
    r29 = r29 + 1; // 0x80708B68
    r30 = r30 + 0x254; // 0x80708B6C
    r31 = r31 + 0x254; // 0x80708B74
    if (<) goto 0x0x80708b3c;
    r3 = r28 + 0x98; // 0x80708B7C
    /* li r4, 0 */ // 0x80708B80
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80708B88
    /* li r4, 3 */ // 0x80708B8C
    /* lfs f1, 0(r5) */ // 0x80708B90
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = r28 + 0x98; // 0x80708B98
    /* li r4, 0 */ // 0x80708B9C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80708BA4
    /* cntlzw r0, r0 */ // 0x80708BA8
    /* srwi r0, r0, 5 */ // 0x80708BAC
    *(0x80 + r28) = r0; // stb @ 0x80708BB0
    r31 = *(0x1c + r1); // lwz @ 0x80708BB4
    r30 = *(0x18 + r1); // lwz @ 0x80708BB8
    r29 = *(0x14 + r1); // lwz @ 0x80708BBC
    r28 = *(0x10 + r1); // lwz @ 0x80708BC0
    r0 = *(0x24 + r1); // lwz @ 0x80708BC4
    return;
}