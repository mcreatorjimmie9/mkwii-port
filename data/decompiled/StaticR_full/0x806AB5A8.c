/* Function at 0x806AB5A8, size=72 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806AB5A8(int r3, int r4, int r5)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    *(0xdc + r1) = r31; // stw @ 0x806AB5B4
    r31 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* li r0, 0 */ // 0x806AB5C4
    *(0x80 + r1) = r0; // stw @ 0x806AB5C8
    r3 = r31 + 0x304; // 0x806AB5CC
    /* li r4, 0x2520 */ // 0x806AB5D4
    FUN_806A0A34(r3, r5, r4); // bl 0x806A0A34
    r0 = *(0xe4 + r1); // lwz @ 0x806AB5DC
    r31 = *(0xdc + r1); // lwz @ 0x806AB5E0
    return;
}