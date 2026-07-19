/* Function at 0x8061B35C, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8061B35C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8061B36C
    r30 = r3;
    FUN_8061ECC8(); // bl 0x8061ECC8
    r31 = r3;
    r3 = r30;
    FUN_8061DFF8(r3); // bl 0x8061DFF8
    r5 = *(0xa3 + r31); // lbz @ 0x8061B384
    /* li r4, 1 */ // 0x8061B388
    /* extsb r5, r5 */ // 0x8061B38C
    FUN_806107D8(r3, r4); // bl 0x806107D8
    r0 = *(0x14 + r1); // lwz @ 0x8061B394
    r31 = *(0xc + r1); // lwz @ 0x8061B398
    r30 = *(8 + r1); // lwz @ 0x8061B39C
    return;
}