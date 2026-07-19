/* Function at 0x80670B10, size=192 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80670B10(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r31 = r6;
    r30 = r5;
    *(0xa4 + r1) = r29; // stw @ 0x80670B2C
    r29 = r4;
    *(0xa0 + r1) = r28; // stw @ 0x80670B34
    r28 = r3;
    r4 = r28;
    *(0x174 + r3) = r7; // stw @ 0x80670B40
    *(0x17c + r3) = r8; // stb @ 0x80670B44
    *(0x180 + r3) = r9; // stw @ 0x80670B48
    *(0x178 + r3) = r10; // stw @ 0x80670B4C
    FUN_8064E324(r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x80670B58
    /* li r0, 0xd */ // 0x80670B5C
    r3 = r3 + 0; // 0x80670B60
    r4 = r3 + -4; // 0x80670B68
    /* mtctr r0 */ // 0x80670B6C
    r3 = *(4 + r4); // lwz @ 0x80670B70
    r0 = *(8 + r4); // lwzu @ 0x80670B74
    *(4 + r5) = r3; // stw @ 0x80670B78
    *(8 + r5) = r0; // stwu @ 0x80670B7C
    if (counter-- != 0) goto 0x0x80670b70;
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_8064E36C(r4, r5, r6, r3, r7); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80670BA0
    FUN_8064E32C(r3, r7, r3, r4); // bl 0x8064E32C
    r3 = r28;
    FUN_80670D64(r3, r4, r3); // bl 0x80670D64
    r0 = *(0xb4 + r1); // lwz @ 0x80670BB0
    r31 = *(0xac + r1); // lwz @ 0x80670BB4
    r30 = *(0xa8 + r1); // lwz @ 0x80670BB8
    r29 = *(0xa4 + r1); // lwz @ 0x80670BBC
    r28 = *(0xa0 + r1); // lwz @ 0x80670BC0
    return;
}