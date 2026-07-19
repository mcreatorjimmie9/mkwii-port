/* Function at 0x805D3170, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_805D3170(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x805D3184
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805D318C
    r29 = r3;
    if (==) goto 0x0x805d322c;
    /* lis r4, 0 */ // 0x805D3198
    r4 = r4 + 0; // 0x805D319C
    *(0x10 + r3) = r4; // stw @ 0x805D31A0
    r3 = *(0x1c + r3); // lwz @ 0x805D31A4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* li r31, 0 */ // 0x805D31AC
    /* lis r4, 0 */ // 0x805D31B0
    /* lis r5, 1 */ // 0x805D31B4
    *(0x1c + r29) = r31; // stw @ 0x805D31B8
    r3 = r29 + 0x38; // 0x805D31BC
    r4 = r4 + 0; // 0x805D31C0
    r5 = r5 + -0x6c10; // 0x805D31C4
    /* li r6, 4 */ // 0x805D31C8
}