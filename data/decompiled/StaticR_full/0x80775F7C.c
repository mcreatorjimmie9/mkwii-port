/* Function at 0x80775F7C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80775F7C(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x80775F8C
    *(0x18 + r1) = r30; // stw @ 0x80775F90
    /* li r30, 0 */ // 0x80775F94
    *(0x14 + r1) = r29; // stw @ 0x80775F98
    r29 = r3;
    /* b 0x80775fb8 */ // 0x80775FA0
    r3 = *(0xc + r29); // lwz @ 0x80775FA4
    /* lwzx r3, r3, r31 */ // 0x80775FA8
    FUN_80772884(); // bl 0x80772884
    r31 = r31 + 4; // 0x80775FB0
    r30 = r30 + 1; // 0x80775FB4
    r0 = *(0x10 + r29); // lbz @ 0x80775FB8
    if (<) goto 0x0x80775fa4;
    r0 = *(0x24 + r1); // lwz @ 0x80775FC4
    r31 = *(0x1c + r1); // lwz @ 0x80775FC8
    r30 = *(0x18 + r1); // lwz @ 0x80775FCC
    r29 = *(0x14 + r1); // lwz @ 0x80775FD0
    return;
}