/* Function at 0x8075F8C0, size=200 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_8075F8C0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r7, 0 */ // 0x8075F8C8
    r31 = r5;
    *(0x28 + r1) = r30; // stw @ 0x8075F8DC
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x8075F8E4
    r29 = r3;
    r3 = r30;
    r6 = *(0 + r7); // lwzu @ 0x8075F8F0
    *(8 + r1) = r6; // stw @ 0x8075F8F4
    r4 = *(4 + r7); // lwz @ 0x8075F8F8
    r0 = *(8 + r7); // lwz @ 0x8075F8FC
    *(0xc + r1) = r4; // stw @ 0x8075F900
    *(0x10 + r1) = r0; // stw @ 0x8075F904
    r4 = *(0xac + r29); // lwz @ 0x8075F908
    FUN_808B04F0(); // bl 0x808B04F0
    /* lfs f0, 8(r1) */ // 0x8075F910
    /* stfs f0, 0(r31) */ // 0x8075F918
    /* lfs f0, 0xc(r1) */ // 0x8075F91C
    /* stfs f0, 4(r31) */ // 0x8075F920
    /* lfs f0, 0x10(r1) */ // 0x8075F924
    /* stfs f0, 8(r31) */ // 0x8075F928
    if (!=) goto 0x0x8075f96c;
    r0 = *(0x154 + r29); // lwz @ 0x8075F930
    if (!=) goto 0x0x8075f940;
    /* b 0x8075f96c */ // 0x8075F93C
    r4 = *(0xe4 + r29); // lwz @ 0x8075F940
    r3 = r30;
    FUN_808B04F0(r3, r5); // bl 0x808B04F0
    /* lfs f0, 8(r1) */ // 0x8075F950
    /* stfs f0, 0(r31) */ // 0x8075F954
    /* lfs f0, 0xc(r1) */ // 0x8075F958
    /* stfs f0, 4(r31) */ // 0x8075F95C
    /* lfs f0, 0x10(r1) */ // 0x8075F960
    /* stfs f0, 8(r31) */ // 0x8075F964
    *(0x1be + r29) = r3; // stb @ 0x8075F968
    r0 = *(0x34 + r1); // lwz @ 0x8075F96C
    r31 = *(0x2c + r1); // lwz @ 0x8075F970
    r30 = *(0x28 + r1); // lwz @ 0x8075F974
    r29 = *(0x24 + r1); // lwz @ 0x8075F978
    return;
}