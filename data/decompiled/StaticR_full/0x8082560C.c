/* Function at 0x8082560C, size=124 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 2 function(s) */

int FUN_8082560C(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* lis r3, 0 */ // 0x80825614
    *(0x34 + r1) = r0; // stw @ 0x80825618
    /* stmw r25, 0x14(r1) */ // 0x8082561C
    r25 = r4;
    r26 = r5;
    /* li r29, 0 */ // 0x80825628
    /* li r30, 0 */ // 0x8082562C
    r31 = *(0 + r3); // lwz @ 0x80825630
    r28 = *(0x254 + r31); // lwz @ 0x80825634
    /* b 0x8082566c */ // 0x80825638
    r3 = *(0x244 + r31); // lwz @ 0x8082563C
    /* lwzx r27, r3, r30 */ // 0x80825640
    r3 = r27;
    FUN_8086CD00(r3); // bl 0x8086CD00
    /* clrlwi r0, r3, 0x18 */ // 0x8082564C
    if (!=) goto 0x0x80825664;
    r3 = r27;
    r4 = r26;
    FUN_8086C640(r3, r4); // bl 0x8086C640
    r30 = r30 + 4; // 0x80825664
    r29 = r29 + 1; // 0x80825668
    if (<) goto 0x0x8082563c;
    r0 = *(0x34 + r1); // lwz @ 0x80825678
    return;
}