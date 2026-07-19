/* Function at 0x807DF228, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807DF228(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807DF230
    *(0x14 + r1) = r0; // stw @ 0x807DF234
    *(0xc + r1) = r31; // stw @ 0x807DF238
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x807DF240
    r4 = r31 + 0x18; // 0x807DF244
    FUN_805D12B8(r4); // bl 0x805D12B8
    /* li r0, 0 */ // 0x807DF24C
    *(0x32 + r31) = r0; // stb @ 0x807DF250
    r31 = *(0xc + r1); // lwz @ 0x807DF254
    r0 = *(0x14 + r1); // lwz @ 0x807DF258
    return;
}