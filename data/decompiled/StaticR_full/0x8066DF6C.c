/* Function at 0x8066DF6C, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_8066DF6C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8066DF78
    /* slwi r31, r4, 2 */ // 0x8066DF7C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r7 = *(4 + r3); // lwz @ 0x8066DF90
    /* lwzx r3, r7, r31 */ // 0x8066DF94
    if (==) goto 0x0x8066dfc4;
    if (==) goto 0x0x8066dfb8;
    r12 = *(0 + r3); // lwz @ 0x8066DFA4
    /* li r4, 1 */ // 0x8066DFA8
    r12 = *(8 + r12); // lwz @ 0x8066DFAC
    /* mtctr r12 */ // 0x8066DFB0
    /* bctrl  */ // 0x8066DFB4
    r3 = *(4 + r27); // lwz @ 0x8066DFB8
    /* li r0, 0 */ // 0x8066DFBC
    /* stwx r0, r3, r31 */ // 0x8066DFC0
    /* lis r31, 0 */ // 0x8066DFC4
    r4 = r29;
    r3 = *(0 + r31); // lwz @ 0x8066DFCC
    r3 = r3 + 0x34; // 0x8066DFD0
    FUN_8067F430(r4, r3); // bl 0x8067F430
    if (==) goto 0x0x8066e060;
    r3 = *(0 + r31); // lwz @ 0x8066DFE0
    r4 = r29;
    r3 = r3 + 0x34; // 0x8066DFE8
    FUN_8067F3BC(r4, r3); // bl 0x8067F3BC
    r0 = r3 rlwinm 0; // rlwinm
    if (==) goto 0x0x8066e018;
    if (==) goto 0x0x8066e020;
    if (==) goto 0x0x8066e028;
    if (==) goto 0x0x8066e030;
    /* b 0x8066e060 */ // 0x8066E014
    /* li r4, 0 */ // 0x8066E018
    /* b 0x8066e03c */ // 0x8066E01C
    /* li r4, 1 */ // 0x8066E020
    /* b 0x8066e03c */ // 0x8066E024
    /* li r4, 2 */ // 0x8066E028
    /* b 0x8066e03c */ // 0x8066E02C
    /* li r4, 3 */ // 0x8066E030
    /* b 0x8066e03c */ // 0x8066E034
    /* b 0x8066e060 */ // 0x8066E038
    /* lis r3, 0 */ // 0x8066E03C
    r6 = *(0x2c + r27); // lwz @ 0x8066E040
    r3 = *(0 + r3); // lwz @ 0x8066E044
    r5 = r30;
    FUN_805B904C(r3, r5); // bl 0x805B904C
    r5 = r3;
    r3 = r27;
    r4 = r28;
    FUN_8066DBB8(r5, r5, r3, r4); // bl 0x8066DBB8
    r0 = *(0x24 + r1); // lwz @ 0x8066E064
}