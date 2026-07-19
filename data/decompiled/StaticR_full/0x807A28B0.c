/* Function at 0x807A28B0, size=336 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_807A28B0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* lis r5, 0 */ // 0x807A28B8
    *(0x34 + r1) = r0; // stw @ 0x807A28BC
    r5 = r5 + 0; // 0x807A28C0
    r4 = *(0x10 + r3); // lwz @ 0x807A28C4
    /* lis r3, 0 */ // 0x807A28C8
    r3 = *(0 + r3); // lwz @ 0x807A28CC
    r0 = r4 + -0x19; // 0x807A28D0
    /* li r4, 0 */ // 0x807A28D4
    r0 = *(0x4c + r3); // lbz @ 0x807A28DC
    if (>) goto 0x0x807a28ec;
    /* li r4, 1 */ // 0x807A28E4
    /* b 0x807a28f8 */ // 0x807A28E8
    if (>=) goto 0x0x807a28f8;
    /* li r4, 1 */ // 0x807A28F4
    if (==) goto 0x0x807a29f0;
    /* lfs f5, 0x24(r5) */ // 0x807A2900
    /* lis r3, 0 */ // 0x807A2904
    /* lfs f1, 4(r5) */ // 0x807A2908
    /* li r4, 5 */ // 0x807A290C
    /* lfs f4, 0x28(r5) */ // 0x807A2910
    /* li r0, 0 */ // 0x807A2914
    /* lfs f3, 0x2c(r5) */ // 0x807A2918
    /* lfs f2, 0x30(r5) */ // 0x807A291C
    /* lfs f0, 0(r5) */ // 0x807A2920
    /* stfs f5, 8(r1) */ // 0x807A2924
    r3 = *(0 + r3); // lwz @ 0x807A2928
    /* stfs f4, 0xc(r1) */ // 0x807A292C
    /* stfs f3, 0x10(r1) */ // 0x807A2930
    /* stfs f2, 0x14(r1) */ // 0x807A2934
    /* stfs f1, 0x18(r1) */ // 0x807A2938
    *(0x1c + r1) = r4; // stw @ 0x807A293C
    /* stfs f5, 0x20(r1) */ // 0x807A2940
    *(0x24 + r1) = r0; // stw @ 0x807A2944
    /* stfs f0, 0x28(r1) */ // 0x807A2948
    /* stfs f1, 0x2c(r1) */ // 0x807A294C
    r0 = *(0xb68 + r3); // lwz @ 0x807A2950
    if (==) goto 0x0x807a2978;
    if (==) goto 0x0x807a2998;
    if (==) goto 0x0x807a29b8;
    if (==) goto 0x0x807a29b8;
    /* b 0x807a29e0 */ // 0x807A2974
    /* lfs f1, 0x40(r5) */ // 0x807A2978
    /* lfs f0, 0x44(r5) */ // 0x807A297C
    /* stfs f1, 8(r1) */ // 0x807A2980
    *(0x24 + r1) = r4; // stw @ 0x807A2984
    /* stfs f4, 0xc(r1) */ // 0x807A2988
    /* stfs f3, 0x10(r1) */ // 0x807A298C
    /* stfs f0, 0x14(r1) */ // 0x807A2990
    /* b 0x807a29e0 */ // 0x807A2994
    /* lfs f1, 0x40(r5) */ // 0x807A2998
    /* lfs f0, 0x44(r5) */ // 0x807A299C
    /* stfs f1, 8(r1) */ // 0x807A29A0
    *(0x24 + r1) = r4; // stw @ 0x807A29A4
    /* stfs f4, 0xc(r1) */ // 0x807A29A8
    /* stfs f3, 0x10(r1) */ // 0x807A29AC
    /* stfs f0, 0x14(r1) */ // 0x807A29B0
    /* b 0x807a29e0 */ // 0x807A29B4
    /* lfs f3, 0x40(r5) */ // 0x807A29B8
    /* li r0, 5 */ // 0x807A29BC
    /* lfs f2, 0x28(r5) */ // 0x807A29C0
    /* lfs f1, 0x2c(r5) */ // 0x807A29C4
    /* lfs f0, 0x44(r5) */ // 0x807A29C8
    /* stfs f3, 8(r1) */ // 0x807A29CC
    *(0x24 + r1) = r0; // stw @ 0x807A29D0
    /* stfs f2, 0xc(r1) */ // 0x807A29D4
    /* stfs f1, 0x10(r1) */ // 0x807A29D8
    /* stfs f0, 0x14(r1) */ // 0x807A29DC
    /* lis r3, 0 */ // 0x807A29E0
    r3 = *(0 + r3); // lwz @ 0x807A29E8
    FUN_8078DA3C(r3, r4); // bl 0x8078DA3C
    r0 = *(0x34 + r1); // lwz @ 0x807A29F0
    return;
}