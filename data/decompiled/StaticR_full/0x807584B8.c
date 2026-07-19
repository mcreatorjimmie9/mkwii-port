/* Function at 0x807584B8, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807584B8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807584CC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807584D4
    r29 = r3;
    if (==) goto 0x0x8075856c;
    /* lis r4, 0 */ // 0x807584E0
    r4 = r4 + 0; // 0x807584E4
    *(0 + r3) = r4; // stw @ 0x807584E8
    r3 = *(0xb8 + r3); // lwz @ 0x807584EC
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r31, 0 */ // 0x807584F4
    *(0xb8 + r29) = r31; // stw @ 0x807584F8
    r3 = *(0xbc + r29); // lwz @ 0x807584FC
    FUN_805E3430(); // bl 0x805E3430
    *(0xbc + r29) = r31; // stw @ 0x80758504
    r3 = *(0xc0 + r29); // lwz @ 0x80758508
    FUN_805E3430(); // bl 0x805E3430
    *(0xc0 + r29) = r31; // stw @ 0x80758510
}