/* Function at 0x805B3EA8, size=92 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_805B3EA8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x805B3EB8
    *(8 + r1) = r30; // stw @ 0x805B3EBC
    r30 = r3;
    /* clrlwi r0, r31, 0x18 */ // 0x805B3EC4
    r4 = r30 + 0x1690; // 0x805B3EC8
    /* mulli r0, r0, 0xec */ // 0x805B3ECC
    /* li r5, 0 */ // 0x805B3ED0
    r3 = r30 + r0; // 0x805B3ED4
    r3 = r3 + 4; // 0x805B3ED8
    FUN_805B1180(r4, r5, r3); // bl 0x805B1180
    r31 = r31 + 1; // 0x805B3EE0
    if (<) goto 0x0x805b3ec4;
    r0 = *(0x14 + r1); // lwz @ 0x805B3EEC
    r31 = *(0xc + r1); // lwz @ 0x805B3EF0
    r30 = *(8 + r1); // lwz @ 0x805B3EF4
    return;
}