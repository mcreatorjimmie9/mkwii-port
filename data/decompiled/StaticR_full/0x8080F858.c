/* Function at 0x8080F858, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080F858(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8080F860
    *(0x14 + r1) = r0; // stw @ 0x8080F864
    *(0xc + r1) = r31; // stw @ 0x8080F868
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8080F874
    r3 = r31;
    r4 = r4 + 0; // 0x8080F87C
    *(0 + r31) = r4; // stw @ 0x8080F880
    r31 = *(0xc + r1); // lwz @ 0x8080F884
    r0 = *(0x14 + r1); // lwz @ 0x8080F888
    return;
}