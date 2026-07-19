/* Function at 0x806F2290, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806F2290(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F22A0
    *(0x18 + r1) = r30; // stw @ 0x806F22A4
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F22AC
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F22B4
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f22e0;
    r3 = *(0 + r31); // lwz @ 0x806F22C4
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F22D0
    r3 = r29 + r0; // 0x806F22D4
    r3 = *(3 + r3); // lbz @ 0x806F22D8
    /* b 0x806f2308 */ // 0x806F22DC
    r3 = *(0 + r31); // lwz @ 0x806F22E0
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f2304;
    /* slwi r0, r30, 3 */ // 0x806F22F4
    r3 = r29 + r0; // 0x806F22F8
    r3 = *(0x13 + r3); // lbz @ 0x806F22FC
    /* b 0x806f2308 */ // 0x806F2300
    /* li r3, 0 */ // 0x806F2304
    r0 = r3 + -1; // 0x806F2308
    r31 = *(0x1c + r1); // lwz @ 0x806F230C
    /* cntlzw r0, r0 */ // 0x806F2310
    r30 = *(0x18 + r1); // lwz @ 0x806F2314
    /* srwi r3, r0, 5 */ // 0x806F2318
    r29 = *(0x14 + r1); // lwz @ 0x806F231C
    r0 = *(0x24 + r1); // lwz @ 0x806F2320
    return;
}