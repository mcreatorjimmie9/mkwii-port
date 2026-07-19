/* Function at 0x806B5808, size=160 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_806B5808(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -208(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0xc8 + r1) = r30; // stw @ 0x806B5820
    r30 = r5;
    *(0xc4 + r1) = r29; // stw @ 0x806B5828
    r29 = r6;
    *(0xc0 + r1) = r28; // stw @ 0x806B5830
    r28 = r4;
    r4 = r31;
    FUN_8064E324(r4); // bl 0x8064E324
    /* lis r3, 0 */ // 0x806B5840
    r3 = r3 + 0; // 0x806B5848
    r30 = r3 + 0xba; // 0x806B584C
    if (==) goto 0x0x806b5858;
    r30 = r3 + 0xad; // 0x806B5854
    /* lis r4, 0 */ // 0x806B5858
    r4 = r4 + 0; // 0x806B5860
    r6 = r28;
    r5 = r4 + 0xc8; // 0x806B5868
    /* li r4, 0xf */ // 0x806B5870
    /* li r0, 0 */ // 0x806B5874
    if (==) goto 0x0x806b5888;
    if (>=) goto 0x0x806b5888;
    /* li r0, 1 */ // 0x806B5884
    /* lis r8, 0 */ // 0x806B5888
    r8 = r8 + 0; // 0x806B5890
    r7 = r8 + 0xd2; // 0x806B5894
    if (==) goto 0x0x806b58a0;
    r7 = r8 + 0xd0; // 0x806B589C
    /* crclr cr1eq */ // 0x806B58A0
    FUN_805E3430(r8, r7, r7); // bl 0x805E3430
}