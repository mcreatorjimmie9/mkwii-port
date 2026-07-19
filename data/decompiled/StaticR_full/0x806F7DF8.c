/* Function at 0x806F7DF8, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F7DF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x806F7E0C
    *(0x14 + r1) = r29; // stw @ 0x806F7E10
    r29 = r3;
    r6 = *(0x41f0 + r3); // lwz @ 0x806F7E18
    r0 = *(2 + r6); // lbz @ 0x806F7E1C
    if (==) goto 0x0x806f7e30;
    /* li r3, 0 */ // 0x806F7E28
    /* b 0x806f7f10 */ // 0x806F7E2C
    /* lis r4, 1 */ // 0x806F7E30
    /* lis r3, 0 */ // 0x806F7E34
    r0 = r4 + -0x7340; // 0x806F7E38
    r6 = *(0 + r3); // lwz @ 0x806F7E3C
    r0 = r5 * r0; // 0x806F7E40
    r3 = *(0x14 + r6); // lwz @ 0x806F7E44
    r3 = r3 + r0; // 0x806F7E48
    r3 = *(8 + r3); // lwz @ 0x806F7E4C
    /* addis r0, r3, -0x524b */ // 0x806F7E50
    if (!=) goto 0x0x806f7f0c;
    r0 = r4 + -0x6c10; // 0x806F7E5C
    r0 = r5 * r0; // 0x806F7E60
    r3 = r6 + r0; // 0x806F7E64
    r30 = r3 + 0x38; // 0x806F7E68
    /* addis r3, r30, 1 */ // 0x806F7E6C
    r3 = r3 + -0x7048; // 0x806F7E70
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f7f04;
    r4 = *(0x41f0 + r29); // lwz @ 0x806F7E80
    /* addis r3, r30, 1 */ // 0x806F7E84
    /* li r0, 4 */ // 0x806F7E88
    r3 = *(-0x702c + r3); // lwz @ 0x806F7E8C
    r6 = r4;
    /* li r5, 0 */ // 0x806F7E94
}