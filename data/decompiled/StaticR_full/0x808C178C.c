/* Function at 0x808C178C, size=164 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808C178C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x808C179C
    /* li r30, 0 */ // 0x808C17A4
    *(0x14 + r1) = r29; // stw @ 0x808C17A8
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x808C17B0
    r28 = r4;
    r3 = r30;
    FUN_8089DE64(r3); // bl 0x8089DE64
    if (!=) goto 0x0x808c1800;
    r3 = r30;
    r4 = r29;
    FUN_8089E2A8(r3, r4); // bl 0x8089E2A8
    if (==) goto 0x0x808c1800;
    FUN_808CFEE0(r3, r4); // bl 0x808CFEE0
    if (==) goto 0x0x808c17fc;
    r0 = r30 + -0x12; // 0x808C17E8
    if (<=) goto 0x0x808c17fc;
    if (>) goto 0x0x808c1800;
    r31 = r31 + 1; // 0x808C17FC
    r30 = r30 + 1; // 0x808C1800
    if (<) goto 0x0x808c17b8;
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x808C1810
    r30 = *(0x18 + r1); // lwz @ 0x808C1814
    r29 = *(0x14 + r1); // lwz @ 0x808C1818
    r28 = *(0x10 + r1); // lwz @ 0x808C181C
    r0 = *(0x24 + r1); // lwz @ 0x808C1820
    return;
}