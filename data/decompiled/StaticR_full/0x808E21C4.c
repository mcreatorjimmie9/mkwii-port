/* Function at 0x808E21C4, size=232 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_808E21C4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* mulli r0, r4, 0xc */ // 0x808E21D0
    /* stmw r27, 0xc(r1) */ // 0x808E21D4
    r30 = r4 rlwinm 2; // rlwinm
    r31 = r3 + r0; // 0x808E21DC
    r28 = r5;
    r27 = r3;
    /* li r4, 5 */ // 0x808E21E8
    r6 = *(0x48 + r3); // lwz @ 0x808E21EC
    r5 = *(0x18 + r31); // lwz @ 0x808E21F0
    /* lwzx r3, r6, r30 */ // 0x808E21F4
    r29 = *(4 + r5); // lwz @ 0x808E21F8
    r6 = *(0x10 + r31); // lwz @ 0x808E21FC
    r7 = *(0x4c + r3); // lwz @ 0x808E2200
    r5 = r29;
    r6 = r6 + -0x18; // 0x808E2208
    FUN_8085FDE0(r5, r6); // bl 0x8085FDE0
    r3 = *(0x48 + r27); // lwz @ 0x808E2210
    r5 = r29;
    r6 = *(0x10 + r31); // lwz @ 0x808E2218
    r7 = r28;
    /* lwzx r3, r3, r30 */ // 0x808E2220
    /* li r4, 5 */ // 0x808E2224
    r6 = r6 + -0x18; // 0x808E2228
    FUN_8085FDC8(r7, r4, r6); // bl 0x8085FDC8
    r12 = *(0 + r29); // lwz @ 0x808E2230
    r3 = r29;
    /* li r4, 0 */ // 0x808E2238
    r12 = *(0xc + r12); // lwz @ 0x808E223C
    /* mtctr r12 */ // 0x808E2240
    /* bctrl  */ // 0x808E2244
    r3 = *(0x48 + r27); // lwz @ 0x808E2248
    /* li r4, 0 */ // 0x808E224C
    /* lwzx r3, r3, r30 */ // 0x808E2250
    r12 = *(0 + r3); // lwz @ 0x808E2254
    r12 = *(0xc + r12); // lwz @ 0x808E2258
    /* mtctr r12 */ // 0x808E225C
    /* bctrl  */ // 0x808E2260
    r12 = *(0 + r29); // lwz @ 0x808E2264
    r3 = r29;
    /* li r4, 1 */ // 0x808E226C
    r12 = *(0xc + r12); // lwz @ 0x808E2270
    /* mtctr r12 */ // 0x808E2274
    /* bctrl  */ // 0x808E2278
    r3 = *(0x48 + r27); // lwz @ 0x808E227C
    /* li r4, 1 */ // 0x808E2280
    /* lwzx r3, r3, r30 */ // 0x808E2284
    r12 = *(0 + r3); // lwz @ 0x808E2288
    r12 = *(0xc + r12); // lwz @ 0x808E228C
    /* mtctr r12 */ // 0x808E2290
    /* bctrl  */ // 0x808E2294
    r0 = *(0x24 + r1); // lwz @ 0x808E229C
    return;
}