/* Function at 0x806BD920, size=320 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806BD920(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806BD928
    *(0x18 + r1) = r30; // stw @ 0x806BD934
    *(0x14 + r1) = r29; // stw @ 0x806BD938
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806BD940
    r3 = *(0 + r3); // lwz @ 0x806BD944
    r30 = *(0x140 + r3); // lwz @ 0x806BD948
    if (!=) goto 0x0x806bd95c;
    /* li r30, 0 */ // 0x806BD954
    /* b 0x806bd9b0 */ // 0x806BD958
    /* lis r31, 0 */ // 0x806BD95C
    r31 = r31 + 0; // 0x806BD960
    if (==) goto 0x0x806bd9ac;
    r12 = *(0 + r30); // lwz @ 0x806BD968
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806BD970
    /* mtctr r12 */ // 0x806BD974
    /* bctrl  */ // 0x806BD978
    /* b 0x806bd994 */ // 0x806BD97C
    if (!=) goto 0x0x806bd990;
    /* li r0, 1 */ // 0x806BD988
    /* b 0x806bd9a0 */ // 0x806BD98C
    r3 = *(0 + r3); // lwz @ 0x806BD990
    if (!=) goto 0x0x806bd980;
    /* li r0, 0 */ // 0x806BD99C
    if (==) goto 0x0x806bd9ac;
    /* b 0x806bd9b0 */ // 0x806BD9A8
    /* li r30, 0 */ // 0x806BD9AC
    r12 = *(0 + r30); // lwz @ 0x806BD9B0
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806BD9B8
    /* mtctr r12 */ // 0x806BD9BC
    /* bctrl  */ // 0x806BD9C0
    r0 = *(0xdb4 + r29); // lwz @ 0x806BD9C4
    r3 = r30;
    /* li r5, 0 */ // 0x806BD9CC
    /* cntlzw r0, r0 */ // 0x806BD9D0
    /* srwi r4, r0, 5 */ // 0x806BD9D4
    r4 = r4 + 0xfb3; // 0x806BD9D8
    FUN_806B2C88(r3, r5, r4); // bl 0x806B2C88
    r3 = r30;
    /* li r4, 0 */ // 0x806BD9E4
    /* li r5, 0xfac */ // 0x806BD9E8
    /* li r6, 0 */ // 0x806BD9EC
    /* li r7, -1 */ // 0x806BD9F0
    /* li r8, 0 */ // 0x806BD9F4
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r30;
    /* li r4, 1 */ // 0x806BDA00
    /* li r5, 0xfad */ // 0x806BDA04
    /* li r6, 0 */ // 0x806BDA08
    /* li r7, -1 */ // 0x806BDA0C
    /* li r8, 0 */ // 0x806BDA10
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x806BDA18
    *(0x27c + r30) = r0; // stw @ 0x806BDA1C
    r3 = r29;
    /* li r4, 0x4e */ // 0x806BDA24
    r12 = *(0 + r29); // lwz @ 0x806BDA28
    /* li r5, 0 */ // 0x806BDA2C
    r12 = *(0x24 + r12); // lwz @ 0x806BDA30
    /* mtctr r12 */ // 0x806BDA34
    /* bctrl  */ // 0x806BDA38
    /* li r0, 4 */ // 0x806BDA3C
    *(0xdb8 + r29) = r0; // stw @ 0x806BDA40
    r31 = *(0x1c + r1); // lwz @ 0x806BDA44
    r30 = *(0x18 + r1); // lwz @ 0x806BDA48
    r29 = *(0x14 + r1); // lwz @ 0x806BDA4C
    r0 = *(0x24 + r1); // lwz @ 0x806BDA50
    return;
}