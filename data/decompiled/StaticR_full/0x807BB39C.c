/* Function at 0x807BB39C, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807BB39C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x807BB3A4
    *(0xc + r1) = r31; // stw @ 0x807BB3AC
    /* lis r31, 0 */ // 0x807BB3B0
    r31 = r31 + 0; // 0x807BB3B4
    *(8 + r1) = r30; // stw @ 0x807BB3B8
    r30 = r4;
    r3 = *(0 + r3); // lwz @ 0x807BB3C0
    FUN_807BFFC0(); // bl 0x807BFFC0
    /* lfs f0, 0(r31) */ // 0x807BB3C8
    /* li r0, 0 */ // 0x807BB3CC
    /* stfs f0, 8(r30) */ // 0x807BB3D4
    *(0x14 + r30) = r0; // stb @ 0x807BB3D8
    *(0x15 + r30) = r0; // stb @ 0x807BB3DC
    if (==) goto 0x0x807bb3f8;
    if (==) goto 0x0x807bb408;
    if (==) goto 0x0x807bb420;
    /* b 0x807bb430 */ // 0x807BB3F4
    *(0xc + r30) = r0; // stw @ 0x807BB3F8
    /* lfs f0, 4(r31) */ // 0x807BB3FC
    /* stfs f0, 4(r30) */ // 0x807BB400
    /* b 0x807bb430 */ // 0x807BB404
    /* li r0, 1 */ // 0x807BB408
    *(0xc + r30) = r0; // stw @ 0x807BB40C
    /* lis r3, 0 */ // 0x807BB410
    /* lfs f0, 0(r3) */ // 0x807BB414
    /* stfs f0, 4(r30) */ // 0x807BB418
    /* b 0x807bb430 */ // 0x807BB41C
    /* li r0, 2 */ // 0x807BB420
    *(0xc + r30) = r0; // stw @ 0x807BB424
    /* lfs f0, 8(r31) */ // 0x807BB428
    /* stfs f0, 4(r30) */ // 0x807BB42C
    r0 = *(0x14 + r1); // lwz @ 0x807BB430
    r31 = *(0xc + r1); // lwz @ 0x807BB434
    r30 = *(8 + r1); // lwz @ 0x807BB438
    return;
}