/* Function at 0x806AA7B8, size=508 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_806AA7B8(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806AA7C0
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x806AA7D0
    *(0x14 + r1) = r29; // stw @ 0x806AA7D4
    r3 = *(0 + r4); // lwz @ 0x806AA7D8
    FUN_806E69B4(); // bl 0x806E69B4
    if (==) goto 0x0x806aa96c;
    /* li r0, 1 */ // 0x806AA7E8
    *(0x44 + r31) = r0; // stw @ 0x806AA7EC
    /* lis r3, 0 */ // 0x806AA7F0
    r3 = *(0 + r3); // lwz @ 0x806AA7F4
    r3 = *(0 + r3); // lwz @ 0x806AA7F8
    r29 = *(0x228 + r3); // lwz @ 0x806AA7FC
    if (!=) goto 0x0x806aa810;
    /* li r29, 0 */ // 0x806AA808
    /* b 0x806aa864 */ // 0x806AA80C
    /* lis r30, 0 */ // 0x806AA810
    r30 = r30 + 0; // 0x806AA814
    if (==) goto 0x0x806aa860;
    r12 = *(0 + r29); // lwz @ 0x806AA81C
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806AA824
    /* mtctr r12 */ // 0x806AA828
    /* bctrl  */ // 0x806AA82C
    /* b 0x806aa848 */ // 0x806AA830
    if (!=) goto 0x0x806aa844;
    /* li r0, 1 */ // 0x806AA83C
    /* b 0x806aa854 */ // 0x806AA840
    r3 = *(0 + r3); // lwz @ 0x806AA844
    if (!=) goto 0x0x806aa834;
    /* li r0, 0 */ // 0x806AA850
    if (==) goto 0x0x806aa860;
    /* b 0x806aa864 */ // 0x806AA85C
    /* li r29, 0 */ // 0x806AA860
    if (==) goto 0x0x806aa874;
    /* li r0, 1 */ // 0x806AA86C
    *(0x54 + r29) = r0; // stb @ 0x806AA870
    /* lis r3, 0 */ // 0x806AA874
    r3 = *(0 + r3); // lwz @ 0x806AA878
    r3 = *(0 + r3); // lwz @ 0x806AA87C
    r29 = *(0x140 + r3); // lwz @ 0x806AA880
    if (!=) goto 0x0x806aa894;
    /* li r29, 0 */ // 0x806AA88C
    /* b 0x806aa8e8 */ // 0x806AA890
    /* lis r30, 0 */ // 0x806AA894
    r30 = r30 + 0; // 0x806AA898
    if (==) goto 0x0x806aa8e4;
    r12 = *(0 + r29); // lwz @ 0x806AA8A0
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806AA8A8
    /* mtctr r12 */ // 0x806AA8AC
    /* bctrl  */ // 0x806AA8B0
    /* b 0x806aa8cc */ // 0x806AA8B4
    if (!=) goto 0x0x806aa8c8;
    /* li r0, 1 */ // 0x806AA8C0
    /* b 0x806aa8d8 */ // 0x806AA8C4
    r3 = *(0 + r3); // lwz @ 0x806AA8C8
    if (!=) goto 0x0x806aa8b8;
    /* li r0, 0 */ // 0x806AA8D4
    if (==) goto 0x0x806aa8e4;
    /* b 0x806aa8e8 */ // 0x806AA8E0
    /* li r29, 0 */ // 0x806AA8E4
    r12 = *(0 + r29); // lwz @ 0x806AA8E8
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x806AA8F0
    /* mtctr r12 */ // 0x806AA8F4
    /* bctrl  */ // 0x806AA8F8
    r3 = r29;
    /* li r4, 0xfab */ // 0x806AA900
    /* li r5, 0 */ // 0x806AA904
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    r8 = r31 + 0x58; // 0x806AA910
    /* li r4, 0 */ // 0x806AA914
    /* li r5, 0xfac */ // 0x806AA918
    /* li r6, 0 */ // 0x806AA91C
    /* li r7, 1 */ // 0x806AA920
    FUN_806B2C90(r8, r4, r5, r6, r7); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x806AA92C
    /* li r5, 0xfad */ // 0x806AA930
    /* li r6, 0 */ // 0x806AA934
    /* li r7, -1 */ // 0x806AA938
    /* li r8, 0 */ // 0x806AA93C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x806AA944
    *(0x27c + r29) = r0; // stw @ 0x806AA948
    r3 = r31;
    /* li r4, 0x4e */ // 0x806AA950
    r12 = *(0 + r31); // lwz @ 0x806AA954
    /* li r5, 0 */ // 0x806AA958
    r12 = *(0x24 + r12); // lwz @ 0x806AA95C
    /* mtctr r12 */ // 0x806AA960
    /* bctrl  */ // 0x806AA964
    /* b 0x806aa998 */ // 0x806AA968
    /* li r0, 0 */ // 0x806AA96C
    *(0x44 + r31) = r0; // stw @ 0x806AA970
    /* lis r31, 0 */ // 0x806AA974
    /* li r4, 0x3f */ // 0x806AA978
    r3 = *(0 + r31); // lwz @ 0x806AA97C
    /* li r5, 1 */ // 0x806AA980
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x806AA988
    /* li r4, 0 */ // 0x806AA98C
    /* li r5, 0xff */ // 0x806AA990
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    r0 = *(0x24 + r1); // lwz @ 0x806AA998
    r31 = *(0x1c + r1); // lwz @ 0x806AA99C
    r30 = *(0x18 + r1); // lwz @ 0x806AA9A0
    r29 = *(0x14 + r1); // lwz @ 0x806AA9A4
    return;
}