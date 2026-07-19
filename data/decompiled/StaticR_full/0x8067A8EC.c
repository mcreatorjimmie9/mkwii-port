/* Function at 0x8067A8EC, size=120 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8067A8EC(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x8067A8FC
    *(0x18 + r1) = r30; // stw @ 0x8067A900
    /* li r30, 0 */ // 0x8067A904
    *(0x14 + r1) = r29; // stw @ 0x8067A908
    r29 = r3;
    /* b 0x8067a93c */ // 0x8067A910
    r3 = *(0xc44 + r29); // lwz @ 0x8067A914
    /* lwzx r3, r3, r31 */ // 0x8067A918
    if (==) goto 0x0x8067a934;
    r12 = *(0 + r3); // lwz @ 0x8067A924
    r12 = *(0x48 + r12); // lwz @ 0x8067A928
    /* mtctr r12 */ // 0x8067A92C
    /* bctrl  */ // 0x8067A930
    r31 = r31 + 4; // 0x8067A934
    r30 = r30 + 1; // 0x8067A938
    r0 = *(0xc48 + r29); // lwz @ 0x8067A93C
    if (<) goto 0x0x8067a914;
    r0 = *(0x24 + r1); // lwz @ 0x8067A948
    r31 = *(0x1c + r1); // lwz @ 0x8067A94C
    r30 = *(0x18 + r1); // lwz @ 0x8067A950
    r29 = *(0x14 + r1); // lwz @ 0x8067A954
    return;
}