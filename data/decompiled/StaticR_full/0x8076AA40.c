/* Function at 0x8076AA40, size=408 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8076AA40(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8076AA4C
    r31 = r3;
    r0 = *(0xe5 + r3); // lbz @ 0x8076AA54
    if (==) goto 0x0x8076aa88;
    r4 = *(0x4d4 + r3); // lwz @ 0x8076AA60
    r0 = *(0x4e0 + r3); // lwz @ 0x8076AA64
    if (<) goto 0x0x8076aa78;
    /* li r0, 5 */ // 0x8076AA70
    *(0xb8 + r3) = r0; // stw @ 0x8076AA74
    r4 = *(0x4d4 + r3); // lwz @ 0x8076AA78
    r0 = r4 + 1; // 0x8076AA7C
    *(0x4d4 + r3) = r0; // stw @ 0x8076AA80
    /* b 0x8076abc4 */ // 0x8076AA84
    r0 = *(0xe4 + r3); // lbz @ 0x8076AA88
    /* cmpwi cr1, r0, 0 */
    if (==) goto 0x0x8076abc4;
    r4 = *(0x4d4 + r3); // lwz @ 0x8076AA94
    r0 = *(0x440 + r3); // lwz @ 0x8076AA98
    if (>=) goto 0x0x8076aab8;
    if (==) goto 0x0x8076aac8;
    r4 = *(0xe0 + r3); // lwz @ 0x8076AAA8
    /* li r0, 0 */ // 0x8076AAAC
    *(0x10 + r4) = r0; // stw @ 0x8076AAB0
    /* b 0x8076aac8 */ // 0x8076AAB4
    if (==) goto 0x0x8076aac8;
    r4 = *(0xe0 + r3); // lwz @ 0x8076AABC
    /* li r0, 1 */ // 0x8076AAC0
    *(0x10 + r4) = r0; // stw @ 0x8076AAC4
    r3 = *(0xe0 + r3); // lwz @ 0x8076AAC8
    FUN_807CBDD0(); // bl 0x807CBDD0
    if (<) goto 0x0x8076ab44;
    r0 = *(0x4d0 + r31); // lwz @ 0x8076AAD8
    /* subf r0, r3, r0 */ // 0x8076AADC
    /* cntlzw r0, r0 */ // 0x8076AAE0
    /* rlwinm. r5, r0, 0x1b, 5, 0x1f */ // 0x8076AAE4
    if (==) goto 0x0x8076ab04;
    r0 = *(0x440 + r31); // lwz @ 0x8076AAEC
    r4 = *(0x4d4 + r31); // lwz @ 0x8076AAF0
    /* slwi r0, r0, 2 */ // 0x8076AAF4
    if (<=) goto 0x0x8076ab04;
    /* li r5, 0 */ // 0x8076AB00
    r0 = *(0x494 + r31); // lbz @ 0x8076AB04
    if (!=) goto 0x0x8076ab44;
    if (!=) goto 0x0x8076ab44;
    r0 = *(0x4f8 + r31); // lwz @ 0x8076AB18
    if (!=) goto 0x0x8076ab44;
    *(0x4d0 + r31) = r3; // stw @ 0x8076AB24
    /* li r5, 2 */ // 0x8076AB28
    r4 = *(0xe0 + r31); // lwz @ 0x8076AB2C
    /* li r0, 5 */ // 0x8076AB30
    *(0x10 + r4) = r5; // stw @ 0x8076AB34
    r4 = *(0xe0 + r31); // lwz @ 0x8076AB38
    *(0x20 + r4) = r3; // stw @ 0x8076AB3C
    *(0xb8 + r31) = r0; // stw @ 0x8076AB40
    /* lis r3, 0 */ // 0x8076AB44
    r4 = *(0x4d4 + r31); // lwz @ 0x8076AB48
    /* lfs f1, 0(r3) */ // 0x8076AB4C
    /* lfs f0, 0x444(r31) */ // 0x8076AB50
    r0 = r4 + 1; // 0x8076AB54
    *(0x4d4 + r31) = r0; // stw @ 0x8076AB58
    /* fcmpu cr0, f1, f0 */ // 0x8076AB5C
    if (!=) goto 0x0x8076ab6c;
    /* lfs f0, 0x30(r31) */ // 0x8076AB64
    /* stfs f0, 0x444(r31) */ // 0x8076AB68
    /* lis r3, 0 */ // 0x8076AB6C
    /* lfs f0, 0x448(r31) */ // 0x8076AB70
    /* lfs f1, 0(r3) */ // 0x8076AB74
    /* fcmpu cr0, f1, f0 */ // 0x8076AB78
    if (!=) goto 0x0x8076ab88;
    /* lfs f0, 0x38(r31) */ // 0x8076AB80
    /* stfs f0, 0x448(r31) */ // 0x8076AB84
    /* lfs f1, 0x448(r31) */ // 0x8076AB88
    /* lis r3, 0 */ // 0x8076AB8C
    /* lfs f3, 0x34(r31) */ // 0x8076AB90
    /* lfs f0, 0x444(r31) */ // 0x8076AB98
    /* stfs f0, 8(r1) */ // 0x8076AB9C
    /* lfs f2, 0(r3) */ // 0x8076ABA0
    /* stfs f3, 0xc(r1) */ // 0x8076ABA4
    /* stfs f1, 0x10(r1) */ // 0x8076ABA8
    r3 = *(0xe0 + r31); // lwz @ 0x8076ABAC
    /* lfs f1, 0x43c(r31) */ // 0x8076ABB0
    r12 = *(0 + r3); // lwz @ 0x8076ABB4
    r12 = *(0x10 + r12); // lwz @ 0x8076ABB8
    /* mtctr r12 */ // 0x8076ABBC
    /* bctrl  */ // 0x8076ABC0
    r0 = *(0x24 + r1); // lwz @ 0x8076ABC4
    r31 = *(0x1c + r1); // lwz @ 0x8076ABC8
    return;
}