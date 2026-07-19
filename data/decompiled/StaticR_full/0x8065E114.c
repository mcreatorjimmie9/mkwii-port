/* Function at 0x8065E114, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8065E114(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 6 */ // 0x8065E128
    *(8 + r1) = r30; // stw @ 0x8065E12C
    r30 = r3;
    r3 = r31;
    FUN_8064A82C(r4, r3); // bl 0x8064A82C
    /* li r0, 0x97 */ // 0x8065E13C
    *(0xb24 + r30) = r0; // stw @ 0x8065E140
    r3 = r31;
    FUN_8064A384(r3, r3); // bl 0x8064A384
    r3 = r30;
    /* li r4, 1 */ // 0x8065E150
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x14 + r1); // lwz @ 0x8065E158
    r31 = *(0xc + r1); // lwz @ 0x8065E15C
    r30 = *(8 + r1); // lwz @ 0x8065E160
    return;
}