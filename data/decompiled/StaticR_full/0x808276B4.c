/* Function at 0x808276B4, size=196 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808276B4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r6, 0 */ // 0x808276BC
    /* lis r5, 0 */ // 0x808276C0
    *(0x1c + r1) = r31; // stw @ 0x808276C8
    /* lis r31, 0 */ // 0x808276CC
    *(0x18 + r1) = r30; // stw @ 0x808276D0
    *(0x14 + r1) = r29; // stw @ 0x808276D4
    r29 = r3;
    r7 = *(0 + r31); // lwz @ 0x808276DC
    *(2 + r7) = r4; // sth @ 0x808276E0
    r3 = *(0 + r31); // lwz @ 0x808276E4
    r0 = *(0 + r6); // lwz @ 0x808276E8
    *(0 + r3) = r0; // sth @ 0x808276EC
    r30 = *(0 + r5); // lwz @ 0x808276F0
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    /* li r0, 4 */ // 0x808276FC
    if (<) goto 0x0x80827734;
    r3 = r30;
    FUN_806E4370(r3); // bl 0x806E4370
    if (==) goto 0x0x80827734;
    r6 = *(0 + r31); // lwz @ 0x80827718
    r3 = r30;
    r4 = r29;
    /* li r5, 6 */ // 0x80827724
    /* li r7, 4 */ // 0x80827728
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x80827754 */ // 0x80827730
    /* lis r3, 0 */ // 0x80827734
    /* lis r5, 0 */ // 0x80827738
    r6 = *(0 + r5); // lwz @ 0x8082773C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x80827744
    /* li r5, 6 */ // 0x80827748
    /* li r7, 4 */ // 0x8082774C
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r31 = *(0x1c + r1); // lwz @ 0x80827754
    /* lis r3, 0 */ // 0x80827758
    r30 = *(0x18 + r1); // lwz @ 0x8082775C
    r29 = *(0x14 + r1); // lwz @ 0x80827760
    r0 = *(0x24 + r1); // lwz @ 0x80827764
    r3 = *(0 + r3); // lwz @ 0x80827768
    return;
}