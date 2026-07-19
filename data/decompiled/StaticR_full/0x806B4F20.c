/* Function at 0x806B4F20, size=124 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806B4F20(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x806B4F28
    *(0x1c + r1) = r31; // stw @ 0x806B4F30
    *(0x18 + r1) = r30; // stw @ 0x806B4F34
    r30 = r5;
    r3 = *(0 + r3); // lwz @ 0x806B4F3C
    r31 = *(0x98 + r3); // lwz @ 0x806B4F40
    if (!=) goto 0x0x806b4f54;
    /* li r3, 0 */ // 0x806B4F4C
    /* b 0x806b4fdc */ // 0x806B4F50
    /* lis r6, 0 */ // 0x806B4F54
    r3 = r31;
    r6 = r6 + 0; // 0x806B4F5C
    r0 = *(1 + r6); // lbz @ 0x806B4F60
    *(9 + r1) = r0; // stb @ 0x806B4F64
    r5 = *(0 + r6); // lbz @ 0x806B4F68
    r0 = *(2 + r6); // lbz @ 0x806B4F6C
    *(9 + r1) = r4; // stb @ 0x806B4F70
    *(8 + r1) = r5; // stb @ 0x806B4F78
    *(0xa + r1) = r0; // stb @ 0x806B4F7C
    FUN_805E3430(r4); // bl 0x805E3430
    if (!=) goto 0x0x806b4f94;
    /* li r3, 0 */ // 0x806B4F8C
    /* b 0x806b4fdc */ // 0x806B4F90
    if (==) goto 0x0x806b4fa8;
}