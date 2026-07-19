/* Function at 0x808C7474, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808C7474(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 1 */ // 0x808C7484
    *(0x18 + r1) = r30; // stw @ 0x808C7488
    /* li r30, 0 */ // 0x808C748C
    *(0x14 + r1) = r29; // stw @ 0x808C7490
    r29 = r3;
    r3 = *(0x6bc + r29); // lwz @ 0x808C7498
    r0 = r31 << r30; // slw
    /* and. r0, r3, r0 */ // 0x808C74A0
    if (==) goto 0x0x808c74b8;
    r3 = *(0x48 + r29); // lwz @ 0x808C74A8
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x808C74B0
    FUN_80649F40(r4); // bl 0x80649F40
    r30 = r30 + 1; // 0x808C74B8
    if (<) goto 0x0x808c7498;
    r0 = *(0x24 + r1); // lwz @ 0x808C74C4
    r31 = *(0x1c + r1); // lwz @ 0x808C74C8
    r30 = *(0x18 + r1); // lwz @ 0x808C74CC
    r29 = *(0x14 + r1); // lwz @ 0x808C74D0
    return;
}