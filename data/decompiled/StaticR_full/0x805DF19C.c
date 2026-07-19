/* Function at 0x805DF19C, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805DF19C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r4, 0 */ // 0x805DF1A4
    *(0x24 + r1) = r0; // stw @ 0x805DF1A8
    r5 = r4 + 0; // 0x805DF1AC
    /* stmw r27, 0xc(r1) */ // 0x805DF1B0
    r0 = *(0xa0 + r5); // lwz @ 0x805DF1B4
    if (==) goto 0x0x805df3c4;
    r0 = *(0xa4 + r5); // lbz @ 0x805DF1C0
    if (!=) goto 0x0x805df3c4;
    r0 = *(0xb0 + r5); // lwz @ 0x805DF1CC
    if (==) goto 0x0x805df1e8;
    r0 = *(0x58 + r5); // lwz @ 0x805DF1D8
    *(0xb4 + r5) = r3; // stw @ 0x805DF1DC
    r31 = r3 + r0; // 0x805DF1E0
    /* b 0x805df2b0 */ // 0x805DF1E4
    *(0x100 + r5) = r3; // stw @ 0x805DF1E8
    r4 = *(0x44 + r5); // lwz @ 0x805DF1EC
    r0 = r4 + 0x1f; // 0x805DF1F0
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r3 + r0; // 0x805DF1F8
    *(0x10c + r5) = r31; // stw @ 0x805DF1FC
    r3 = *(0x44 + r5); // lwz @ 0x805DF200
    r0 = r3 + 0x1f; // 0x805DF204
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF20C
    *(0x118 + r5) = r31; // stw @ 0x805DF210
    r3 = *(0x44 + r5); // lwz @ 0x805DF214
    r0 = r3 + 0x1f; // 0x805DF218
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF220
    *(0x124 + r5) = r31; // stw @ 0x805DF224
    r3 = *(0x44 + r5); // lwz @ 0x805DF228
    r0 = r3 + 0x1f; // 0x805DF22C
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF234
    *(0x130 + r5) = r31; // stw @ 0x805DF238
    r3 = *(0x44 + r5); // lwz @ 0x805DF23C
    r0 = r3 + 0x1f; // 0x805DF240
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF248
    *(0x13c + r5) = r31; // stw @ 0x805DF24C
    r4 = *(0x44 + r5); // lwz @ 0x805DF250
    r0 = r4 + 0x1f; // 0x805DF254
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF25C
    *(0x148 + r5) = r31; // stw @ 0x805DF260
    r3 = *(0x44 + r5); // lwz @ 0x805DF264
    r0 = r3 + 0x1f; // 0x805DF268
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF270
    *(0x154 + r5) = r31; // stw @ 0x805DF274
    r3 = *(0x44 + r5); // lwz @ 0x805DF278
    r0 = r3 + 0x1f; // 0x805DF27C
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF284
    *(0x160 + r5) = r31; // stw @ 0x805DF288
    r3 = *(0x44 + r5); // lwz @ 0x805DF28C
    r0 = r3 + 0x1f; // 0x805DF290
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF298
    *(0x16c + r5) = r31; // stw @ 0x805DF29C
    r3 = *(0x44 + r5); // lwz @ 0x805DF2A0
    r0 = r3 + 0x1f; // 0x805DF2A4
    r0 = r0 rlwinm 0; // rlwinm
    r31 = r31 + r0; // 0x805DF2AC
    /* lis r30, 0 */ // 0x805DF2B0
    /* li r29, 0 */ // 0x805DF2B4
    r30 = r30 + 0; // 0x805DF2B8
    r3 = *(0x80 + r30); // lwz @ 0x805DF2BC
    r0 = *(0x84 + r30); // lwz @ 0x805DF2C0
    r4 = r3 * r0; // 0x805DF2C4
    /* srwi r3, r4, 2 */ // 0x805DF2C8
    r4 = r4 + 0x1f; // 0x805DF2CC
    r0 = r3 + 0x1f; // 0x805DF2D0
    r28 = r4 rlwinm 0; // rlwinm
    r27 = r0 rlwinm 0; // rlwinm
    *(0x178 + r30) = r31; // stw @ 0x805DF2DC
    r3 = r31;
    r4 = r28;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r31 = r31 + r28; // 0x805DF2EC
    *(0x17c + r30) = r31; // stw @ 0x805DF2F0
    r3 = r31;
    r4 = r27;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    r31 = r31 + r27; // 0x805DF300
}