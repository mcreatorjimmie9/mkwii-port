/* Function at 0x806606F4, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806606F4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r5 = *(0xc + r3); // lbz @ 0x806606FC
    r0 = *(0xc + r4); // lbz @ 0x80660704
    *(0x1c + r1) = r31; // stw @ 0x80660708
    *(0x18 + r1) = r30; // stw @ 0x80660710
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80660718
    r29 = r3;
    if (==) goto 0x0x80660738;
    /* li r3, 1 */ // 0x80660728
    if (!=) goto 0x0x806607a8;
    /* li r3, -1 */ // 0x80660730
    /* b 0x806607a8 */ // 0x80660734
    r3 = *(0 + r3); // lwz @ 0x80660738
    r3 = *(0xb8 + r3); // lwz @ 0x8066073C
    FUN_80662264(r3); // bl 0x80662264
    r4 = *(0 + r30); // lwz @ 0x80660744
    r31 = r3;
    r3 = *(0xb8 + r4); // lwz @ 0x8066074C
    FUN_80662264(); // bl 0x80662264
    if (==) goto 0x0x80660764;
    /* subf r3, r3, r31 */ // 0x8066075C
    /* b 0x806607a8 */ // 0x80660760
    r7 = *(0 + r29); // lwz @ 0x80660764
    r4 = *(0 + r30); // lwz @ 0x80660768
    r3 = *(0xa8 + r7); // lhz @ 0x8066076C
    r0 = *(0xa8 + r4); // lhz @ 0x80660770
    /* mulli r5, r3, 0x3c */ // 0x80660774
    r6 = *(0xaa + r7); // lbz @ 0x80660778
    r3 = *(0xaa + r4); // lbz @ 0x8066077C
    r7 = *(0xac + r7); // lhz @ 0x80660780
    /* mulli r0, r0, 0x3c */ // 0x80660784
    r4 = *(0xac + r4); // lhz @ 0x80660788
    r5 = r6 + r5; // 0x8066078C
    r0 = r3 + r0; // 0x80660790
    /* mulli r3, r5, 0x3e8 */ // 0x80660794
    /* mulli r0, r0, 0x3e8 */ // 0x80660798
    r3 = r7 + r3; // 0x8066079C
    r0 = r4 + r0; // 0x806607A0
    /* subf r3, r3, r0 */ // 0x806607A4
    r0 = *(0x24 + r1); // lwz @ 0x806607A8
    r31 = *(0x1c + r1); // lwz @ 0x806607AC
    r30 = *(0x18 + r1); // lwz @ 0x806607B0
    r29 = *(0x14 + r1); // lwz @ 0x806607B4
    return;
}