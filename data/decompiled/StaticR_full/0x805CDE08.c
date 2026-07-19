/* Function at 0x805CDE08, size=508 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 11 function(s) */

int FUN_805CDE08(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x805CDE1C
    /* lis r30, 0 */ // 0x805CDE20
    *(0x14 + r1) = r29; // stw @ 0x805CDE24
    /* li r29, 0 */ // 0x805CDE28
    /* b 0x805cde40 */ // 0x805CDE2C
    r3 = r31;
    /* clrlwi r4, r29, 0x18 */ // 0x805CDE34
    FUN_805CCFE0(r3); // bl 0x805CCFE0
    r29 = r29 + 1; // 0x805CDE3C
    r3 = *(0 + r30); // lwz @ 0x805CDE40
    /* clrlwi r4, r29, 0x18 */ // 0x805CDE44
    r0 = *(0x24 + r3); // lbz @ 0x805CDE48
    if (<) goto 0x0x805cde30;
    r3 = r31;
    FUN_805CD1E4(r3); // bl 0x805CD1E4
    r0 = *(0x10b + r31); // lbz @ 0x805CDE5C
    if (==) goto 0x0x805cde84;
    r3 = r31;
    FUN_805CD310(r3); // bl 0x805CD310
    /* lis r4, 0 */ // 0x805CDE70
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x805CDE78
    r4 = r31 + 0xf8; // 0x805CDE7C
    FUN_806E3820(r4, r5, r4); // bl 0x806E3820
    r12 = *(0 + r31); // lwz @ 0x805CDE84
    r3 = r31;
    r12 = *(0x14 + r12); // lwz @ 0x805CDE8C
    /* mtctr r12 */ // 0x805CDE90
    /* bctrl  */ // 0x805CDE94
    r3 = *(4 + r31); // lwz @ 0x805CDE98
    /* li r4, 2 */ // 0x805CDE9C
    FUN_805C5788(r4); // bl 0x805C5788
    if (==) goto 0x0x805cdefc;
    /* li r29, 0 */ // 0x805CDEAC
    /* lis r30, 0 */ // 0x805CDEB0
    /* b 0x805cdee8 */ // 0x805CDEB4
    r3 = *(4 + r31); // lwz @ 0x805CDEB8
    r0 = r29 rlwinm 2; // rlwinm
    r4 = *(0xc + r3); // lwz @ 0x805CDEC0
    /* lwzx r4, r4, r0 */ // 0x805CDEC4
    r4 = *(0x38 + r4); // lwz @ 0x805CDEC8
    /* rlwinm. r0, r4, 0, 0x1a, 0x1a */ // 0x805CDECC
    if (==) goto 0x0x805cdee4;
    /* rlwinm. r0, r4, 0, 0x1b, 0x1b */ // 0x805CDED4
    if (!=) goto 0x0x805cdee4;
    /* clrlwi r4, r29, 0x18 */ // 0x805CDEDC
    FUN_805C332C(); // bl 0x805C332C
    r29 = r29 + 1; // 0x805CDEE4
    r3 = *(0 + r30); // lwz @ 0x805CDEE8
    /* clrlwi r4, r29, 0x18 */ // 0x805CDEEC
    r0 = *(0x24 + r3); // lbz @ 0x805CDEF0
    if (<) goto 0x0x805cdeb8;
    r3 = r31;
    FUN_805CD7A4(r3); // bl 0x805CD7A4
    /* lis r3, 0 */ // 0x805CDF04
    r3 = *(0 + r3); // lwz @ 0x805CDF08
    r0 = *(0xb74 + r3); // lwz @ 0x805CDF0C
    if (==) goto 0x0x805cdfa8;
    r5 = *(4 + r31); // lwz @ 0x805CDF18
    /* lis r3, 5 */ // 0x805CDF1C
    r4 = r3 + -0x6c20; // 0x805CDF20
    r6 = *(0x14 + r5); // lwz @ 0x805CDF24
    /* li r3, 0 */ // 0x805CDF28
    r0 = *(8 + r6); // lhz @ 0x805CDF2C
    r5 = *(0xa + r6); // lbz @ 0x805CDF30
    /* mulli r0, r0, 0x3c */ // 0x805CDF34
    r6 = *(0xc + r6); // lhz @ 0x805CDF38
    r0 = r5 + r0; // 0x805CDF3C
    /* mulli r0, r0, 0x3e8 */ // 0x805CDF40
    r0 = r6 + r0; // 0x805CDF44
    r5 = r0 >> 0x1f; // srawi
    /* subfc r0, r0, r4 */ // 0x805CDF4C
    /* subfe r0, r5, r3 */ // 0x805CDF50
    /* subfe r0, r4, r4 */ // 0x805CDF54
    /* neg. r0, r0 */ // 0x805CDF58
    if (==) goto 0x0x805cdfa8;
    /* li r30, 0 */ // 0x805CDF60
    r3 = r31 + r30; // 0x805CDF64
    r0 = *(0x108 + r3); // lbz @ 0x805CDF68
    if (==) goto 0x0x805cdf9c;
    r3 = *(4 + r31); // lwz @ 0x805CDF74
    r0 = r0 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x805CDF7C
    /* lwzx r3, r3, r0 */ // 0x805CDF80
    r0 = *(0x38 + r3); // lwz @ 0x805CDF84
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805CDF88
    if (!=) goto 0x0x805cdf9c;
    /* li r4, 4 */ // 0x805CDF90
    /* li r5, 1 */ // 0x805CDF94
    FUN_805C3840(r4, r5); // bl 0x805C3840
    r30 = r30 + 1; // 0x805CDF9C
    if (<) goto 0x0x805cdf64;
    r3 = r31;
    FUN_805CD9B4(r3); // bl 0x805CD9B4
    r3 = r31;
    FUN_805CDB38(r3, r3); // bl 0x805CDB38
    r3 = r31;
    FUN_805CDCE8(r3, r3, r3); // bl 0x805CDCE8
    r0 = *(0x114 + r31); // lbz @ 0x805CDFC0
    if (!=) goto 0x0x805cdfe8;
    /* lis r3, 0 */ // 0x805CDFCC
    r3 = *(0 + r3); // lwz @ 0x805CDFD0
    r0 = *(0x20 + r3); // lwz @ 0x805CDFD4
    if (<=) goto 0x0x805cdfe8;
    /* li r0, 1 */ // 0x805CDFE0
    *(0x114 + r31) = r0; // stb @ 0x805CDFE4
    r0 = *(0x24 + r1); // lwz @ 0x805CDFE8
    r31 = *(0x1c + r1); // lwz @ 0x805CDFEC
    r30 = *(0x18 + r1); // lwz @ 0x805CDFF0
    r29 = *(0x14 + r1); // lwz @ 0x805CDFF4
    return;
}