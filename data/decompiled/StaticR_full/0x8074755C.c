/* Function at 0x8074755C, size=136 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_8074755C(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x54 + r1) = r29; // stw @ 0x80747574
    *(0x50 + r1) = r28; // stw @ 0x80747578
    FUN_808A0278(); // bl 0x808A0278
    /* lis r3, 0 */ // 0x80747580
    r0 = *(0 + r3); // lbz @ 0x80747584
    if (!=) goto 0x0x80747720;
    FUN_805ABAFC(r3); // bl 0x805ABAFC
    /* lis r29, 1 */ // 0x80747594
    r4 = *(0xc98 + r3); // lwz @ 0x80747598
    r3 = r29 + -0x8000; // 0x8074759C
    /* li r5, 0x20 */ // 0x807475A0
    FUN_805E3430(r3, r5); // bl 0x805E3430
    r28 = r3;
    r5 = r29 + -0x8000; // 0x807475AC
    /* li r4, 0 */ // 0x807475B0
    FUN_805E3430(r5, r5, r4); // bl 0x805E3430
    /* lis r29, 0 */ // 0x807475B8
    r4 = r28;
    r3 = r29 + 0; // 0x807475C0
    /* li r5, 0x80 */ // 0x807475C4
    /* li r6, 0x80 */ // 0x807475C8
    /* li r7, 5 */ // 0x807475CC
    /* li r8, 0 */ // 0x807475D0
    /* li r9, 0 */ // 0x807475D4
    /* li r10, 1 */ // 0x807475D8
    FUN_805E3430(r6, r7, r8, r9, r10); // bl 0x805E3430
    /* lis r4, 0 */ // 0x807475E0
}