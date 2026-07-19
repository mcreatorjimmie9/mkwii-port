/* Function at 0x807847F4, size=220 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807847F4(int r3, int r4, int r5)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    *(0x3c + r1) = r31; // stw @ 0x80784804
    r31 = r3;
    r3 = r3 + 0x3dc; // 0x8078480C
    r4 = r31 + 0x3d0; // 0x80784810
    FUN_80743DF8(r5, r3, r4); // bl 0x80743DF8
    /* lfs f0, 0x3ac(r31) */ // 0x80784818
    /* li r0, 0 */ // 0x8078481C
    /* stfs f0, 0x14(r1) */ // 0x80784820
    /* lfs f0, 0x3b0(r31) */ // 0x80784824
    /* stfs f0, 0x24(r1) */ // 0x80784828
    /* lfs f0, 0x3b4(r31) */ // 0x8078482C
    /* stfs f0, 0x34(r1) */ // 0x80784830
    r3 = *(0x2c + r31); // lhz @ 0x80784834
    *(0x54 + r31) = r0; // stb @ 0x80784838
    r0 = r3 | 4; // 0x8078483C
    *(0x2c + r31) = r0; // sth @ 0x80784840
    /* lfs f0, 8(r1) */ // 0x80784844
    /* stfs f0, 0x58(r31) */ // 0x80784848
    /* lfs f0, 0xc(r1) */ // 0x8078484C
    /* stfs f0, 0x5c(r31) */ // 0x80784850
    /* lfs f0, 0x10(r1) */ // 0x80784854
    /* stfs f0, 0x60(r31) */ // 0x80784858
    /* lfs f0, 0x14(r1) */ // 0x8078485C
    /* stfs f0, 0x64(r31) */ // 0x80784860
    /* lfs f0, 0x18(r1) */ // 0x80784864
    /* stfs f0, 0x68(r31) */ // 0x80784868
    /* lfs f0, 0x1c(r1) */ // 0x8078486C
    /* stfs f0, 0x6c(r31) */ // 0x80784870
    /* lfs f0, 0x20(r1) */ // 0x80784874
    /* stfs f0, 0x70(r31) */ // 0x80784878
    /* lfs f0, 0x24(r1) */ // 0x8078487C
    /* stfs f0, 0x74(r31) */ // 0x80784880
    /* lfs f0, 0x28(r1) */ // 0x80784884
    /* stfs f0, 0x78(r31) */ // 0x80784888
    /* lfs f0, 0x2c(r1) */ // 0x8078488C
    /* stfs f0, 0x7c(r31) */ // 0x80784890
    /* lfs f0, 0x30(r1) */ // 0x80784894
    /* stfs f0, 0x80(r31) */ // 0x80784898
    /* lfs f0, 0x34(r1) */ // 0x8078489C
    /* stfs f0, 0x84(r31) */ // 0x807848A0
    /* lfs f0, 0x14(r1) */ // 0x807848A4
    /* stfs f0, 0x30(r31) */ // 0x807848A8
    /* lfs f0, 0x24(r1) */ // 0x807848AC
    /* stfs f0, 0x34(r31) */ // 0x807848B0
    /* lfs f0, 0x34(r1) */ // 0x807848B4
    /* stfs f0, 0x38(r31) */ // 0x807848B8
    r31 = *(0x3c + r1); // lwz @ 0x807848BC
    r0 = *(0x44 + r1); // lwz @ 0x807848C0
    return;
}