/* Function at 0x806C98F0, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_806C98F0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806C9904
    r30 = r3;
    r3 = r31;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x806C9918
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r3 = r31;
    /* li r4, 6 */ // 0x806C9924
    FUN_8064A82C(r3, r4, r3, r4); // bl 0x8064A82C
    r0 = *(0x14 + r1); // lwz @ 0x806C992C
    r31 = *(0xc + r1); // lwz @ 0x806C9930
    r30 = *(8 + r1); // lwz @ 0x806C9934
    return;
}