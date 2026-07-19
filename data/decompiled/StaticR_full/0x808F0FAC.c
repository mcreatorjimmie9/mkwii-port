/* Function at 0x808F0FAC, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_808F0FAC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x808F0FB4
    *(0x18 + r1) = r30; // stw @ 0x808F0FC0
    *(0x14 + r1) = r29; // stw @ 0x808F0FC4
    r7 = *(0 + r4); // lwz @ 0x808F0FC8
    r6 = *(0x36 + r7); // lha @ 0x808F0FCC
    if (<) goto 0x0x808f0ff4;
    /* lis r4, 1 */ // 0x808F0FD8
    /* clrlwi r5, r6, 0x18 */ // 0x808F0FDC
    r0 = r4 + -0x6c10; // 0x808F0FE0
    r0 = r0 * r5; // 0x808F0FE4
    r4 = r7 + r0; // 0x808F0FE8
    r31 = r4 + 0x38; // 0x808F0FEC
    /* b 0x808f0ff8 */ // 0x808F0FF0
    /* li r31, 0 */ // 0x808F0FF4
    if (>) goto 0x0x808f27b4;
    /* lis r4, 0 */ // 0x808F1000
    /* slwi r0, r3, 2 */ // 0x808F1004
    r4 = r4 + 0; // 0x808F1008
    /* lwzx r4, r4, r0 */ // 0x808F100C
    /* mtctr r4 */ // 0x808F1010
    /* bctr  */ // 0x808F1014
    r0 = r3 + -3; // 0x808F1018
    /* li r6, 0 */ // 0x808F101C
    /* cntlzw r0, r0 */ // 0x808F1020
    /* srwi r30, r0, 5 */ // 0x808F1024
    /* subf r29, r30, r3 */ // 0x808F1028
    /* li r3, 2 */ // 0x808F102C
    r4 = r29;
    r5 = r30;
}