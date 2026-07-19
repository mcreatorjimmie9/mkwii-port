/* Function at 0x8081E05C, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8081E05C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x8081E064
    *(0xc + r1) = r31; // stw @ 0x8081E06C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8081E074
    r30 = r3;
    r0 = *(4 + r4); // lwz @ 0x8081E07C
    r5 = *(0 + r5); // lwz @ 0x8081E080
    /* mulli r0, r0, 0x24 */ // 0x8081E084
    r3 = r5 + r0; // 0x8081E088
    r3 = r3 + 0x48; // 0x8081E08C
    FUN_80821284(r3); // bl 0x80821284
    r3 = *(0xc + r30); // lwz @ 0x8081E094
    r4 = r31;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r31); // lwz @ 0x8081E0A0
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x8081E0A8
    r31 = *(0xc + r1); // lwz @ 0x8081E0AC
    r30 = *(8 + r1); // lwz @ 0x8081E0B0
    r0 = *(0x14 + r1); // lwz @ 0x8081E0B4
    return;
}