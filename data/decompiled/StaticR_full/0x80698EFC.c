/* Function at 0x80698EFC, size=276 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80698EFC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r0, 0 */ // 0x80698F08
    *(0xc + r1) = r31; // stw @ 0x80698F0C
    r31 = r3;
    *(8 + r1) = r30; // stw @ 0x80698F14
    r4 = *(0 + r3); // lwz @ 0x80698F18
    *(0x24 + r3) = r0; // stw @ 0x80698F1C
    if (==) goto 0x0x80698f34;
    r3 = r4;
    FUN_806860B4(r3); // bl 0x806860B4
    *(0x24 + r31) = r3; // stw @ 0x80698F30
    r3 = *(0x90 + r31); // lwz @ 0x80698F34
    FUN_80684590(r3); // bl 0x80684590
    if (==) goto 0x0x80698f50;
    r0 = *(0x24 + r31); // lwz @ 0x80698F44
    r0 = r0 | 2; // 0x80698F48
    *(0x24 + r31) = r0; // stw @ 0x80698F4C
    /* lis r3, 0 */ // 0x80698F50
    r0 = *(0x24 + r31); // lwz @ 0x80698F54
    r3 = *(0 + r3); // lwz @ 0x80698F58
    /* clrlwi r0, r0, 0x1f */ // 0x80698F5C
    r3 = *(0x54 + r3); // lwz @ 0x80698F60
    /* xori r30, r0, 1 */ // 0x80698F64
    r3 = *(0x24 + r3); // lwz @ 0x80698F68
    r12 = *(0 + r3); // lwz @ 0x80698F6C
    r12 = *(0xc + r12); // lwz @ 0x80698F70
    /* mtctr r12 */ // 0x80698F74
    /* bctrl  */ // 0x80698F78
    /* subfic r4, r3, 1 */ // 0x80698F7C
    r0 = r3 + -1; // 0x80698F80
    r3 = r4 | r0; // 0x80698F84
    r0 = *(0x30 + r31); // lwz @ 0x80698F88
    /* srwi r4, r3, 0x1f */ // 0x80698F8C
    /* xori r4, r4, 1 */ // 0x80698F90
    /* lis r3, 0 */ // 0x80698F94
    r6 = r30 & r4; // 0x80698F98
    /* cntlzw r0, r0 */ // 0x80698F9C
    /* neg r5, r6 */ // 0x80698FA0
    r3 = *(0 + r3); // lwz @ 0x80698FA4
    r5 = r5 | r6; // 0x80698FA8
    /* srwi r4, r0, 5 */ // 0x80698FAC
    /* srwi r5, r5, 0x1f */ // 0x80698FB0
    r0 = *(0x4d + r3); // lbz @ 0x80698FB4
    r5 = r5 & r4; // 0x80698FB8
    /* neg r4, r5 */ // 0x80698FBC
    r4 = r4 | r5; // 0x80698FC0
    /* srwi r4, r4, 0x1f */ // 0x80698FC4
    if (==) goto 0x0x80698fd4;
    *(0x4d + r3) = r4; // stb @ 0x80698FD0
    r0 = *(0x24 + r31); // lwz @ 0x80698FD4
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x80698FD8
    if (==) goto 0x0x80698ff8;
    r3 = *(0xc + r31); // lwz @ 0x80698FE0
    FUN_80697D6C(); // bl 0x80697D6C
    if (!=) goto 0x0x80698ff8;
    /* li r0, 5 */ // 0x80698FF0
    *(0xc + r31) = r0; // stw @ 0x80698FF4
    r0 = *(0x14 + r1); // lwz @ 0x80698FF8
    r31 = *(0xc + r1); // lwz @ 0x80698FFC
    r30 = *(8 + r1); // lwz @ 0x80699000
    return;
}