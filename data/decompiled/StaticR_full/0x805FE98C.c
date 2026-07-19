/* Function at 0x805FE98C, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805FE98C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0x20e8 */ // 0x805FE994
    r5 = r5 + 0xfff; // 0x805FE99C
    *(0xc + r1) = r31; // stw @ 0x805FE9A0
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x805FE9A8
    r30 = r4;
    r0 = *(0 + r4); // lwz @ 0x805FE9B0
    /* and. r0, r0, r5 */ // 0x805FE9B4
    if (==) goto 0x0x805fe9cc;
    r3 = r30;
    r4 = r5;
    FUN_80842FAC(r3, r4); // bl 0x80842FAC
    /* b 0x805fe9d0 */ // 0x805FE9C8
    /* li r3, 0 */ // 0x805FE9CC
    if (==) goto 0x0x805fe9f0;
    /* lis r4, 0 */ // 0x805FE9D8
    r3 = r31 + 4; // 0x805FE9DC
    r4 = *(0 + r4); // lwz @ 0x805FE9E0
    r0 = *(4 + r4); // lhz @ 0x805FE9E4
    r4 = r0 rlwinm 0x18; // rlwinm
    FUN_8061F1F8(r4, r3); // bl 0x8061F1F8
    /* lis r3, -0x2fef */ // 0x805FE9F0
    r4 = *(0 + r30); // lwz @ 0x805FE9F4
    r0 = r3 + -0x1000; // 0x805FE9F8
    /* and. r0, r4, r0 */ // 0x805FE9FC
    if (==) goto 0x0x805fea10;
    r0 = *(0x2c + r31); // lwz @ 0x805FEA04
    r0 = r0 | 1; // 0x805FEA08
    *(0x2c + r31) = r0; // stw @ 0x805FEA0C
    r0 = *(0 + r30); // lwz @ 0x805FEA10
    /* rlwinm. r0, r0, 0, 0x15, 0x15 */ // 0x805FEA14
    if (==) goto 0x0x805fea28;
    r0 = *(0x2c + r31); // lwz @ 0x805FEA1C
    r0 = r0 | 2; // 0x805FEA20
    *(0x2c + r31) = r0; // stw @ 0x805FEA24
    r0 = *(0x14 + r1); // lwz @ 0x805FEA28
    r31 = *(0xc + r1); // lwz @ 0x805FEA2C
    r30 = *(8 + r1); // lwz @ 0x805FEA30
    return;
}