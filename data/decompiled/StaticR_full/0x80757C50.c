/* Function at 0x80757C50, size=144 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

void FUN_80757C50(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r7, 0 */ // 0x80757C58
    /* lis r11, 0 */ // 0x80757C5C
    *(0x44 + r1) = r0; // stw @ 0x80757C60
    /* li r6, 4 */ // 0x80757C6C
    *(0x3c + r1) = r31; // stw @ 0x80757C70
    *(0x38 + r1) = r30; // stw @ 0x80757C74
    *(0x34 + r1) = r29; // stw @ 0x80757C78
    r29 = *(0 + r7); // lwzu @ 0x80757C7C
    r10 = *(0 + r11); // lwzu @ 0x80757C80
    r30 = *(4 + r7); // lwz @ 0x80757C84
    r31 = *(8 + r7); // lwz @ 0x80757C88
    r12 = *(0xc + r7); // lwz @ 0x80757C8C
    /* li r7, 0 */ // 0x80757C90
    r9 = *(4 + r11); // lwz @ 0x80757C94
    r8 = *(8 + r11); // lwz @ 0x80757C98
    r0 = *(0xc + r11); // lwz @ 0x80757C9C
    *(0x18 + r1) = r29; // stw @ 0x80757CA0
    *(0x1c + r1) = r30; // stw @ 0x80757CA4
    *(0x20 + r1) = r31; // stw @ 0x80757CA8
    *(0x24 + r1) = r12; // stw @ 0x80757CAC
    *(8 + r1) = r10; // stw @ 0x80757CB0
    *(0xc + r1) = r9; // stw @ 0x80757CB4
    *(0x10 + r1) = r8; // stw @ 0x80757CB8
    *(0x14 + r1) = r0; // stw @ 0x80757CBC
    FUN_808A1444(); // bl 0x808A1444
    r0 = *(0x44 + r1); // lwz @ 0x80757CC4
    r31 = *(0x3c + r1); // lwz @ 0x80757CC8
    r30 = *(0x38 + r1); // lwz @ 0x80757CCC
    r29 = *(0x34 + r1); // lwz @ 0x80757CD0
    return;
}