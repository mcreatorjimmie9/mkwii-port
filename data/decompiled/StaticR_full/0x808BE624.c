/* Function at 0x808BE624, size=308 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r24 */
/* Calls: 11 function(s) */

int FUN_808BE624(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r24 */
    /* stmw r24, 0x20(r1) */ // 0x808BE630
    FUN_808CFA50(); // bl 0x808CFA50
    r30 = r3;
    FUN_808CF954(); // bl 0x808CF954
    /* clrlwi r3, r3, 0x18 */ // 0x808BE640
    /* clrlwi r0, r30, 0x18 */ // 0x808BE644
    /* subf r26, r0, r3 */ // 0x808BE648
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x808BE654
    /* li r31, 2 */ // 0x808BE658
    r4 = *(0 + r3); // lwz @ 0x808BE65C
    r3 = *(0 + r4); // lwz @ 0x808BE660
    r0 = *(0 + r3); // lwz @ 0x808BE664
    if (<) goto 0x0x808be678;
    if (<=) goto 0x0x808be680;
    if (!=) goto 0x0x808be688;
    r3 = *(0x98 + r4); // lwz @ 0x808BE680
    r31 = *(0x74 + r3); // lwz @ 0x808BE684
    /* clrlwi r0, r30, 0x18 */ // 0x808BE688
    /* lis r28, 0 */ // 0x808BE68C
    r0 = r26 + r0; // 0x808BE690
    /* clrlwi r29, r0, 0x18 */ // 0x808BE694
    /* b 0x808be72c */ // 0x808BE698
    /* clrlwi r3, r30, 0x18 */ // 0x808BE69C
    r0 = *(0 + r28); // lwz @ 0x808BE6A0
    /* mulli r26, r3, 0xf0 */ // 0x808BE6A4
    r3 = r0 + r26; // 0x808BE6A8
    r0 = *(0xc28 + r3); // lwz @ 0x808BE6AC
    if (!=) goto 0x0x808be728;
    r3 = *(0xc24 + r3); // lwz @ 0x808BE6B8
    FUN_8089E030(); // bl 0x8089E030
    r25 = r3;
    FUN_8089DDDC(); // bl 0x8089DDDC
    r24 = r3;
    r4 = r24;
    FUN_805E364C(r3, r4); // bl 0x805E364C
    /* slwi r27, r3, 2 */ // 0x808BE6D8
    r3 = r25;
    FUN_8089E1A4(r3, r4, r3); // bl 0x8089E1A4
    /* lwzx r27, r3, r27 */ // 0x808BE6E4
    r3 = r27;
    r4 = r31;
    FUN_8089E2A8(r3, r3, r4); // bl 0x8089E2A8
    if (!=) goto 0x0x808be71c;
    r4 = r24;
    FUN_805E364C(r4, r3); // bl 0x805E364C
    /* slwi r27, r3, 2 */ // 0x808BE708
    r3 = r25;
    FUN_8089E1A4(r4, r3, r3); // bl 0x8089E1A4
    /* lwzx r27, r3, r27 */ // 0x808BE714
    /* b 0x808be6e8 */ // 0x808BE718
    r0 = *(0 + r28); // lwz @ 0x808BE71C
    r3 = r0 + r26; // 0x808BE720
    *(0xc20 + r3) = r27; // stw @ 0x808BE724
    r30 = r30 + 1; // 0x808BE728
    /* clrlwi r0, r30, 0x18 */ // 0x808BE72C
    if (<) goto 0x0x808be69c;
    /* li r4, -1 */ // 0x808BE73C
    FUN_805E35B8(r3, r4); // bl 0x805E35B8
    r0 = *(0x44 + r1); // lwz @ 0x808BE748
    return;
}