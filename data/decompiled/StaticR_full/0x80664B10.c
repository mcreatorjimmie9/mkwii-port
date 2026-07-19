/* Function at 0x80664B10, size=228 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r21 */
/* Calls: 3 function(s) */

int FUN_80664B10(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -160(r1) */
    /* saved r21 */
    /* stmw r21, 0x74(r1) */ // 0x80664B1C
    r24 = r4;
    r4 = r3;
    r22 = r5;
    r23 = r6;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r21, 0 */ // 0x80664B38
    r5 = r22;
    r22 = *(0 + r21); // lwzu @ 0x80664B40
    r4 = r24;
    r6 = r23;
    *(8 + r1) = r22; // stw @ 0x80664B4C
    r23 = *(4 + r21); // lwz @ 0x80664B50
    r24 = *(8 + r21); // lwz @ 0x80664B58
    r25 = *(0xc + r21); // lwz @ 0x80664B60
    r26 = *(0x10 + r21); // lwz @ 0x80664B64
    r27 = *(0x14 + r21); // lwz @ 0x80664B68
    r28 = *(0x18 + r21); // lwz @ 0x80664B6C
    r29 = *(0x1c + r21); // lwz @ 0x80664B70
    r30 = *(0x20 + r21); // lwz @ 0x80664B74
    r31 = *(0x24 + r21); // lwz @ 0x80664B78
    r12 = *(0x28 + r21); // lwz @ 0x80664B7C
    r11 = *(0x2c + r21); // lwz @ 0x80664B80
    r10 = *(0x30 + r21); // lwz @ 0x80664B84
    r9 = *(0x34 + r21); // lwz @ 0x80664B88
    r8 = *(0x38 + r21); // lwz @ 0x80664B8C
    r0 = *(0x3c + r21); // lwz @ 0x80664B90
    *(0xc + r1) = r23; // stw @ 0x80664B94
    *(0x10 + r1) = r24; // stw @ 0x80664B98
    *(0x14 + r1) = r25; // stw @ 0x80664B9C
    *(0x18 + r1) = r26; // stw @ 0x80664BA0
    *(0x1c + r1) = r27; // stw @ 0x80664BA4
    *(0x20 + r1) = r28; // stw @ 0x80664BA8
    *(0x24 + r1) = r29; // stw @ 0x80664BAC
    *(0x28 + r1) = r30; // stw @ 0x80664BB0
    *(0x2c + r1) = r31; // stw @ 0x80664BB4
    *(0x30 + r1) = r12; // stw @ 0x80664BB8
    *(0x34 + r1) = r11; // stw @ 0x80664BBC
    *(0x38 + r1) = r10; // stw @ 0x80664BC0
    *(0x3c + r1) = r9; // stw @ 0x80664BC4
    *(0x40 + r1) = r8; // stw @ 0x80664BC8
    *(0x44 + r1) = r0; // stw @ 0x80664BCC
    FUN_8064E36C(); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80664BD8
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0xa4 + r1); // lwz @ 0x80664BE4
    return;
}