/* Function at 0x806688C8, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806688C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806688D8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806688E0
    r30 = r3;
    if (==) goto 0x0x80668914;
    /* lis r4, 0 */ // 0x806688EC
    /* li r5, 0x34 */ // 0x806688F0
    r4 = r4 + 0; // 0x806688F4
    /* li r6, 5 */ // 0x806688F8
    r3 = r3 + 0x40; // 0x806688FC
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x80668914;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x80668918
    r30 = *(8 + r1); // lwz @ 0x8066891C
}