/* Function at 0x808D667C, size=112 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808D667C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x808D6688
    r31 = r3;
    r4 = r31;
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808D669C
    r6 = r6 + 0; // 0x808D66A4
    /* li r7, 0 */ // 0x808D66A8
    r4 = r6 + 0xd; // 0x808D66AC
    r5 = r6 + 0x18; // 0x808D66B0
    r6 = r6 + 0x1d; // 0x808D66B4
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    r3 = r31;
    /* li r4, 0x539 */ // 0x808D66C0
    /* li r5, 0 */ // 0x808D66C4
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    /* li r4, -1 */ // 0x808D66D0
    FUN_8064E32C(r4, r5, r3, r4); // bl 0x8064E32C
    r0 = *(0x44 + r1); // lwz @ 0x808D66D8
    r31 = *(0x3c + r1); // lwz @ 0x808D66DC
    return;
}