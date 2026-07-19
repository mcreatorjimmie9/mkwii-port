/* Function at 0x8081E1F8, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8081E1F8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x8081E200
    *(0xc + r1) = r31; // stw @ 0x8081E208
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x8081E210
    r30 = r3;
    r4 = *(0x50 + r3); // lwz @ 0x8081E218
    r0 = r4 + -1; // 0x8081E21C
    *(0x50 + r3) = r0; // stw @ 0x8081E220
    r4 = r31;
    r0 = *(4 + r5); // lwz @ 0x8081E228
    r3 = *(0 + r6); // lwz @ 0x8081E22C
    /* mulli r0, r0, 0x24 */ // 0x8081E230
    r3 = r3 + r0; // 0x8081E234
    r3 = r3 + 0x48; // 0x8081E238
    FUN_80821284(r3); // bl 0x80821284
    r3 = *(0xc + r30); // lwz @ 0x8081E240
    r4 = r31;
    FUN_80823984(r3, r4); // bl 0x80823984
    r0 = *(0x78 + r31); // lwz @ 0x8081E24C
    r0 = r0 rlwinm 0; // rlwinm
    *(0x78 + r31) = r0; // stw @ 0x8081E254
    r31 = *(0xc + r1); // lwz @ 0x8081E258
    r30 = *(8 + r1); // lwz @ 0x8081E25C
    r0 = *(0x14 + r1); // lwz @ 0x8081E260
    return;
}