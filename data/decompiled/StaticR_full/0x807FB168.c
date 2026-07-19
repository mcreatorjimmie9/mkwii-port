/* Function at 0x807FB168, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807FB168(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807FB170
    *(0x14 + r1) = r0; // stw @ 0x807FB174
    r5 = r5 + 0; // 0x807FB178
    r5 = r5 + 0x34; // 0x807FB17C
    *(0xc + r1) = r31; // stw @ 0x807FB180
    r31 = r3;
    FUN_8089F578(r5, r5); // bl 0x8089F578
    /* lis r4, 0 */ // 0x807FB18C
    r3 = r31;
    r4 = r4 + 0; // 0x807FB194
    *(0 + r31) = r4; // stw @ 0x807FB198
    r31 = *(0xc + r1); // lwz @ 0x807FB19C
    r0 = *(0x14 + r1); // lwz @ 0x807FB1A0
    return;
}