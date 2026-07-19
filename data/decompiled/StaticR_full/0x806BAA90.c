/* Function at 0x806BAA90, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806BAA90(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806BAAA0
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806BAAA8
    r30 = r3;
    if (==) goto 0x0x806bab24;
    /* lis r4, 0 */ // 0x806BAAB4
    r4 = r4 + 0; // 0x806BAAB8
    *(0 + r3) = r4; // stw @ 0x806BAABC
    r3 = *(0x318 + r3); // lwz @ 0x806BAAC0
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0x31c + r30); // lwz @ 0x806BAAC8
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x320 + r30); // lwz @ 0x806BAAD0
    FUN_805E3430(); // bl 0x805E3430
    r3 = r30 + 0x4b8; // 0x806BAAD8
    /* li r4, -1 */ // 0x806BAADC
    FUN_806C9C78(r3, r4); // bl 0x806C9C78
}