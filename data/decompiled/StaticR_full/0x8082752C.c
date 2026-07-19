/* Function at 0x8082752C, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8082752C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x80827534
    /* lis r4, 0 */ // 0x80827538
    *(0x1c + r1) = r31; // stw @ 0x80827540
    /* lis r31, 0 */ // 0x80827544
    *(0x18 + r1) = r30; // stw @ 0x80827548
    *(0x14 + r1) = r29; // stw @ 0x8082754C
    r29 = r3;
    r5 = *(0 + r31); // lwz @ 0x80827554
    r0 = *(0 + r6); // lwz @ 0x80827558
    *(0 + r5) = r0; // sth @ 0x8082755C
    r30 = *(0 + r4); // lwz @ 0x80827560
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 0x14 */ // 0x8082756C
    if (<) goto 0x0x808275a4;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x808275a4;
    r6 = *(0 + r31); // lwz @ 0x80827588
    r3 = r30;
    r4 = r29;
    /* li r5, 3 */ // 0x80827594
    /* li r7, 0x14 */ // 0x80827598
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x808275c4 */ // 0x808275A0
    /* lis r3, 0 */ // 0x808275A4
    /* lis r5, 0 */ // 0x808275A8
    r6 = *(0 + r5); // lwz @ 0x808275AC
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808275B4
    /* li r5, 3 */ // 0x808275B8
    /* li r7, 0x14 */ // 0x808275BC
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x808275C4
    /* lis r3, 0 */ // 0x808275C8
    r30 = *(0x18 + r1); // lwz @ 0x808275CC
    r29 = *(0x14 + r1); // lwz @ 0x808275D0
    r0 = *(0x24 + r1); // lwz @ 0x808275D4
    r3 = *(0 + r3); // lwz @ 0x808275D8
    return;
}