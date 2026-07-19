/* Function at 0x808E8AC0, size=228 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808E8AC0(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x808E8AD0
    *(0x18 + r1) = r30; // stw @ 0x808E8AD4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E8ADC
    r29 = r3;
    r5 = *(0x240 + r4); // lwz @ 0x808E8AE4
    /* li r4, 0 */ // 0x808E8AE8
    r3 = *(0 + r31); // lwz @ 0x808E8AEC
    r0 = r5 + -1; // 0x808E8AF0
    /* cntlzw r0, r0 */ // 0x808E8AF4
    r3 = r3 + 0x34; // 0x808E8AF8
    /* srwi r5, r0, 5 */ // 0x808E8AFC
    FUN_8067F484(r3); // bl 0x8067F484
    r0 = *(0x240 + r30); // lwz @ 0x808E8B04
    if (<=) goto 0x0x808e8b28;
    if (!=) goto 0x0x808e8b88;
    r3 = r29;
    r4 = r30;
    FUN_808B3CF4(r3, r4); // bl 0x808B3CF4
    /* b 0x808e8b88 */ // 0x808E8B24
    r3 = *(0 + r31); // lwz @ 0x808E8B28
    /* li r4, 0 */ // 0x808E8B2C
    r3 = *(0 + r3); // lwz @ 0x808E8B30
    r0 = *(0x1f8 + r3); // lwz @ 0x808E8B34
    if (==) goto 0x0x808e8b4c;
    /* li r3, 0x7c */ // 0x808E8B40
    FUN_808E74E4(r3); // bl 0x808E74E4
    r4 = *(0x83c + r3); // lwz @ 0x808E8B48
    if (!=) goto 0x0x808e8b78;
    /* lis r3, 0 */ // 0x808E8B54
    /* li r0, 5 */ // 0x808E8B58
    r6 = *(0 + r3); // lwz @ 0x808E8B5C
    r3 = r29;
    r5 = r30;
    /* li r4, 0x1c */ // 0x808E8B68
    *(0x1764 + r6) = r0; // stw @ 0x808E8B6C
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    /* b 0x808e8b88 */ // 0x808E8B74
    r3 = r29;
    r5 = r30;
    /* li r4, 0x2c */ // 0x808E8B80
    FUN_808B3FE8(r3, r5, r4); // bl 0x808B3FE8
    r0 = *(0x24 + r1); // lwz @ 0x808E8B88
    r31 = *(0x1c + r1); // lwz @ 0x808E8B8C
    r30 = *(0x18 + r1); // lwz @ 0x808E8B90
    r29 = *(0x14 + r1); // lwz @ 0x808E8B94
    return;
}