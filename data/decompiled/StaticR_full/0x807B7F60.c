/* Function at 0x807B7F60, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807B7F60(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x807B7F74
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807B7F7C
    r29 = r3;
    if (==) goto 0x0x807b8060;
    r0 = *(0x194 + r3); // lwz @ 0x807B7F88
    /* lis r4, 0 */ // 0x807B7F8C
    r4 = r4 + 0; // 0x807B7F90
    *(0x34 + r3) = r4; // stw @ 0x807B7F94
    if (==) goto 0x0x807b7fb8;
    r3 = r0;
    /* li r4, 1 */ // 0x807B7FA4
    r12 = *(0 + r3); // lwz @ 0x807B7FA8
    r12 = *(8 + r12); // lwz @ 0x807B7FAC
    /* mtctr r12 */ // 0x807B7FB0
    /* bctrl  */ // 0x807B7FB4
    r3 = *(0x198 + r29); // lwz @ 0x807B7FB8
    /* li r0, 0 */ // 0x807B7FBC
    *(0x194 + r29) = r0; // stw @ 0x807B7FC0
    if (==) goto 0x0x807b7fe0;
    r12 = *(0 + r3); // lwz @ 0x807B7FCC
    /* li r4, 1 */ // 0x807B7FD0
    r12 = *(8 + r12); // lwz @ 0x807B7FD4
    /* mtctr r12 */ // 0x807B7FD8
    /* bctrl  */ // 0x807B7FDC
    r3 = *(0x19c + r29); // lwz @ 0x807B7FE0
    /* li r0, 0 */ // 0x807B7FE4
    *(0x198 + r29) = r0; // stw @ 0x807B7FE8
    if (==) goto 0x0x807b8008;
    r12 = *(0 + r3); // lwz @ 0x807B7FF4
    /* li r4, 1 */ // 0x807B7FF8
    r12 = *(8 + r12); // lwz @ 0x807B7FFC
    /* mtctr r12 */ // 0x807B8000
    /* bctrl  */ // 0x807B8004
    r3 = *(0x1a0 + r29); // lwz @ 0x807B8008
    /* li r0, 0 */ // 0x807B800C
    *(0x19c + r29) = r0; // stw @ 0x807B8010
    if (==) goto 0x0x807b8030;
    r12 = *(0 + r3); // lwz @ 0x807B801C
    /* li r4, 1 */ // 0x807B8020
    r12 = *(8 + r12); // lwz @ 0x807B8024
    /* mtctr r12 */ // 0x807B8028
    /* bctrl  */ // 0x807B802C
    /* li r31, 0 */ // 0x807B8030
    *(0x1a0 + r29) = r31; // stw @ 0x807B8034
    r3 = *(0x1a4 + r29); // lwz @ 0x807B8038
    FUN_805E3430(); // bl 0x805E3430
    *(0x1a4 + r29) = r31; // stw @ 0x807B8040
    r3 = r29;
    /* li r4, 0 */ // 0x807B8048
    FUN_807B6DB4(r3, r4); // bl 0x807B6DB4
    if (<=) goto 0x0x807b8060;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
}