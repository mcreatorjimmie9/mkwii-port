/* Function at 0x80682750, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80682750(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x8068275C
    *(0xc + r1) = r31; // stw @ 0x80682760
    r31 = r3;
    *(0x2530 + r3) = r0; // stw @ 0x80682768
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 1 */ // 0x80682778
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x80682780
    r31 = *(0xc + r1); // lwz @ 0x80682784
    return;
}