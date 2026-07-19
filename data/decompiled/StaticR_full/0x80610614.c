/* Function at 0x80610614, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80610614(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80610620
    r31 = r3;
    FUN_8061E6D4(); // bl 0x8061E6D4
    /* li r0, 0 */ // 0x8061062C
    *(0x1c4 + r31) = r0; // sth @ 0x80610630
    r6 = *(0 + r31); // lwz @ 0x80610634
    r3 = r31;
    /* li r4, 4 */ // 0x8061063C
    /* li r5, 0 */ // 0x80610640
    r7 = *(4 + r6); // lwz @ 0x80610644
    /* li r6, 1 */ // 0x80610648
    r0 = *(4 + r7); // lwz @ 0x8061064C
    /* clrlwi r0, r0, 1 */ // 0x80610650
    *(4 + r7) = r0; // stw @ 0x80610654
    FUN_8061E8CC(r6); // bl 0x8061E8CC
    r0 = *(0x14 + r1); // lwz @ 0x8061065C
    r31 = *(0xc + r1); // lwz @ 0x80610660
    return;
}