/* Function at 0x806BD774, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806BD774(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BD77C
    *(0x18 + r1) = r30; // stw @ 0x806BD788
    *(0x14 + r1) = r29; // stw @ 0x806BD78C
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BD794
    r3 = *(0 + r3); // lwz @ 0x806BD798
    r30 = *(0x140 + r3); // lwz @ 0x806BD79C
    if (!=) goto 0x0x806bd7b0;
    /* li r30, 0 */ // 0x806BD7A8
    /* b 0x806bd804 */ // 0x806BD7AC
    /* lis r31, 0 */ // 0x806BD7B0
    r31 = r31 + 0; // 0x806BD7B4
    if (==) goto 0x0x806bd800;
    r12 = *(0 + r30); // lwz @ 0x806BD7BC
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BD7C4
    /* mtctr r12 */ // 0x806BD7C8
    /* bctrl  */ // 0x806BD7CC
    /* b 0x806bd7e8 */ // 0x806BD7D0
    if (!=) goto 0x0x806bd7e4;
    /* li r0, 1 */ // 0x806BD7DC
    /* b 0x806bd7f4 */ // 0x806BD7E0
    r3 = *(0 + r3); // lwz @ 0x806BD7E4
    if (!=) goto 0x0x806bd7d4;
    /* li r0, 0 */ // 0x806BD7F0
    if (==) goto 0x0x806bd800;
    /* b 0x806bd804 */ // 0x806BD7FC
    /* li r30, 0 */ // 0x806BD800
    r12 = *(0 + r30); // lwz @ 0x806BD804
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BD80C
    /* mtctr r12 */ // 0x806BD810
    /* bctrl  */ // 0x806BD814
    r0 = *(0xdb4 + r29); // lwz @ 0x806BD818
    r3 = r30;
    /* li r5, 0 */ // 0x806BD820
    /* cntlzw r0, r0 */ // 0x806BD824
    /* srwi r4, r0, 5 */ // 0x806BD828
    r4 = r4 + 0xfb3; // 0x806BD82C
    FUN_806B2C88(r3, r5, r4); // bl 0x806B2C88
    r3 = r30;
    /* li r4, 0 */ // 0x806BD838
    /* li r5, 0xfac */ // 0x806BD83C
    /* li r6, 0 */ // 0x806BD840
    /* li r7, -1 */ // 0x806BD844
    /* li r8, 0 */ // 0x806BD848
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r30;
    /* li r4, 1 */ // 0x806BD854
    /* li r5, 0xfad */ // 0x806BD858
    /* li r6, 0 */ // 0x806BD85C
    /* li r7, -1 */ // 0x806BD860
    /* li r8, 0 */ // 0x806BD864
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x806BD86C
    *(0x27c + r30) = r0; // stw @ 0x806BD870
    r3 = r29;
    /* li r4, 0x4e */ // 0x806BD878
    r12 = *(0 + r29); // lwz @ 0x806BD87C
    /* li r5, 0 */ // 0x806BD880
    r12 = *(0x24 + r12); // lwz @ 0x806BD884
    /* mtctr r12 */ // 0x806BD888
    /* bctrl  */ // 0x806BD88C
    /* li r0, 4 */ // 0x806BD890
    *(0xdb8 + r29) = r0; // stw @ 0x806BD894
    r31 = *(0x1c + r1); // lwz @ 0x806BD898
    r30 = *(0x18 + r1); // lwz @ 0x806BD89C
    r29 = *(0x14 + r1); // lwz @ 0x806BD8A0
    r0 = *(0x24 + r1); // lwz @ 0x806BD8A4
    return;
}