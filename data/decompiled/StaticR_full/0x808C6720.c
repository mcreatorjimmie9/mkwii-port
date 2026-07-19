/* Function at 0x808C6720, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808C6720(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C6730
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C6738
    r30 = r3;
    if (==) goto 0x0x808c679c;
    /* lis r4, 0 */ // 0x808C6744
    /* li r5, 0x174 */ // 0x808C6748
    r4 = r4 + 0; // 0x808C674C
    /* li r6, 4 */ // 0x808C6750
    r3 = r3 + 0x6c4; // 0x808C6754
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    r3 = r30 + 0x430; // 0x808C675C
    /* li r4, -1 */ // 0x808C6760
    FUN_8066A1A0(r6, r3, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808c678c;
    /* addic. r3, r30, 0x54 */ // 0x808C6770
    if (==) goto 0x0x808c6780;
}