/* Function at 0x805CD1E4, size=300 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805CD1E4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x805CD1EC
    /* li r8, 0 */ // 0x805CD1F0
    *(0x24 + r1) = r0; // stw @ 0x805CD1F4
    /* stmw r27, 0xc(r1) */ // 0x805CD1F8
    r29 = r3;
    /* li r31, 0 */ // 0x805CD200
    r4 = *(0 + r4); // lwz @ 0x805CD204
    r6 = *(0x24 + r4); // lbz @ 0x805CD208
    r7 = r4 + 0x28; // 0x805CD20C
    /* b 0x805cd24c */ // 0x805CD210
    /* clrlwi r5, r8, 0x18 */ // 0x805CD214
    /* mulli r0, r5, 0xf0 */ // 0x805CD218
    r4 = r7 + r0; // 0x805CD21C
    r0 = *(0x10 + r4); // lwz @ 0x805CD220
    if (==) goto 0x0x805cd248;
    /* mulli r0, r5, 0x14 */ // 0x805CD22C
    r5 = r3 + r0; // 0x805CD230
    r4 = *(0x16 + r5); // lhz @ 0x805CD234
    r0 = *(0x18 + r5); // lhz @ 0x805CD238
    /* andc r0, r4, r0 */ // 0x805CD23C
    /* clrlwi r0, r0, 0x10 */ // 0x805CD240
    r31 = r31 | r0; // 0x805CD244
    r8 = r8 + 1; // 0x805CD248
    /* clrlwi r0, r8, 0x18 */ // 0x805CD24C
    if (<) goto 0x0x805cd214;
    /* li r30, 0 */ // 0x805CD258
    /* li r27, 1 */ // 0x805CD25C
    /* lis r28, 0 */ // 0x805CD260
    /* b 0x805cd2e8 */ // 0x805CD264
    r3 = *(4 + r29); // lwz @ 0x805CD268
    r0 = r30 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CD270
    /* lwzx r3, r3, r0 */ // 0x805CD274
    r0 = *(0x38 + r3); // lwz @ 0x805CD278
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CD27C
    if (!=) goto 0x0x805cd2e4;
    /* clrlwi r4, r30, 0x18 */ // 0x805CD284
    /* clrlwi r5, r31, 0x10 */ // 0x805CD288
    r0 = r27 << r4; // slw
    /* and. r0, r5, r0 */ // 0x805CD290
    if (==) goto 0x0x805cd2e4;
    r0 = *(0x10b + r29); // lbz @ 0x805CD298
    if (!=) goto 0x0x805cd2cc;
    /* mulli r0, r4, 0x14 */ // 0x805CD2A4
    r4 = r29 + r0; // 0x805CD2A8
    r0 = *(0x12 + r4); // lbz @ 0x805CD2AC
    if (==) goto 0x0x805cd2e4;
    r4 = r4 + 8; // 0x805CD2B8
    /* li r5, 0 */ // 0x805CD2BC
    /* li r6, 5 */ // 0x805CD2C0
    FUN_805C3D4C(r4, r5, r6); // bl 0x805C3D4C
    /* b 0x805cd2e4 */ // 0x805CD2C8
    /* mulli r0, r4, 0x14 */ // 0x805CD2CC
    /* li r5, 0 */ // 0x805CD2D0
    /* li r6, 5 */ // 0x805CD2D4
    r4 = r29 + r0; // 0x805CD2D8
    r4 = r4 + 8; // 0x805CD2DC
    FUN_805C3D4C(r5, r6, r4); // bl 0x805C3D4C
    r30 = r30 + 1; // 0x805CD2E4
    r3 = *(0 + r28); // lwz @ 0x805CD2E8
    /* clrlwi r4, r30, 0x18 */ // 0x805CD2EC
    r0 = *(0x24 + r3); // lbz @ 0x805CD2F0
    if (<) goto 0x0x805cd268;
    r0 = *(0x24 + r1); // lwz @ 0x805CD300
    return;
}