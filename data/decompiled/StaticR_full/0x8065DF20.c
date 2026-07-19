/* Function at 0x8065DF20, size=500 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 7 function(s) */

int FUN_8065DF20(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x8065DF28
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8065DF38
    *(0x14 + r1) = r29; // stw @ 0x8065DF3C
    *(0x10 + r1) = r28; // stw @ 0x8065DF40
    r28 = r4;
    r3 = *(0 + r5); // lwz @ 0x8065DF48
    r3 = *(0 + r3); // lwz @ 0x8065DF4C
    r29 = *(0x264 + r3); // lwz @ 0x8065DF50
    if (!=) goto 0x0x8065df64;
    /* li r29, 0 */ // 0x8065DF5C
    /* b 0x8065dfb8 */ // 0x8065DF60
    /* lis r30, 0 */ // 0x8065DF64
    r30 = r30 + 0; // 0x8065DF68
    if (==) goto 0x0x8065dfb4;
    r12 = *(0 + r29); // lwz @ 0x8065DF70
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8065DF78
    /* mtctr r12 */ // 0x8065DF7C
    /* bctrl  */ // 0x8065DF80
    /* b 0x8065df9c */ // 0x8065DF84
    if (!=) goto 0x0x8065df98;
    /* li r0, 1 */ // 0x8065DF90
    /* b 0x8065dfa8 */ // 0x8065DF94
    r3 = *(0 + r3); // lwz @ 0x8065DF98
    if (!=) goto 0x0x8065df88;
    /* li r0, 0 */ // 0x8065DFA4
    if (==) goto 0x0x8065dfb4;
    /* b 0x8065dfb8 */ // 0x8065DFB0
    /* li r29, 0 */ // 0x8065DFB4
    /* lis r30, 0 */ // 0x8065DFB8
    r4 = *(0x1108 + r29); // lwz @ 0x8065DFBC
    r3 = *(0 + r30); // lwz @ 0x8065DFC0
    r3 = *(0 + r3); // lwz @ 0x8065DFC4
    r3 = *(0x404 + r3); // lwz @ 0x8065DFC8
    FUN_80659884(); // bl 0x80659884
    if (==) goto 0x0x8065e0d8;
    r3 = *(0 + r30); // lwz @ 0x8065DFD8
    r3 = *(0 + r3); // lwz @ 0x8065DFDC
    r29 = *(0x140 + r3); // lwz @ 0x8065DFE0
    if (!=) goto 0x0x8065dff4;
    /* li r29, 0 */ // 0x8065DFEC
    /* b 0x8065e048 */ // 0x8065DFF0
    /* lis r30, 0 */ // 0x8065DFF4
    r30 = r30 + 0; // 0x8065DFF8
    if (==) goto 0x0x8065e044;
    r12 = *(0 + r29); // lwz @ 0x8065E000
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x8065E008
    /* mtctr r12 */ // 0x8065E00C
    /* bctrl  */ // 0x8065E010
    /* b 0x8065e02c */ // 0x8065E014
    if (!=) goto 0x0x8065e028;
    /* li r0, 1 */ // 0x8065E020
    /* b 0x8065e038 */ // 0x8065E024
    r3 = *(0 + r3); // lwz @ 0x8065E028
    if (!=) goto 0x0x8065e018;
    /* li r0, 0 */ // 0x8065E034
    if (==) goto 0x0x8065e044;
    /* b 0x8065e048 */ // 0x8065E040
    /* li r29, 0 */ // 0x8065E044
    r12 = *(0 + r29); // lwz @ 0x8065E048
    r3 = r29;
    r12 = *(0x64 + r12); // lwz @ 0x8065E050
    /* mtctr r12 */ // 0x8065E054
    /* bctrl  */ // 0x8065E058
    r3 = r29;
    /* li r4, 0x1461 */ // 0x8065E060
    /* li r5, 0 */ // 0x8065E064
    FUN_806B2C88(r3, r4, r5); // bl 0x806B2C88
    r3 = r29;
    /* li r4, 0 */ // 0x8065E070
    /* li r5, 0x7d2 */ // 0x8065E074
    /* li r6, 0 */ // 0x8065E078
    /* li r7, -1 */ // 0x8065E07C
    /* li r8, 0 */ // 0x8065E080
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    r3 = r29;
    /* li r4, 1 */ // 0x8065E08C
    /* li r5, 0x7d3 */ // 0x8065E090
    /* li r6, 0 */ // 0x8065E094
    /* li r7, -1 */ // 0x8065E098
    /* li r8, 0 */ // 0x8065E09C
    FUN_806B2C90(r4, r5, r6, r7, r8); // bl 0x806B2C90
    /* li r0, 1 */ // 0x8065E0A4
    *(0x27c + r29) = r0; // stw @ 0x8065E0A8
    r3 = r31;
    /* li r4, 0x4e */ // 0x8065E0B0
    r12 = *(0 + r31); // lwz @ 0x8065E0B4
    /* li r5, 0 */ // 0x8065E0B8
    r12 = *(0x24 + r12); // lwz @ 0x8065E0BC
    /* mtctr r12 */ // 0x8065E0C0
    /* bctrl  */ // 0x8065E0C4
    r3 = r28;
    /* li r4, 0 */ // 0x8065E0CC
    FUN_8064A82C(r3, r4); // bl 0x8064A82C
    /* b 0x8065e0f4 */ // 0x8065E0D4
    /* li r0, 0x99 */ // 0x8065E0D8
    *(0xb24 + r31) = r0; // stw @ 0x8065E0DC
    r3 = r28;
    FUN_8064A384(r3); // bl 0x8064A384
    r3 = r31;
    /* li r4, 0 */ // 0x8065E0EC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x8065E0F4
    r31 = *(0x1c + r1); // lwz @ 0x8065E0F8
    r30 = *(0x18 + r1); // lwz @ 0x8065E0FC
    r29 = *(0x14 + r1); // lwz @ 0x8065E100
    r28 = *(0x10 + r1); // lwz @ 0x8065E104
    return;
}