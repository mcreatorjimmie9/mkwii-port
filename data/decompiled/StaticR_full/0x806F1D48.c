/* Function at 0x806F1D48, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806F1D48(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x806F1D58
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806F1D64
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806F1D6C
    r28 = r3;
    r3 = *(0 + r31); // lwz @ 0x806F1D74
    FUN_806E44C0(); // bl 0x806E44C0
    if (==) goto 0x0x806f1da0;
    r3 = *(0 + r31); // lwz @ 0x806F1D84
    r4 = r29;
    FUN_806E4530(r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1D90
    r3 = r28 + r0; // 0x806F1D94
    r31 = *(1 + r3); // lbz @ 0x806F1D98
    /* b 0x806f1dc8 */ // 0x806F1D9C
    r3 = *(0 + r31); // lwz @ 0x806F1DA0
    r4 = r29;
    FUN_806E4438(r4); // bl 0x806E4438
    if (==) goto 0x0x806f1dc4;
    /* slwi r0, r29, 3 */ // 0x806F1DB4
    r3 = r28 + r0; // 0x806F1DB8
    r31 = *(0x11 + r3); // lbz @ 0x806F1DBC
    /* b 0x806f1dc8 */ // 0x806F1DC0
    /* li r31, 0x14 */ // 0x806F1DC4
    /* lis r3, 0 */ // 0x806F1DC8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x806F1DD0
    FUN_806E4530(r3, r4); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1DD8
    r3 = r28 + r0; // 0x806F1DDC
    *(1 + r3) = r31; // stb @ 0x806F1DE0
    *(3 + r3) = r30; // stb @ 0x806F1DE4
    r31 = *(0x1c + r1); // lwz @ 0x806F1DE8
    r30 = *(0x18 + r1); // lwz @ 0x806F1DEC
    r29 = *(0x14 + r1); // lwz @ 0x806F1DF0
    r28 = *(0x10 + r1); // lwz @ 0x806F1DF4
    r0 = *(0x24 + r1); // lwz @ 0x806F1DF8
    return;
}