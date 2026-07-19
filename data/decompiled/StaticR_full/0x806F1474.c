/* Function at 0x806F1474, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_806F1474(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1484
    *(0x18 + r1) = r30; // stw @ 0x806F1488
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F1490
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F1498
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f14b8;
    r3 = *(0 + r31); // lwz @ 0x806F14A8
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* b 0x806f14c4 */ // 0x806F14B4
    r3 = *(0 + r31); // lwz @ 0x806F14B8
    r4 = r30;
    FUN_806E4438(r4, r4); // bl 0x806E4438
    /* lis r3, 0 */ // 0x806F14C4
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F14CC
    FUN_806E4530(r4, r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F14D4
    /* li r4, 0x14 */ // 0x806F14D8
    r3 = r29 + r0; // 0x806F14DC
    *(1 + r3) = r4; // stb @ 0x806F14E0
    /* li r0, 0 */ // 0x806F14E4
    *(3 + r3) = r0; // stb @ 0x806F14E8
    r31 = *(0x1c + r1); // lwz @ 0x806F14EC
    r30 = *(0x18 + r1); // lwz @ 0x806F14F0
    r29 = *(0x14 + r1); // lwz @ 0x806F14F4
    r0 = *(0x24 + r1); // lwz @ 0x806F14F8
    return;
}