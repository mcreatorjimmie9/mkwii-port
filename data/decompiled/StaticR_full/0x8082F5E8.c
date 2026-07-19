/* Function at 0x8082F5E8, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8082F5E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8082F5F4
    r31 = r3;
    r5 = *(0x74 + r3); // lwz @ 0x8082F5FC
    /* rlwinm. r0, r5, 0, 0x1b, 0x1b */ // 0x8082F600
    if (==) goto 0x0x8082f61c;
    /* lis r4, 0 */ // 0x8082F608
    /* lfs f0, 0x1a0(r3) */ // 0x8082F60C
    /* lfs f1, 0(r4) */ // 0x8082F610
    /* fcmpu cr0, f1, f0 */ // 0x8082F614
    if (==) goto 0x0x8082f640;
    /* rlwinm. r0, r5, 0, 0x1c, 0x1c */ // 0x8082F61C
    if (==) goto 0x0x8082f660;
    r3 = *(0x9c + r3); // lwz @ 0x8082F624
    /* li r4, 0 */ // 0x8082F628
    r3 = *(0x28 + r3); // lwz @ 0x8082F62C
    FUN_805E7060(r4); // bl 0x805E7060
    r0 = *(8 + r3); // lhz @ 0x8082F634
    if (!=) goto 0x0x8082f660;
    r4 = *(0x9c + r31); // lwz @ 0x8082F640
    /* lis r3, 0 */ // 0x8082F644
    /* lis r5, 0 */ // 0x8082F648
    /* lfs f1, 0(r3) */ // 0x8082F64C
    r3 = *(0x28 + r4); // lwz @ 0x8082F650
    /* li r4, 5 */ // 0x8082F654
    /* lfs f2, 0(r5) */ // 0x8082F658
    FUN_805E70EC(r5, r4); // bl 0x805E70EC
    r0 = *(0x14 + r1); // lwz @ 0x8082F660
    r31 = *(0xc + r1); // lwz @ 0x8082F664
    return;
}