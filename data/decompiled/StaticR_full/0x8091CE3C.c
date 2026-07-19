/* Function at 0x8091CE3C, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8091CE3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8091CE50
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8091CE58
    r29 = r3;
    if (==) goto 0x0x8091cee8;
    /* lis r6, 0 */ // 0x8091CE64
    /* lis r4, 0 */ // 0x8091CE68
    r5 = *(0 + r6); // lbz @ 0x8091CE6C
    r4 = r4 + 0; // 0x8091CE70
    r0 = r5 + -1; // 0x8091CE74
    *(0 + r6) = r0; // stb @ 0x8091CE78
    r3 = *(0x1c + r3); // lwz @ 0x8091CE7C
    FUN_805E3430(r4); // bl 0x805E3430
    r3 = *(0x28 + r29); // lwz @ 0x8091CE84
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x2c + r29); // lwz @ 0x8091CE8C
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x30 + r29); // lwz @ 0x8091CE94
    FUN_805E3430(); // bl 0x805E3430
    /* li r31, 0 */ // 0x8091CE9C
    /* b 0x8091ceb8 */ // 0x8091CEA0
}