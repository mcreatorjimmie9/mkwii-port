/* Function at 0x806F1F44, size=148 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806F1F44(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806F1F54
    *(0x18 + r1) = r30; // stw @ 0x806F1F58
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F1F60
    r29 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F1F68
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f1f94;
    r3 = *(0 + r31); // lwz @ 0x806F1F78
    r4 = r30;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1F84
    r3 = r29 + r0; // 0x806F1F88
    r3 = *(1 + r3); // lbz @ 0x806F1F8C
    /* b 0x806f1fbc */ // 0x806F1F90
    r3 = *(0 + r31); // lwz @ 0x806F1F94
    r4 = r30;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1fb8;
    /* slwi r0, r30, 3 */ // 0x806F1FA8
    r3 = r29 + r0; // 0x806F1FAC
    r3 = *(0x11 + r3); // lbz @ 0x806F1FB0
    /* b 0x806f1fbc */ // 0x806F1FB4
    /* li r3, 0x14 */ // 0x806F1FB8
    r0 = *(0x24 + r1); // lwz @ 0x806F1FBC
    r31 = *(0x1c + r1); // lwz @ 0x806F1FC0
    r30 = *(0x18 + r1); // lwz @ 0x806F1FC4
    r29 = *(0x14 + r1); // lwz @ 0x806F1FC8
    return;
}