/* Function at 0x806F1E08, size=92 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F1E08(int r3, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x806F1E10
    r31 = r6;
    *(0x18 + r1) = r30; // stw @ 0x806F1E20
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x806F1E28
    r29 = r3;
    r3 = *(0 + r7); // lwz @ 0x806F1E30
    FUN_806E4530(); // bl 0x806E4530
    /* slwi r0, r3, 3 */ // 0x806F1E38
    r3 = r29 + r0; // 0x806F1E3C
    *(2 + r3) = r31; // stb @ 0x806F1E40
    *(4 + r3) = r30; // stb @ 0x806F1E44
    r31 = *(0x1c + r1); // lwz @ 0x806F1E48
    r30 = *(0x18 + r1); // lwz @ 0x806F1E4C
    r29 = *(0x14 + r1); // lwz @ 0x806F1E50
    r0 = *(0x24 + r1); // lwz @ 0x806F1E54
    return;
}