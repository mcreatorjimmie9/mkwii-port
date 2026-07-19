/* Function at 0x806E97D8, size=352 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806E97D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806E97E0
    *(0x14 + r1) = r0; // stw @ 0x806E97E4
    /* li r0, 0 */ // 0x806E97E8
    *(0xc + r1) = r31; // stw @ 0x806E97EC
    r31 = r3;
    *(0x2930 + r3) = r0; // stw @ 0x806E97F4
    *(0x292c + r3) = r0; // stw @ 0x806E97F8
    r0 = *(0 + r4); // lwz @ 0x806E97FC
    if (==) goto 0x0x806e9874;
    r3 = r0;
    FUN_806F027C(r3); // bl 0x806F027C
    r0 = *(0 + r3); // lbz @ 0x806E9810
    *(0x2920 + r31) = r0; // stb @ 0x806E9814
    r0 = *(1 + r3); // lbz @ 0x806E9818
    *(0x2921 + r31) = r0; // stb @ 0x806E981C
    r0 = *(2 + r3); // lbz @ 0x806E9820
    *(0x2922 + r31) = r0; // stb @ 0x806E9824
    r0 = *(3 + r3); // lbz @ 0x806E9828
    *(0x2923 + r31) = r0; // stb @ 0x806E982C
    r0 = *(4 + r3); // lbz @ 0x806E9830
    *(0x2924 + r31) = r0; // stb @ 0x806E9834
    r0 = *(5 + r3); // lbz @ 0x806E9838
    *(0x2925 + r31) = r0; // stb @ 0x806E983C
    r0 = *(6 + r3); // lbz @ 0x806E9840
    *(0x2926 + r31) = r0; // stb @ 0x806E9844
    r0 = *(7 + r3); // lbz @ 0x806E9848
    *(0x2927 + r31) = r0; // stb @ 0x806E984C
    r0 = *(8 + r3); // lbz @ 0x806E9850
    *(0x2928 + r31) = r0; // stb @ 0x806E9854
    r0 = *(9 + r3); // lbz @ 0x806E9858
    *(0x2929 + r31) = r0; // stb @ 0x806E985C
    r0 = *(0xa + r3); // lbz @ 0x806E9860
    *(0x292a + r31) = r0; // stb @ 0x806E9864
    r0 = *(0xb + r3); // lbz @ 0x806E9868
    *(0x292b + r31) = r0; // stb @ 0x806E986C
    /* b 0x806e9924 */ // 0x806E9870
    /* lis r4, 0 */ // 0x806E9874
    r0 = *(0 + r4); // lwz @ 0x806E9878
    if (==) goto 0x0x806e98f0;
    r3 = r0;
    FUN_806EC630(r4, r3); // bl 0x806EC630
    r0 = *(0 + r3); // lbz @ 0x806E988C
    *(0x2920 + r31) = r0; // stb @ 0x806E9890
    r0 = *(1 + r3); // lbz @ 0x806E9894
    *(0x2921 + r31) = r0; // stb @ 0x806E9898
    r0 = *(2 + r3); // lbz @ 0x806E989C
    *(0x2922 + r31) = r0; // stb @ 0x806E98A0
    r0 = *(3 + r3); // lbz @ 0x806E98A4
    *(0x2923 + r31) = r0; // stb @ 0x806E98A8
    r0 = *(4 + r3); // lbz @ 0x806E98AC
    *(0x2924 + r31) = r0; // stb @ 0x806E98B0
    r0 = *(5 + r3); // lbz @ 0x806E98B4
    *(0x2925 + r31) = r0; // stb @ 0x806E98B8
    r0 = *(6 + r3); // lbz @ 0x806E98BC
    *(0x2926 + r31) = r0; // stb @ 0x806E98C0
    r0 = *(7 + r3); // lbz @ 0x806E98C4
    *(0x2927 + r31) = r0; // stb @ 0x806E98C8
    r0 = *(8 + r3); // lbz @ 0x806E98CC
    *(0x2928 + r31) = r0; // stb @ 0x806E98D0
    r0 = *(9 + r3); // lbz @ 0x806E98D4
    *(0x2929 + r31) = r0; // stb @ 0x806E98D8
    r0 = *(0xa + r3); // lbz @ 0x806E98DC
    *(0x292a + r31) = r0; // stb @ 0x806E98E0
    r0 = *(0xb + r3); // lbz @ 0x806E98E4
    *(0x292b + r31) = r0; // stb @ 0x806E98E8
    /* b 0x806e9924 */ // 0x806E98EC
    /* li r0, 0xff */ // 0x806E98F0
    *(0x2920 + r3) = r0; // stb @ 0x806E98F4
    *(0x2921 + r3) = r0; // stb @ 0x806E98F8
    *(0x2922 + r3) = r0; // stb @ 0x806E98FC
    *(0x2923 + r3) = r0; // stb @ 0x806E9900
    *(0x2924 + r3) = r0; // stb @ 0x806E9904
    *(0x2925 + r3) = r0; // stb @ 0x806E9908
    *(0x2926 + r3) = r0; // stb @ 0x806E990C
    *(0x2927 + r3) = r0; // stb @ 0x806E9910
    *(0x2928 + r3) = r0; // stb @ 0x806E9914
    *(0x2929 + r3) = r0; // stb @ 0x806E9918
    *(0x292a + r3) = r0; // stb @ 0x806E991C
    *(0x292b + r3) = r0; // stb @ 0x806E9920
    r0 = *(0x14 + r1); // lwz @ 0x806E9924
    r31 = *(0xc + r1); // lwz @ 0x806E9928
    return;
}