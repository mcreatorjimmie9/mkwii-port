/* Function at 0x808B8DF0, size=136 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808B8DF0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    r5 = r3 + 0x6c8; // 0x808B8DF8
    /* li r6, 0 */ // 0x808B8DFC
    *(0x44 + r1) = r0; // stw @ 0x808B8E00
    *(0x3c + r1) = r31; // stw @ 0x808B8E04
    r31 = r3;
    r4 = *(0x654 + r3); // lwz @ 0x808B8E0C
    r0 = r4 + 1; // 0x808B8E10
    *(0x654 + r3) = r0; // stw @ 0x808B8E14
    FUN_80671C2C(); // bl 0x80671C2C
    r4 = r31 + 0x6c8; // 0x808B8E20
    FUN_8064E324(r3, r4); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808B8E28
    /* li r0, 0 */ // 0x808B8E2C
    r6 = r6 + 0; // 0x808B8E30
    *(8 + r1) = r0; // stw @ 0x808B8E34
    *(0xc + r1) = r0; // stw @ 0x808B8E40
    r4 = r6 + 0x3f; // 0x808B8E44
    r5 = r6 + 0x47; // 0x808B8E48
    r6 = r6 + 0x53; // 0x808B8E4C
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808B8E58
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r31 + 0x6c8; // 0x808B8E60
    r31 = *(0x3c + r1); // lwz @ 0x808B8E64
    r0 = *(0x44 + r1); // lwz @ 0x808B8E68
    return;
}