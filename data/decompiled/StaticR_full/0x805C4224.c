/* Function at 0x805C4224, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805C4224(int r3, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x805C422C
    /* li r6, 3 */ // 0x805C4230
    *(0x14 + r1) = r0; // stw @ 0x805C4234
    *(0xc + r1) = r31; // stw @ 0x805C4238
    r31 = r3;
    r5 = *(0 + r5); // lwz @ 0x805C4240
    r0 = *(0xb90 + r5); // lwz @ 0x805C4244
    /* rlwinm. r0, r0, 0, 0x1d, 0x1d */ // 0x805C4248
    if (==) goto 0x0x805c4268;
    r6 = *(0xb8d + r5); // lbz @ 0x805C4250
    r0 = r6 + 0xff; // 0x805C4254
    /* clrlwi r0, r0, 0x18 */ // 0x805C4258
    if (<=) goto 0x0x805c4268;
    /* li r6, 3 */ // 0x805C4264
    r0 = *(0x38 + r3); // lwz @ 0x805C4268
    /* clrlwi r5, r6, 0x18 */ // 0x805C426C
    *(0x24 + r3) = r5; // sth @ 0x805C4270
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x805C4274
    *(0x26 + r3) = r6; // stb @ 0x805C4278
    if (==) goto 0x0x805c4294;
    r3 = r31;
    /* li r5, 0 */ // 0x805C4284
    /* li r6, 5 */ // 0x805C4288
    FUN_805C3D4C(r3, r5, r6); // bl 0x805C3D4C
    /* b 0x805c42b0 */ // 0x805C4290
    r3 = r31;
    /* li r5, 1 */ // 0x805C4298
    /* li r6, 5 */ // 0x805C429C
    FUN_805C3D4C(r3, r5, r6); // bl 0x805C3D4C
    r0 = *(0x38 + r31); // lwz @ 0x805C42A4
    r0 = r0 | 8; // 0x805C42A8
    *(0x38 + r31) = r0; // stw @ 0x805C42AC
    r0 = *(0x14 + r1); // lwz @ 0x805C42B0
    r31 = *(0xc + r1); // lwz @ 0x805C42B4
    return;
}