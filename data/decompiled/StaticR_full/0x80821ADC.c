/* Function at 0x80821ADC, size=232 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80821ADC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80821AE8
    r31 = r3;
    r0 = *(0 + r3); // lwz @ 0x80821AF0
    if (==) goto 0x0x80821b94;
    if (==) goto 0x0x80821ba4;
    if (==) goto 0x0x80821bb0;
    r0 = *(0x14 + r31); // lwz @ 0x80821B0C
    if (<=) goto 0x0x80821b84;
    r4 = *(4 + r31); // lwz @ 0x80821B18
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x80821B20
    FUN_80820FFC(r3); // bl 0x80820FFC
    r0 = *(0x14 + r31); // lwz @ 0x80821B28
    if (<=) goto 0x0x80821b7c;
    r3 = *(4 + r31); // lwz @ 0x80821B34
    /* li r4, 0 */ // 0x80821B38
    /* li r6, 0 */ // 0x80821B3C
    r5 = *(0 + r3); // lwz @ 0x80821B40
    /* b 0x80821b60 */ // 0x80821B44
    r0 = *(4 + r31); // lwz @ 0x80821B48
    r4 = r4 + 1; // 0x80821B4C
    r3 = r0 + r6; // 0x80821B50
    r6 = r6 + 4; // 0x80821B54
    r0 = *(4 + r3); // lwz @ 0x80821B58
    *(0 + r3) = r0; // stw @ 0x80821B5C
    r3 = *(0x14 + r31); // lwz @ 0x80821B60
    r0 = r3 + -1; // 0x80821B64
    if (<) goto 0x0x80821b48;
    r3 = *(4 + r31); // lwz @ 0x80821B70
    /* slwi r0, r4, 2 */ // 0x80821B74
    /* stwx r5, r3, r0 */ // 0x80821B78
    /* li r0, 1 */ // 0x80821B7C
    /* b 0x80821b88 */ // 0x80821B80
    /* li r0, 0 */ // 0x80821B84
    if (!=) goto 0x0x80821b0c;
    /* b 0x80821bb0 */ // 0x80821B90
    /* lis r3, 0 */ // 0x80821B94
    r3 = *(0 + r3); // lwz @ 0x80821B98
    FUN_808691F4(r3); // bl 0x808691F4
    /* b 0x80821bb0 */ // 0x80821BA0
    /* lis r3, 0 */ // 0x80821BA4
    r3 = *(0 + r3); // lwz @ 0x80821BA8
    FUN_8086DF68(r3); // bl 0x8086DF68
    r0 = *(0x14 + r1); // lwz @ 0x80821BB0
    r31 = *(0xc + r1); // lwz @ 0x80821BB4
    return;
}