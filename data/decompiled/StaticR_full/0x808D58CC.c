/* Function at 0x808D58CC, size=152 bytes */
/* Stack frame: 48 bytes */
/* Calls: 4 function(s) */

int FUN_808D58CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    r4 = r3;
    *(0x34 + r1) = r0; // stw @ 0x808D58D8
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x808D58E4
    r3 = *(0 + r3); // lwz @ 0x808D58E8
    r3 = *(0 + r3); // lwz @ 0x808D58EC
    r0 = *(0 + r3); // lwz @ 0x808D58F0
    if (<) goto 0x0x808d5928;
    if (>) goto 0x0x808d5928;
    /* lis r6, 0 */ // 0x808D5904
    r6 = r6 + 0; // 0x808D590C
    /* li r7, 0 */ // 0x808D5910
    r4 = r6 + 0x1f0; // 0x808D5914
    r5 = r6 + 0x1f7; // 0x808D5918
    r6 = r6 + 0x20e; // 0x808D591C
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* b 0x808d5948 */ // 0x808D5924
    /* lis r6, 0 */ // 0x808D5928
    r6 = r6 + 0; // 0x808D5930
    /* li r7, 0 */ // 0x808D5934
    r4 = r6 + 0x225; // 0x808D5938
    r5 = r6 + 0x228; // 0x808D593C
    r6 = r6 + 0x23f; // 0x808D5940
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808D594C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x34 + r1); // lwz @ 0x808D5954
    return;
}