/* Function at 0x808D4FC0, size=260 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_808D4FC0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r3;
    *(0x14 + r1) = r29; // stw @ 0x808D4FD8
    *(0x10 + r1) = r28; // stw @ 0x808D4FDC
    r0 = *(0xc + r3); // lbz @ 0x808D4FE0
    if (==) goto 0x0x808d5060;
    r4 = *(8 + r3); // lwz @ 0x808D4FEC
    r3 = *(0x10 + r3); // lwz @ 0x808D4FF0
    r0 = *(0x20 + r4); // lwz @ 0x808D4FF4
    /* subf r3, r3, r0 */ // 0x808D4FF8
    /* slwi r0, r3, 3 */ // 0x808D4FFC
    /* subf r30, r3, r0 */ // 0x808D5000
    if (<=) goto 0x0x808d5010;
    /* li r30, 0xff */ // 0x808D500C
    if (>=) goto 0x0x808d501c;
    /* li r30, 1 */ // 0x808D5018
    /* li r28, 0 */ // 0x808D501C
    /* li r29, 0 */ // 0x808D5020
    /* b 0x808d503c */ // 0x808D5024
    r3 = *(4 + r31); // lwz @ 0x808D5028
    r28 = r28 + 1; // 0x808D502C
    /* lwzx r3, r3, r29 */ // 0x808D5030
    r29 = r29 + 4; // 0x808D5034
    *(0xb8 + r3) = r30; // stb @ 0x808D5038
    r12 = *(0 + r31); // lwz @ 0x808D503C
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808D5044
    /* mtctr r12 */ // 0x808D5048
    /* bctrl  */ // 0x808D504C
    /* clrlwi r0, r3, 0x18 */ // 0x808D5050
    if (<) goto 0x0x808d5028;
    /* b 0x808d50a4 */ // 0x808D505C
    /* li r28, 0 */ // 0x808D5060
    /* li r29, 0 */ // 0x808D5064
    /* li r30, 1 */ // 0x808D5068
    /* b 0x808d5084 */ // 0x808D506C
    r3 = *(4 + r31); // lwz @ 0x808D5070
    r28 = r28 + 1; // 0x808D5074
    /* lwzx r3, r3, r29 */ // 0x808D5078
    r29 = r29 + 4; // 0x808D507C
    *(0xb8 + r3) = r30; // stb @ 0x808D5080
    r12 = *(0 + r31); // lwz @ 0x808D5084
    r3 = r31;
    r12 = *(0x10 + r12); // lwz @ 0x808D508C
    /* mtctr r12 */ // 0x808D5090
    /* bctrl  */ // 0x808D5094
    /* clrlwi r0, r3, 0x18 */ // 0x808D5098
    if (<) goto 0x0x808d5070;
    r0 = *(0x24 + r1); // lwz @ 0x808D50A4
    r31 = *(0x1c + r1); // lwz @ 0x808D50A8
    r30 = *(0x18 + r1); // lwz @ 0x808D50AC
    r29 = *(0x14 + r1); // lwz @ 0x808D50B0
    r28 = *(0x10 + r1); // lwz @ 0x808D50B4
    return;
}