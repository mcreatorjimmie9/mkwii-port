/* Function at 0x808727D8, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808727D8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x808727E0
    /* lis r4, 0 */ // 0x808727E4
    *(0x24 + r1) = r0; // stw @ 0x808727E8
    r4 = r4 + 0; // 0x808727EC
    /* lfs f0, 0(r5) */ // 0x808727F0
    r4 = r4 + 0xf8; // 0x808727F4
    *(0x1c + r1) = r31; // stw @ 0x808727F8
    r31 = r3;
    /* stfs f0, 0x174(r3) */ // 0x80872800
    r3 = r3 + 0xa8; // 0x80872804
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    /* li r0, 0 */ // 0x8087280C
    *(0x189 + r31) = r0; // stb @ 0x80872810
    /* lis r6, 0 */ // 0x80872814
    /* lis r4, 0 */ // 0x80872818
    *(0x178 + r31) = r3; // stw @ 0x8087281C
    r5 = r6 + 0; // 0x80872820
    /* lfs f0, 0(r4) */ // 0x80872824
    /* li r0, 0xff */ // 0x80872828
    /* lfs f1, 0(r6) */ // 0x8087282C
    /* stfs f1, 0x2c(r3) */ // 0x80872830
    /* lfs f1, 4(r5) */ // 0x80872834
    /* stfs f1, 0x30(r3) */ // 0x80872838
    /* lfs f1, 8(r5) */ // 0x8087283C
    /* stfs f1, 0x34(r3) */ // 0x80872840
    r3 = *(0x178 + r31); // lwz @ 0x80872844
    /* stfs f0, 8(r1) */ // 0x80872848
    *(0xb8 + r3) = r0; // stb @ 0x8087284C
    r3 = *(0x178 + r31); // lwz @ 0x80872850
    /* stfs f0, 0xc(r1) */ // 0x80872854
    /* stfs f0, 0x44(r3) */ // 0x80872858
    /* stfs f0, 0x48(r3) */ // 0x8087285C
    r31 = *(0x1c + r1); // lwz @ 0x80872860
    r0 = *(0x24 + r1); // lwz @ 0x80872864
    return;
}