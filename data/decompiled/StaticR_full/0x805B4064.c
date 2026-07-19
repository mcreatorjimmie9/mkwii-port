/* Function at 0x805B4064, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_805B4064(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 3 */ // 0x805B4074
    *(0xc + r1) = r31; // stw @ 0x805B4078
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B4080
    r30 = r3;
    if (<=) goto 0x0x805b409c;
    if (!=) goto 0x0x805b40a0;
    /* li r0, 1 */ // 0x805B4094
    /* b 0x805b40a0 */ // 0x805B4098
    /* li r0, 0 */ // 0x805B409C
    if (==) goto 0x0x805b40b4;
    if (==) goto 0x0x805b40d8;
    /* b 0x805b40f8 */ // 0x805B40B0
    /* mulli r4, r4, 0xec */ // 0x805B40B4
    /* li r5, 0 */ // 0x805B40B8
    r3 = r3 + r4; // 0x805B40BC
    /* mulli r0, r6, 0xb0 */ // 0x805B40C0
    r3 = r3 + 4; // 0x805B40C4
    r4 = r30 + r0; // 0x805B40C8
    r4 = r4 + 0x3ba0; // 0x805B40CC
    FUN_805B1180(r3, r4); // bl 0x805B1180
    /* b 0x805b40f8 */ // 0x805B40D4
    /* mulli r4, r4, 0xec */ // 0x805B40D8
    /* li r5, 0 */ // 0x805B40DC
    r3 = r3 + r4; // 0x805B40E0
    /* mulli r0, r6, 0x920 */ // 0x805B40E4
    r3 = r3 + 4; // 0x805B40E8
    r4 = r30 + r0; // 0x805B40EC
    r4 = r4 + 0x1720; // 0x805B40F0
    FUN_805B1180(r3, r4); // bl 0x805B1180
    /* mulli r0, r31, 0xec */ // 0x805B40F8
    r4 = r30 + r0; // 0x805B40FC
    r0 = *(8 + r4); // lwz @ 0x805B4100
    r3 = r4 + 0xcc; // 0x805B4104
    *(0x10 + r4) = r0; // stw @ 0x805B4108
    r4 = *(8 + r4); // lwz @ 0x805B410C
    FUN_805B1F90(r3); // bl 0x805B1F90
    r0 = *(0x14 + r1); // lwz @ 0x805B4114
    r31 = *(0xc + r1); // lwz @ 0x805B4118
    r30 = *(8 + r1); // lwz @ 0x805B411C
    return;
}