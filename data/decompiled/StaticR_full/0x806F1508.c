/* Function at 0x806F1508, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_806F1508(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1518
    *(0x18 + r1) = r30; // stw @ 0x806F151C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F1524
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F152C
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f154c;
    r3 = *(0 + r31); // lwz @ 0x806F153C
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* b 0x806f1558 */ // 0x806F1548
    r3 = *(0 + r31); // lwz @ 0x806F154C
    r4 = r30;
    FUN_806E4438(r4, r4); // bl 0x806E4438
    /* lis r31, 0 */ // 0x806F1558
    r4 = r30;
    r3 = *(0 + r31); // lwz @ 0x806F1560
    FUN_806E44C0(r4, r4); // bl 0x806E44C0
    if (==) goto 0x0x806f158c;
    r3 = *(0 + r31); // lwz @ 0x806F1570
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F157C
    r3 = r29 + r0; // 0x806F1580
    r31 = *(1 + r3); // lbz @ 0x806F1584
    /* b 0x806f15b4 */ // 0x806F1588
    r3 = *(0 + r31); // lwz @ 0x806F158C
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f15b0;
    /* slwi r0, r30, 3 */ // 0x806F15A0
    r3 = r29 + r0; // 0x806F15A4
    r31 = *(0x11 + r3); // lbz @ 0x806F15A8
    /* b 0x806f15b4 */ // 0x806F15AC
    /* li r31, 0x14 */ // 0x806F15B0
    /* lis r3, 0 */ // 0x806F15B4
    r4 = r30;
    r3 = *(0 + r3); // lwz @ 0x806F15BC
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r3, r3, 3 */ // 0x806F15C4
    /* li r0, 3 */ // 0x806F15C8
    r3 = r29 + r3; // 0x806F15CC
    *(1 + r3) = r31; // stb @ 0x806F15D0
    *(3 + r3) = r0; // stb @ 0x806F15D4
    r31 = *(0x1c + r1); // lwz @ 0x806F15D8
    r30 = *(0x18 + r1); // lwz @ 0x806F15DC
    r29 = *(0x14 + r1); // lwz @ 0x806F15E0
    r0 = *(0x24 + r1); // lwz @ 0x806F15E4
    return;
}