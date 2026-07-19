/* Function at 0x80717C1C, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80717C1C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80717C30
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80717C38
    r29 = r3;
    if (==) goto 0x0x80717ca0;
    /* lis r4, 0 */ // 0x80717C44
    /* lis r31, 0 */ // 0x80717C48
    r4 = r4 + 0; // 0x80717C4C
    *(0 + r3) = r4; // stw @ 0x80717C50
    r3 = *(0xac + r3); // lwz @ 0x80717C54
    r4 = r31 + 0; // 0x80717C58
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb0 + r29); // lwz @ 0x80717C60
    r4 = r31 + 0; // 0x80717C64
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb4 + r29); // lwz @ 0x80717C6C
    r4 = r31 + 0; // 0x80717C70
    FUN_805E3430(r4, r4); // bl 0x805E3430
    r3 = *(0xb8 + r29); // lwz @ 0x80717C78
    r4 = r31 + 0; // 0x80717C7C
}