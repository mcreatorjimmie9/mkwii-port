/* Function at 0x80787780, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_80787780(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r3, 0 */ // 0x80787788
    *(0x14 + r1) = r29; // stw @ 0x80787798
    *(0x10 + r1) = r28; // stw @ 0x8078779C
    r29 = *(0 + r3); // lwz @ 0x807877A0
    if (==) goto 0x0x807878dc;
    /* li r0, 0 */ // 0x807877AC
    *(0 + r3) = r0; // stw @ 0x807877B0
    if (==) goto 0x0x807878dc;
    /* li r31, 0 */ // 0x807877B8
    /* li r30, 0 */ // 0x807877BC
    r3 = r29 + r30; // 0x807877C0
    r3 = *(0x14 + r3); // lwz @ 0x807877C4
    if (==) goto 0x0x807877dc;
    if (==) goto 0x0x807877dc;
    /* li r4, 0 */ // 0x807877D4
    FUN_805E3430(r4); // bl 0x805E3430
    r31 = r31 + 1; // 0x807877DC
    r30 = r30 + 4; // 0x807877E0
    if (<) goto 0x0x807877c0;
    /* lis r4, 0 */ // 0x807877EC
    r3 = r29 + 0x14; // 0x807877F0
    r4 = r4 + 0; // 0x807877F4
    /* li r5, 4 */ // 0x807877F8
    /* li r6, 2 */ // 0x807877FC
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x807878d4;
    /* lis r4, 0 */ // 0x8078780C
    /* lis r3, 0 */ // 0x80787810
    r4 = r4 + 0; // 0x80787814
    *(0 + r29) = r4; // stw @ 0x80787818
    r28 = *(0 + r3); // lwz @ 0x8078781C
}