/* Function at 0x8062781C, size=140 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8062781C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80627828
    r31 = r3;
    r4 = *(0x20 + r3); // lwz @ 0x80627830
    FUN_8061DF58(); // bl 0x8061DF58
    r0 = *(0x98 + r3); // lwz @ 0x80627838
    r3 = r31;
    *(0x14 + r31) = r0; // stw @ 0x80627840
    r4 = *(0x1c + r31); // lwz @ 0x80627844
    FUN_8061E130(r3); // bl 0x8061E130
    *(0x10 + r31) = r3; // stw @ 0x8062784C
    /* lis r5, 0 */ // 0x80627850
    /* lis r4, 0 */ // 0x80627854
    /* lfs f2, 0(r5) */ // 0x80627858
    /* lfs f1, 0xc(r3) */ // 0x8062785C
    /* li r0, 0 */ // 0x80627860
    /* lfs f0, 0(r4) */ // 0x80627864
    /* fdivs f1, f2, f1 */ // 0x80627868
    /* stfs f0, 0x2c(r31) */ // 0x8062786C
    /* stfs f0, 0x28(r31) */ // 0x80627870
    /* stfs f0, 0x24(r31) */ // 0x80627874
    /* stfs f0, 0x30(r31) */ // 0x80627878
    *(0x34 + r31) = r0; // stb @ 0x8062787C
    /* stfs f1, 0x38(r31) */ // 0x80627880
    *(0x36 + r31) = r0; // sth @ 0x80627884
    /* stfs f0, 0x44(r31) */ // 0x80627888
    /* stfs f0, 0x40(r31) */ // 0x8062788C
    /* stfs f0, 0x3c(r31) */ // 0x80627890
    r31 = *(0xc + r1); // lwz @ 0x80627894
    r0 = *(0x14 + r1); // lwz @ 0x80627898
    return;
}