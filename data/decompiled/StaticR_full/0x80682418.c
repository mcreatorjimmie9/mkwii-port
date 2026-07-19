/* Function at 0x80682418, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80682418(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80682424
    r31 = r3;
    r3 = r3 + 0x1c34; // 0x8068242C
    FUN_80654340(r3); // bl 0x80654340
    r3 = r31 + 0x19e0; // 0x80682434
    /* li r4, 0 */ // 0x80682438
    FUN_80649FD0(r3, r3, r4); // bl 0x80649FD0
    r3 = r31;
    /* li r4, 0x18 */ // 0x80682444
    /* li r5, -1 */ // 0x80682448
    FUN_806724B8(r4, r3, r4, r5); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x80682450
    r31 = *(0xc + r1); // lwz @ 0x80682454
    return;
}