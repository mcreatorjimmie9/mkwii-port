/* Function at 0x808B6770, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808B6770(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x808B6778
    *(0xc + r1) = r31; // stw @ 0x808B6780
    *(8 + r1) = r30; // stw @ 0x808B6784
    r30 = r6;
    r5 = *(0 + r3); // lwz @ 0x808B678C
    r0 = *(0x36 + r5); // lha @ 0x808B6790
    if (<) goto 0x0x808b67b8;
    /* lis r3, 1 */ // 0x808B679C
    /* clrlwi r4, r0, 0x18 */ // 0x808B67A0
    r0 = r3 + -0x6c10; // 0x808B67A4
    r0 = r0 * r4; // 0x808B67A8
    r3 = r5 + r0; // 0x808B67AC
    r31 = r3 + 0x38; // 0x808B67B0
    /* b 0x808b67bc */ // 0x808B67B4
    /* li r31, 0 */ // 0x808B67B8
    FUN_808CFE7C(); // bl 0x808CFE7C
    /* addis r4, r31, 1 */ // 0x808B67C0
    /* slwi r0, r3, 2 */ // 0x808B67C4
    r3 = r4 + r0; // 0x808B67C8
    *(-0x6e88 + r3) = r30; // stw @ 0x808B67CC
    r31 = *(0xc + r1); // lwz @ 0x808B67D0
    r30 = *(8 + r1); // lwz @ 0x808B67D4
    r0 = *(0x14 + r1); // lwz @ 0x808B67D8
    return;
}