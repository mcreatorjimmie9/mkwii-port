/* Function at 0x808D5C18, size=276 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808D5C18(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    *(0x5c + r1) = r31; // stw @ 0x808D5C24
    r31 = r4;
    *(0x174 + r3) = r4; // stw @ 0x808D5C2C
    r4 = r3;
    *(0x17c + r3) = r5; // stw @ 0x808D5C34
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r12, 0 */ // 0x808D5C40
    r11 = *(0 + r12); // lwzu @ 0x808D5C44
    /* lis r3, 0 */ // 0x808D5C48
    *(8 + r1) = r11; // stw @ 0x808D5C4C
    r10 = *(4 + r12); // lwz @ 0x808D5C50
    r9 = *(8 + r12); // lwz @ 0x808D5C54
    r8 = *(0xc + r12); // lwz @ 0x808D5C58
    r7 = *(0x10 + r12); // lwz @ 0x808D5C5C
    r6 = *(0x14 + r12); // lwz @ 0x808D5C60
    r5 = *(0x18 + r12); // lwz @ 0x808D5C64
    r4 = *(0x1c + r12); // lwz @ 0x808D5C68
    r0 = *(0x20 + r12); // lwz @ 0x808D5C6C
    r3 = *(0 + r3); // lwz @ 0x808D5C70
    *(0xc + r1) = r10; // stw @ 0x808D5C74
    *(0x10 + r1) = r9; // stw @ 0x808D5C78
    *(0x14 + r1) = r8; // stw @ 0x808D5C7C
    *(0x18 + r1) = r7; // stw @ 0x808D5C80
    *(0x1c + r1) = r6; // stw @ 0x808D5C84
    *(0x20 + r1) = r5; // stw @ 0x808D5C88
    *(0x24 + r1) = r4; // stw @ 0x808D5C8C
    *(0x28 + r1) = r0; // stw @ 0x808D5C90
    r0 = *(0xb74 + r3); // lwz @ 0x808D5C94
    if (!=) goto 0x0x808d5cd8;
    /* lis r6, 0 */ // 0x808D5CA0
    r6 = r6 + 0; // 0x808D5CA8
    r4 = r6 + 0x17; // 0x808D5CB0
    r5 = r6 + 0x32; // 0x808D5CB4
    if (!=) goto 0x0x808d5cc0;
    r5 = r6 + 0x1f; // 0x808D5CBC
    /* lis r6, 0 */ // 0x808D5CC0
    r6 = r6 + 0; // 0x808D5CC8
    r6 = r6 + 0x44; // 0x808D5CCC
    FUN_8064E36C(r5, r6, r7, r6, r6); // bl 0x8064E36C
    /* b 0x808d5d0c */ // 0x808D5CD4
    /* lis r6, 0 */ // 0x808D5CD8
    r6 = r6 + 0; // 0x808D5CE0
    r4 = r6 + 0x59; // 0x808D5CE8
    r5 = r6 + 0x74; // 0x808D5CEC
    if (!=) goto 0x0x808d5cf8;
    r5 = r6 + 0x61; // 0x808D5CF4
    /* lis r6, 0 */ // 0x808D5CF8
    r6 = r6 + 0; // 0x808D5D00
    r6 = r6 + 0x86; // 0x808D5D04
    FUN_8064E36C(r5, r6, r7, r6, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808D5D10
    FUN_8064E32C(r6, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x64 + r1); // lwz @ 0x808D5D18
    r31 = *(0x5c + r1); // lwz @ 0x808D5D1C
    return;
}