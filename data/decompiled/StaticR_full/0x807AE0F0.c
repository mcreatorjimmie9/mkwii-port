/* Function at 0x807AE0F0, size=236 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r22 */
/* Calls: 7 function(s) */

int FUN_807AE0F0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r22 */
    /* stmw r22, 8(r1) */ // 0x807AE0FC
    /* lis r24, 0 */ // 0x807AE100
    r23 = r3;
    r3 = *(0 + r24); // lwz @ 0x807AE108
    r27 = *(0x25 + r3); // lbz @ 0x807AE10C
    FUN_805C1588(); // bl 0x805C1588
    r5 = *(0 + r24); // lwz @ 0x807AE114
    r28 = r3;
    /* li r4, 2 */ // 0x807AE11C
    r3 = *(0xb74 + r5); // lwz @ 0x807AE120
    r3 = r3 + -2; // 0x807AE124
    /* subfic r0, r3, 2 */ // 0x807AE128
    /* orc r3, r4, r3 */ // 0x807AE12C
    /* srwi r0, r0, 1 */ // 0x807AE130
    /* subf r0, r0, r3 */ // 0x807AE134
    /* srwi r26, r0, 0x1f */ // 0x807AE138
    FUN_807C018C(); // bl 0x807C018C
    r29 = r3;
    /* li r25, 0 */ // 0x807AE148
    if (==) goto 0x0x807ae158;
    /* li r25, 1 */ // 0x807AE150
    /* b 0x807ae164 */ // 0x807AE154
    if (<=) goto 0x0x807ae164;
    /* li r25, 2 */ // 0x807AE160
    /* li r24, 0 */ // 0x807AE164
    /* lis r30, 0 */ // 0x807AE168
    /* lis r31, 0 */ // 0x807AE16C
    /* b 0x807ae288 */ // 0x807AE170
    r3 = *(0 + r30); // lwz @ 0x807AE174
    /* clrlwi r4, r24, 0x18 */ // 0x807AE178
    FUN_805C14C8(); // bl 0x805C14C8
    /* extsb. r4, r3 */ // 0x807AE180
    if (<) goto 0x0x807ae284;
    r3 = *(0 + r31); // lwz @ 0x807AE188
    FUN_8061D97C(); // bl 0x8061D97C
    r22 = r3;
    FUN_8061DECC(); // bl 0x8061DECC
    if (!=) goto 0x0x807ae1b0;
    if (!=) goto 0x0x807ae1b0;
    if (==) goto 0x0x807ae284;
    /* li r3, 0x218 */ // 0x807AE1B0
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x807ae1c8;
    r4 = r22;
    FUN_807B1184(r3, r4); // bl 0x807B1184
    r0 = *(0x24 + r23); // lwz @ 0x807AE1C8
    /* clrlwi r4, r24, 0x18 */ // 0x807AE1CC
    /* slwi r0, r0, 2 */ // 0x807AE1D0
    r5 = r23 + r0; // 0x807AE1D4
    *(0x14 + r5) = r3; // stw @ 0x807AE1D8
}