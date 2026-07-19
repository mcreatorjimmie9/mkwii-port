/* Function at 0x8077B834, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8077B834(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8077B840
    r31 = r3;
    r12 = *(0 + r3); // lwz @ 0x8077B848
    r12 = *(0xec + r12); // lwz @ 0x8077B84C
    /* mtctr r12 */ // 0x8077B850
    /* bctrl  */ // 0x8077B854
    r3 = r31;
    FUN_8077BB50(r3); // bl 0x8077BB50
    r4 = *(0x20 + r31); // lwz @ 0x8077B860
    r3 = *(0xb0 + r31); // lwz @ 0x8077B864
    /* lfs f0, 0x18(r4) */ // 0x8077B868
    /* stfs f0, 0x3ac(r3) */ // 0x8077B86C
    r4 = *(0x20 + r31); // lwz @ 0x8077B870
    r3 = *(0xb0 + r31); // lwz @ 0x8077B874
    /* lfs f0, 0x20(r4) */ // 0x8077B878
    /* stfs f0, 0x3b4(r3) */ // 0x8077B87C
    r4 = *(0x20 + r31); // lwz @ 0x8077B880
    r3 = *(0xb0 + r31); // lwz @ 0x8077B884
    /* lfs f0, 0x1c(r4) */ // 0x8077B888
    /* stfs f0, 0x498(r3) */ // 0x8077B88C
    r3 = *(0x20 + r31); // lwz @ 0x8077B890
    r4 = *(0xb0 + r31); // lwz @ 0x8077B894
    /* lfs f0, 0x24(r3) */ // 0x8077B898
    /* stfs f0, 0x3d0(r4) */ // 0x8077B89C
    /* lfs f0, 0x28(r3) */ // 0x8077B8A0
    /* stfs f0, 0x3d4(r4) */ // 0x8077B8A4
    /* lfs f0, 0x2c(r3) */ // 0x8077B8A8
    /* stfs f0, 0x3d8(r4) */ // 0x8077B8AC
    r0 = *(0xcd + r31); // lbz @ 0x8077B8B0
    if (==) goto 0x0x8077b928;
    /* li r4, 0 */ // 0x8077B8BC
    /* li r5, 0 */ // 0x8077B8C0
    /* b 0x8077b91c */ // 0x8077B8C4
    r3 = *(0xbc + r31); // lwz @ 0x8077B8C8
    r4 = r4 + 1; // 0x8077B8CC
    /* lwzx r6, r3, r5 */ // 0x8077B8D0
    r3 = *(0x20 + r6); // lwz @ 0x8077B8D4
    r0 = *(0x2c + r6); // lhz @ 0x8077B8D8
    /* lfs f2, 0x18(r3) */ // 0x8077B8DC
    /* lfs f1, 0x1c(r3) */ // 0x8077B8E0
    r0 = r0 | 1; // 0x8077B8E4
    /* lfs f0, 0x20(r3) */ // 0x8077B8E8
    /* stfs f2, 8(r1) */ // 0x8077B8EC
    *(0x2c + r6) = r0; // sth @ 0x8077B8F0
    /* stfs f2, 0x30(r6) */ // 0x8077B8F4
    r3 = *(0xbc + r31); // lwz @ 0x8077B8F8
    /* stfs f1, 0xc(r1) */ // 0x8077B8FC
    /* lwzx r3, r3, r5 */ // 0x8077B900
    r5 = r5 + 4; // 0x8077B904
    /* stfs f0, 0x10(r1) */ // 0x8077B908
    r0 = *(0x2c + r3); // lhz @ 0x8077B90C
    r0 = r0 | 1; // 0x8077B910
    *(0x2c + r3) = r0; // sth @ 0x8077B914
    /* stfs f0, 0x38(r3) */ // 0x8077B918
    r0 = *(0xc4 + r31); // lbz @ 0x8077B91C
    if (<) goto 0x0x8077b8c8;
    r0 = *(0x24 + r1); // lwz @ 0x8077B928
    r31 = *(0x1c + r1); // lwz @ 0x8077B92C
    return;
}