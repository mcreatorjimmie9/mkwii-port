/* Function at 0x806F208C, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806F208C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F209C
    *(0x18 + r1) = r30; // stw @ 0x806F20A0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F20A8
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F20B0
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f20dc;
    r3 = *(0 + r31); // lwz @ 0x806F20C0
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F20CC
    r3 = r29 + r0; // 0x806F20D0
    r3 = *(3 + r3); // lbz @ 0x806F20D4
    /* b 0x806f2104 */ // 0x806F20D8
    r3 = *(0 + r31); // lwz @ 0x806F20DC
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2100;
    /* slwi r0, r30, 3 */ // 0x806F20F0
    r3 = r29 + r0; // 0x806F20F4
    r3 = *(0x13 + r3); // lbz @ 0x806F20F8
    /* b 0x806f2104 */ // 0x806F20FC
    /* li r3, 0 */ // 0x806F2100
    r0 = *(0x24 + r1); // lwz @ 0x806F2104
    r31 = *(0x1c + r1); // lwz @ 0x806F2108
    r30 = *(0x18 + r1); // lwz @ 0x806F210C
    r29 = *(0x14 + r1); // lwz @ 0x806F2110
    return;
}