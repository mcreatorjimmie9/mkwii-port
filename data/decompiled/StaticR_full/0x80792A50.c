/* Function at 0x80792A50, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_80792A50(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80792A5C
    r31 = r3;
    r3 = r3 + 0x88; // 0x80792A64
    FUN_80790068(r3); // bl 0x80790068
    /* lis r4, 0 */ // 0x80792A6C
    r3 = r31;
    r4 = r4 + 0; // 0x80792A74
    FUN_805E3430(r3, r4, r3, r4); // bl 0x805E3430
}