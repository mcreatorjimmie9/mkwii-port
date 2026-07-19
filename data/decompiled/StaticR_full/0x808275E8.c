/* Function at 0x808275E8, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808275E8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x808275F0
    /* lis r6, 0 */ // 0x808275F4
    *(0x1c + r1) = r31; // stw @ 0x808275FC
    /* lis r31, 0 */ // 0x80827600
    *(0x18 + r1) = r30; // stw @ 0x80827604
    *(0x14 + r1) = r29; // stw @ 0x80827608
    r29 = r3;
    r8 = *(0 + r31); // lwz @ 0x80827610
    *(2 + r8) = r5; // sth @ 0x80827614
    r3 = *(0 + r31); // lwz @ 0x80827618
    *(4 + r3) = r4; // stb @ 0x8082761C
    r3 = *(0 + r31); // lwz @ 0x80827620
    r0 = *(0 + r7); // lwz @ 0x80827624
    *(0 + r3) = r0; // sth @ 0x80827628
    r30 = *(0 + r6); // lwz @ 0x8082762C
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 5 */ // 0x80827638
    if (<) goto 0x0x80827670;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x80827670;
    r6 = *(0 + r31); // lwz @ 0x80827654
    r3 = r30;
    r4 = r29;
    /* li r5, 5 */ // 0x80827660
    /* li r7, 5 */ // 0x80827664
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x80827690 */ // 0x8082766C
    /* lis r3, 0 */ // 0x80827670
    /* lis r5, 0 */ // 0x80827674
    r6 = *(0 + r5); // lwz @ 0x80827678
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x80827680
    /* li r5, 5 */ // 0x80827684
    /* li r7, 5 */ // 0x80827688
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x80827690
    /* lis r3, 0 */ // 0x80827694
    r30 = *(0x18 + r1); // lwz @ 0x80827698
    r29 = *(0x14 + r1); // lwz @ 0x8082769C
    r0 = *(0x24 + r1); // lwz @ 0x808276A0
    r3 = *(0 + r3); // lwz @ 0x808276A4
    return;
}