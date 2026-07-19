/* Function at 0x8080A82C, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8080A82C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x8080A834
    *(0x14 + r1) = r0; // stw @ 0x8080A838
    *(0xc + r1) = r31; // stw @ 0x8080A83C
    r31 = r3;
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x8080A848
    r3 = r31;
    r4 = r4 + 0; // 0x8080A850
    *(0 + r31) = r4; // stw @ 0x8080A854
    r31 = *(0xc + r1); // lwz @ 0x8080A858
    r0 = *(0x14 + r1); // lwz @ 0x8080A85C
    return;
}