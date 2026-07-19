/* Function at 0x8081326C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8081326C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80813280
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80813288
    r29 = r3;
    if (==) goto 0x0x808132f0;
    if (==) goto 0x0x808132e0;
    /* lis r5, 0 */ // 0x80813298
    /* lis r4, 0 */ // 0x8081329C
    r5 = r5 + 0; // 0x808132A0
    *(0 + r3) = r5; // stw @ 0x808132A4
    r31 = *(0 + r4); // lwz @ 0x808132A8
    if (==) goto 0x0x808132d4;
    /* li r0, 0 */ // 0x808132B4
    *(0 + r4) = r0; // stw @ 0x808132B8
    if (==) goto 0x0x808132d4;
    r3 = r31;
    /* li r4, -1 */ // 0x808132C4
    FUN_80812FE4(r3, r4); // bl 0x80812FE4
    r3 = r31;
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    r3 = r29;
    /* li r4, 0 */ // 0x808132D8
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x808132f0;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808132F0
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x808132F8
    r29 = *(0x14 + r1); // lwz @ 0x808132FC
    r0 = *(0x24 + r1); // lwz @ 0x80813300
    return;
}