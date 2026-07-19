/* Function at 0x806C900C, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806C900C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 0x60 */ // 0x806C9018
    *(0xc + r1) = r31; // stw @ 0x806C901C
    r31 = r3;
    *(0x1134 + r3) = r0; // stw @ 0x806C9024
    r3 = r4;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x806C9034
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x806C903C
    r31 = *(0xc + r1); // lwz @ 0x806C9040
    return;
}