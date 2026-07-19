/* Function at 0x8083FF74, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8083FF74(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8083FF88
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8083FF90
    r29 = r3;
    if (==) goto 0x0x8083fff8;
    if (==) goto 0x0x8083ffe8;
    /* lis r5, 0 */ // 0x8083FFA0
    /* lis r4, 0 */ // 0x8083FFA4
    r5 = r5 + 0; // 0x8083FFA8
    *(0 + r3) = r5; // stw @ 0x8083FFAC
    r31 = *(0 + r4); // lwz @ 0x8083FFB0
    if (==) goto 0x0x8083ffdc;
    /* li r0, 0 */ // 0x8083FFBC
    *(0 + r4) = r0; // stw @ 0x8083FFC0
    if (==) goto 0x0x8083ffdc;
    r3 = r31;
    /* li r4, -1 */ // 0x8083FFCC
    FUN_8083FC90(r3, r4); // bl 0x8083FC90
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x8083FFE0
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x8083fff8;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x8083FFF8
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x80840000
    r29 = *(0x14 + r1); // lwz @ 0x80840004
    r0 = *(0x24 + r1); // lwz @ 0x80840008
    return;
}