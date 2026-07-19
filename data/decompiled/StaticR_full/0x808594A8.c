/* Function at 0x808594A8, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808594A8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808594B4
    r31 = r3;
    r0 = *(0x74 + r3); // lwz @ 0x808594BC
    if (==) goto 0x0x80859530;
    /* lis r4, 0 */ // 0x808594C8
    r3 = r0;
    /* lfs f1, 0(r4) */ // 0x808594D0
    FUN_805EACF0(r4, r3); // bl 0x805EACF0
    r3 = *(0x100 + r31); // lwz @ 0x808594D8
    if (==) goto 0x0x808594f4;
    /* lis r4, 0 */ // 0x808594E4
    r3 = *(0x48 + r3); // lwz @ 0x808594E8
    /* lfs f0, 0(r4) */ // 0x808594EC
    /* stfs f0, 0(r3) */ // 0x808594F0
    r3 = *(0x24 + r31); // lwz @ 0x808594F4
    if (==) goto 0x0x80859514;
    r3 = *(0 + r3); // lwz @ 0x80859500
    /* lis r4, 0 */ // 0x80859504
    /* lfs f0, 0(r4) */ // 0x80859508
    r3 = *(0x48 + r3); // lwz @ 0x8085950C
    /* stfs f0, 0(r3) */ // 0x80859510
    r3 = *(0x28 + r31); // lwz @ 0x80859514
    if (==) goto 0x0x80859530;
    /* lis r4, 0 */ // 0x80859520
    r3 = *(0x48 + r3); // lwz @ 0x80859524
    /* lfs f0, 0(r4) */ // 0x80859528
    /* stfs f0, 0(r3) */ // 0x8085952C
    /* lis r3, 0 */ // 0x80859530
    /* lfs f0, 0(r3) */ // 0x80859534
    /* stfs f0, 0xac(r31) */ // 0x80859538
    r31 = *(0xc + r1); // lwz @ 0x8085953C
    r0 = *(0x14 + r1); // lwz @ 0x80859540
    return;
}