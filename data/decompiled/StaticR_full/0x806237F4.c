/* Function at 0x806237F4, size=388 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 17 function(s) */

int FUN_806237F4(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806237FC
    /* lfs f0, 0(r4) */ // 0x80623804
    *(0x2c + r1) = r31; // stw @ 0x8062380C
    *(0x28 + r1) = r30; // stw @ 0x80623810
    *(0x24 + r1) = r29; // stw @ 0x80623814
    r29 = r3;
    /* stfs f0, 8(r1) */ // 0x8062381C
    /* stfs f0, 0xc(r1) */ // 0x80623820
    /* stfs f0, 0x10(r1) */ // 0x80623824
    FUN_8061EEE0(); // bl 0x8061EEE0
    r3 = r29;
    FUN_806239F8(r3); // bl 0x806239F8
    r3 = r29;
    FUN_8061DF18(r3, r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x8062383C
    r12 = *(0x4c + r12); // lwz @ 0x80623840
    /* mtctr r12 */ // 0x80623844
    /* bctrl  */ // 0x80623848
    r3 = *(0x1c + r29); // lwz @ 0x8062384C
    FUN_80621DD8(); // bl 0x80621DD8
    r3 = *(0x10 + r29); // lwz @ 0x80623854
    r12 = *(0xc + r3); // lwz @ 0x80623858
    r12 = *(0x10 + r12); // lwz @ 0x8062385C
    /* mtctr r12 */ // 0x80623860
    /* bctrl  */ // 0x80623864
    r3 = *(0x14 + r29); // lwz @ 0x80623868
    FUN_805F70BC(); // bl 0x805F70BC
    r3 = *(0x18 + r29); // lwz @ 0x80623870
    FUN_805FD874(); // bl 0x805FD874
    r3 = *(0x20 + r29); // lwz @ 0x80623878
    FUN_807B5D80(); // bl 0x807B5D80
    r3 = r29;
    FUN_8061EE94(r3); // bl 0x8061EE94
    /* li r4, 0 */ // 0x80623888
    FUN_80645140(r3, r4); // bl 0x80645140
    r3 = r29;
    FUN_8061DF18(r3, r4, r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x80623898
    r12 = *(0x1c + r12); // lwz @ 0x8062389C
    /* mtctr r12 */ // 0x806238A0
    /* bctrl  */ // 0x806238A4
    /* li r30, 0 */ // 0x806238A8
    /* b 0x806238d0 */ // 0x806238AC
    r3 = r29;
    r4 = r30;
    FUN_8061DF30(r3, r4); // bl 0x8061DF30
    r12 = *(0xc + r3); // lwz @ 0x806238BC
    r12 = *(0x1c + r12); // lwz @ 0x806238C0
    /* mtctr r12 */ // 0x806238C4
    /* bctrl  */ // 0x806238C8
    r30 = r30 + 1; // 0x806238CC
    r3 = r29;
    FUN_8061DB58(r3); // bl 0x8061DB58
    /* clrlwi r0, r3, 0x10 */ // 0x806238D8
    if (<) goto 0x0x806238b0;
    /* li r30, 0 */ // 0x806238E4
    /* b 0x80623934 */ // 0x806238E8
    r3 = r29;
    r4 = r30;
    FUN_8061DF58(r3, r4); // bl 0x8061DF58
    r31 = r3;
    r3 = r29;
    FUN_8061DF18(r3, r4, r3); // bl 0x8061DF18
    r12 = *(0xc + r3); // lwz @ 0x80623904
    r4 = r31;
    r5 = r30;
    r12 = *(0x48 + r12); // lwz @ 0x80623910
    /* mtctr r12 */ // 0x80623914
    /* bctrl  */ // 0x80623918
    r12 = *(0xc + r31); // lwz @ 0x8062391C
    r3 = r31;
    r12 = *(0x1c + r12); // lwz @ 0x80623924
    /* mtctr r12 */ // 0x80623928
    /* bctrl  */ // 0x8062392C
    r30 = r30 + 1; // 0x80623930
    r3 = r29;
    FUN_8061DB68(r3); // bl 0x8061DB68
    /* clrlwi r0, r3, 0x10 */ // 0x8062393C
    if (<) goto 0x0x806238ec;
    r3 = r29;
    FUN_8061EE94(r3); // bl 0x8061EE94
    FUN_80644F14(r3); // bl 0x80644F14
    /* li r0, 0 */ // 0x80623954
    *(0x3c + r29) = r0; // stb @ 0x80623958
    r31 = *(0x2c + r1); // lwz @ 0x8062395C
    r30 = *(0x28 + r1); // lwz @ 0x80623960
    r29 = *(0x24 + r1); // lwz @ 0x80623964
    r0 = *(0x34 + r1); // lwz @ 0x80623968
    return;
}