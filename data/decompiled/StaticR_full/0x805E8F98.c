/* Function at 0x805E8F98, size=256 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805E8F98(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x805E8FAC
    *(0x14 + r1) = r29; // stw @ 0x805E8FB0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805E8FB8
    r28 = r5;
    r31 = *(0xc + r3); // lwz @ 0x805E8FC0
    if (==) goto 0x0x805e8ffc;
    /* lis r4, 0 */ // 0x805E8FCC
    r3 = r31;
    r4 = r4 + 0; // 0x805E8FD4
    *(0xc + r1) = r4; // stw @ 0x805E8FD8
    r12 = *(0 + r31); // lwz @ 0x805E8FE0
    r12 = *(8 + r12); // lwz @ 0x805E8FE4
    /* mtctr r12 */ // 0x805E8FE8
    /* bctrl  */ // 0x805E8FEC
    if (==) goto 0x0x805e8ffc;
    /* li r30, 1 */ // 0x805E8FF8
    if (==) goto 0x0x805e9008;
    /* b 0x805e900c */ // 0x805E9004
    /* li r31, 0 */ // 0x805E9008
    r30 = *(0xc + r29); // lwz @ 0x805E900C
    /* li r29, 0 */ // 0x805E9010
    if (==) goto 0x0x805e904c;
    /* lis r4, 0 */ // 0x805E901C
    r3 = r30;
    r4 = r4 + 0; // 0x805E9024
    *(8 + r1) = r4; // stw @ 0x805E9028
    r12 = *(0 + r30); // lwz @ 0x805E9030
    r12 = *(8 + r12); // lwz @ 0x805E9034
    /* mtctr r12 */ // 0x805E9038
    /* bctrl  */ // 0x805E903C
    if (==) goto 0x0x805e904c;
    /* li r29, 1 */ // 0x805E9048
    r3 = r31;
    r4 = r28;
    if (==) goto 0x0x805e9064;
    r5 = r30;
    /* b 0x805e9068 */ // 0x805E9060
    /* li r5, 0 */ // 0x805E9064
    r12 = *(0 + r3); // lwz @ 0x805E9068
    r12 = *(0x3c + r12); // lwz @ 0x805E906C
    /* mtctr r12 */ // 0x805E9070
    /* bctrl  */ // 0x805E9074
    r0 = *(0x24 + r1); // lwz @ 0x805E9078
    r31 = *(0x1c + r1); // lwz @ 0x805E907C
    r30 = *(0x18 + r1); // lwz @ 0x805E9080
    r29 = *(0x14 + r1); // lwz @ 0x805E9084
    r28 = *(0x10 + r1); // lwz @ 0x805E9088
    return;
}