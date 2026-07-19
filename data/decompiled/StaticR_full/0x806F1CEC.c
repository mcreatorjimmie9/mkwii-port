/* Function at 0x806F1CEC, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F1CEC(int r3, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x806F1CF4
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x806F1D04
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806F1D0C
    r29 = r3;
    r3 = *(0 + r7); // lwz @ 0x806F1D14
    FUN_806E4530(); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1D1C
    r3 = r29 + r0; // 0x806F1D20
    *(1 + r3) = r31; // stb @ 0x806F1D24
    *(3 + r3) = r30; // stb @ 0x806F1D28
    r31 = *(0x1c + r1); // lwz @ 0x806F1D2C
    r30 = *(0x18 + r1); // lwz @ 0x806F1D30
    r29 = *(0x14 + r1); // lwz @ 0x806F1D34
    r0 = *(0x24 + r1); // lwz @ 0x806F1D38
    return;
}