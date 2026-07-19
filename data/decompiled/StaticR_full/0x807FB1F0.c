/* Function at 0x807FB1F0, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FB1F0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807FB1F8
    *(0x14 + r1) = r0; // stw @ 0x807FB1FC
    r5 = r5 + 0; // 0x807FB200
    r5 = r5 + 0x3f; // 0x807FB204
    *(0xc + r1) = r31; // stw @ 0x807FB208
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807FB214
    r3 = r31;
    r4 = r4 + 0; // 0x807FB21C
    *(0 + r31) = r4; // stw @ 0x807FB220
    r31 = *(0xc + r1); // lwz @ 0x807FB224
    r0 = *(0x14 + r1); // lwz @ 0x807FB228
    return;
}