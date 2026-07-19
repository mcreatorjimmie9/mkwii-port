/* Function at 0x8081C8D4, size=208 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8081C8D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8081C8E8
    r30 = r3;
    *(0xc + r3) = r4; // stw @ 0x8081C8F0
    r4 = *(0x18 + r4); // lbz @ 0x8081C8F4
    *(0x10 + r3) = r4; // stb @ 0x8081C8F8
    FUN_8061DA4C(); // bl 0x8061DA4C
    r3 = r30;
    FUN_8061E170(r3); // bl 0x8061E170
    /* lfs f0, 4(r3) */ // 0x8081C908
    /* stfs f0, 0xd4(r30) */ // 0x8081C90C
    /* lfs f0, 0(r3) */ // 0x8081C910
    /* stfs f0, 0xd0(r30) */ // 0x8081C914
    r0 = *(0x1b + r31); // lbz @ 0x8081C918
    if (==) goto 0x0x8081c930;
    /* lis r4, 0 */ // 0x8081C924
    /* lfs f1, 0(r4) */ // 0x8081C928
    /* b 0x8081c938 */ // 0x8081C92C
    /* lis r4, 0 */ // 0x8081C930
    /* lfs f1, 0(r4) */ // 0x8081C934
    /* lfs f0, 0xd0(r30) */ // 0x8081C938
    /* li r7, 0x10 */ // 0x8081C93C
    /* li r6, 0x14 */ // 0x8081C940
    /* li r5, 4 */ // 0x8081C944
    /* fmuls f0, f0, f1 */ // 0x8081C948
    /* li r4, 0 */ // 0x8081C94C
    /* li r0, 8 */ // 0x8081C950
    /* stfs f0, 0xd8(r30) */ // 0x8081C954
    /* lfs f0, 8(r3) */ // 0x8081C958
    /* stfs f0, 0xdc(r30) */ // 0x8081C95C
    /* lfs f0, 0xc(r3) */ // 0x8081C960
    /* stfs f0, 0xe0(r30) */ // 0x8081C964
    *(0x14 + r30) = r7; // stw @ 0x8081C968
    *(0x18 + r30) = r6; // stw @ 0x8081C96C
    *(0x1c + r30) = r5; // stw @ 0x8081C970
    *(0x20 + r30) = r4; // stw @ 0x8081C974
    *(0x24 + r30) = r4; // stw @ 0x8081C978
    *(0x28 + r30) = r4; // stw @ 0x8081C97C
    *(0x50 + r30) = r4; // stw @ 0x8081C980
    *(0x54 + r30) = r4; // stw @ 0x8081C984
    *(0x17c + r30) = r0; // stw @ 0x8081C988
    r31 = *(0xc + r1); // lwz @ 0x8081C98C
    r30 = *(8 + r1); // lwz @ 0x8081C990
    r0 = *(0x14 + r1); // lwz @ 0x8081C994
    return;
}