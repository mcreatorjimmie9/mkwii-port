/* Function at 0x80765380, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80765380(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8076538C
    r31 = r3;
    FUN_808A1BCC(); // bl 0x808A1BCC
    r5 = *(0xd4 + r31); // lwz @ 0x80765398
    /* li r0, 0 */ // 0x8076539C
    r3 = r31;
    r4 = *(0x2c + r5); // lhz @ 0x807653A4
    r4 = r4 | 4; // 0x807653A8
    *(0x2c + r5) = r4; // sth @ 0x807653AC
    *(0x54 + r5) = r0; // stb @ 0x807653B0
    /* lfs f0, 0x58(r31) */ // 0x807653B4
    /* stfs f0, 0x58(r5) */ // 0x807653B8
    /* lfs f0, 0x5c(r31) */ // 0x807653BC
    /* stfs f0, 0x5c(r5) */ // 0x807653C0
    /* lfs f0, 0x60(r31) */ // 0x807653C4
    /* stfs f0, 0x60(r5) */ // 0x807653C8
    /* lfs f0, 0x64(r31) */ // 0x807653CC
    /* stfs f0, 0x64(r5) */ // 0x807653D0
    /* lfs f0, 0x68(r31) */ // 0x807653D4
    /* stfs f0, 0x68(r5) */ // 0x807653D8
    /* lfs f0, 0x6c(r31) */ // 0x807653DC
    /* stfs f0, 0x6c(r5) */ // 0x807653E0
    /* lfs f0, 0x70(r31) */ // 0x807653E4
    /* stfs f0, 0x70(r5) */ // 0x807653E8
    /* lfs f0, 0x74(r31) */ // 0x807653EC
    /* stfs f0, 0x74(r5) */ // 0x807653F0
    /* lfs f0, 0x78(r31) */ // 0x807653F4
    /* stfs f0, 0x78(r5) */ // 0x807653F8
    /* lfs f0, 0x7c(r31) */ // 0x807653FC
    /* stfs f0, 0x7c(r5) */ // 0x80765400
    /* lfs f0, 0x80(r31) */ // 0x80765404
    /* stfs f0, 0x80(r5) */ // 0x80765408
    /* lfs f0, 0x84(r31) */ // 0x8076540C
    /* stfs f0, 0x84(r5) */ // 0x80765410
    /* lfs f0, 0x64(r31) */ // 0x80765414
    /* stfs f0, 0x30(r5) */ // 0x80765418
    /* lfs f0, 0x74(r31) */ // 0x8076541C
    /* stfs f0, 0x34(r5) */ // 0x80765420
    /* lfs f0, 0x84(r31) */ // 0x80765424
    /* stfs f0, 0x38(r5) */ // 0x80765428
    FUN_808A1BCC(); // bl 0x808A1BCC
    r3 = *(0xd8 + r31); // lwz @ 0x80765430
    r4 = r31 + 0x58; // 0x80765434
    FUN_805EADD0(r4); // bl 0x805EADD0
    r0 = *(0x14 + r1); // lwz @ 0x8076543C
    r31 = *(0xc + r1); // lwz @ 0x80765440
    return;
}