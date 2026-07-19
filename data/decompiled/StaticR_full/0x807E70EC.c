/* Function at 0x807E70EC, size=168 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_807E70EC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x807E7104
    *(0x24 + r1) = r29; // stw @ 0x807E7108
    r29 = r5;
    *(0x20 + r1) = r28; // stw @ 0x807E7110
    r28 = r4;
    if (==) goto 0x0x807e7130;
    if (==) goto 0x0x807e7214;
    if (==) goto 0x0x807e7214;
    /* b 0x807e7248 */ // 0x807E712C
    r3 = r28;
    /* li r30, 0 */ // 0x807E7134
    FUN_8061DA88(r3); // bl 0x8061DA88
    r4 = r3;
    r5 = r31 + 0x30; // 0x807E7144
    FUN_805A4498(r4, r3, r5); // bl 0x805A4498
    /* lis r3, 0 */ // 0x807E714C
    /* lfs f0, 8(r1) */ // 0x807E7150
    /* lfs f3, 0(r3) */ // 0x807E7154
    /* fmuls f1, f0, f0 */ // 0x807E7158
    /* lfs f2, 0x10(r1) */ // 0x807E715C
    /* fmuls f0, f3, f3 */ // 0x807E7160
    /* stfs f3, 0xc(r1) */ // 0x807E7164
    /* fmuls f2, f2, f2 */ // 0x807E7168
    /* fadds f0, f1, f0 */ // 0x807E716C
    /* fadds f1, f2, f0 */ // 0x807E7170
    FUN_805E3430(); // bl 0x805E3430
    /* lis r3, 0 */ // 0x807E7178
    /* lfs f0, 0x3c(r31) */ // 0x807E717C
    /* lfs f2, 0(r3) */ // 0x807E7180
    /* fmuls f0, f2, f0 */ // 0x807E7184
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x807E7188
    if (>=) goto 0x0x807e7194;
    /* li r30, 1 */ // 0x807E7190
}