/* Function at 0x8066DB2C, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8066DB2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8066DB3C
    *(8 + r1) = r30; // stw @ 0x8066DB40
    r30 = r3;
    /* b 0x8066db5c */ // 0x8066DB48
    r3 = r30;
    r4 = r31;
    FUN_8066E240(r3, r4); // bl 0x8066E240
    r31 = r31 + 1; // 0x8066DB58
    r0 = *(0x28 + r30); // lwz @ 0x8066DB5C
    if (<) goto 0x0x8066db4c;
    r0 = *(0x14 + r1); // lwz @ 0x8066DB68
    r31 = *(0xc + r1); // lwz @ 0x8066DB6C
    r30 = *(8 + r1); // lwz @ 0x8066DB70
    return;
}