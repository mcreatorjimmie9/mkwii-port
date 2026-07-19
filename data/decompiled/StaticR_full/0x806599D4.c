/* Function at 0x806599D4, size=292 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r14 */
/* Calls: 3 function(s) */

int FUN_806599D4(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r14 */
    /* stmw r14, 8(r1) */ // 0x806599E0
    /* li r15, 0 */ // 0x806599E4
    r16 = r3;
    /* li r31, 0 */ // 0x806599EC
    r19 = r15;
    /* lis r18, 0 */ // 0x806599F4
    /* lis r20, 0 */ // 0x806599F8
    /* lis r21, 0 */ // 0x806599FC
    /* li r30, 2 */ // 0x80659A00
    /* li r14, 5 */ // 0x80659A04
    /* li r29, 0x1a */ // 0x80659A08
    /* li r28, 0x18 */ // 0x80659A0C
    /* li r27, 0x16 */ // 0x80659A10
    /* li r26, 0x19 */ // 0x80659A14
    /* li r25, 0x17 */ // 0x80659A18
    /* li r24, 0x15 */ // 0x80659A1C
    /* li r23, 3 */ // 0x80659A20
    /* li r22, 1 */ // 0x80659A24
    /* li r17, -1 */ // 0x80659A28
    r0 = *(0 + r16); // lwz @ 0x80659A2C
    r3 = *(4 + r16); // lwz @ 0x80659A30
    /* or. r0, r3, r0 */ // 0x80659A34
    if (!=) goto 0x0x80659a44;
    *(0x1d0 + r16) = r17; // stw @ 0x80659A3C
    /* b 0x80659ca0 */ // 0x80659A40
    r3 = *(0x20 + r16); // lhz @ 0x80659A44
    /* clrlwi. r0, r3, 0x1f */ // 0x80659A48
    if (!=) goto 0x0x80659a58;
    /* li r0, 0 */ // 0x80659A50
    /* b 0x80659a68 */ // 0x80659A54
    /* rlwinm. r0, r3, 0, 0x1e, 0x1e */ // 0x80659A58
    /* li r0, 2 */ // 0x80659A5C
    if (==) goto 0x0x80659a68;
    /* li r0, 1 */ // 0x80659A64
    if (!=) goto 0x0x80659a84;
    r3 = *(0 + r18); // lwz @ 0x80659A70
    r4 = r15;
    FUN_806EEEA4(r4); // bl 0x806EEEA4
    if (!=) goto 0x0x80659a8c;
    *(0x1d0 + r16) = r19; // stw @ 0x80659A84
    /* b 0x80659ca0 */ // 0x80659A88
    r3 = *(0 + r20); // lwz @ 0x80659A8C
    FUN_806E69B4(); // bl 0x806E69B4
    if (!=) goto 0x0x80659aa4;
    *(0x1d0 + r16) = r22; // stw @ 0x80659A9C
    /* b 0x80659ca0 */ // 0x80659AA0
    r3 = *(0 + r20); // lwz @ 0x80659AA4
    r4 = r15;
    FUN_806E9BBC(r4); // bl 0x806E9BBC
    if (>) goto 0x0x80659c9c;
    r4 = r21 + 0; // 0x80659AB8
    /* slwi r0, r3, 2 */ // 0x80659ABC
    /* lwzx r4, r4, r0 */ // 0x80659AC0
    /* mtctr r4 */ // 0x80659AC4
    /* bctr  */ // 0x80659AC8
    *(0x1d0 + r16) = r22; // stw @ 0x80659ACC
    /* b 0x80659ca0 */ // 0x80659AD0
    *(0x1d0 + r16) = r30; // stw @ 0x80659AD4
    /* b 0x80659ca0 */ // 0x80659AD8
    *(0x1d0 + r16) = r23; // stw @ 0x80659ADC
    /* b 0x80659ca0 */ // 0x80659AE0
    *(0x1d0 + r16) = r24; // stw @ 0x80659AE4
    /* b 0x80659ca0 */ // 0x80659AE8
    *(0x1d0 + r16) = r25; // stw @ 0x80659AEC
    /* b 0x80659ca0 */ // 0x80659AF0
    *(0x1d0 + r16) = r26; // stw @ 0x80659AF4
}