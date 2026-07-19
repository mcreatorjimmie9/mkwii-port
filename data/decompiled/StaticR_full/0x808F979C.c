/* Function at 0x808F979C, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808F979C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x808F97B0
    *(0x14 + r1) = r29; // stw @ 0x808F97B4
    r4 = *(0x4e4 + r3); // lwz @ 0x808F97B8
    r0 = *(0x4e8 + r3); // lwz @ 0x808F97BC
    if (!=) goto 0x0x808f9830;
    /* lis r30, 0 */ // 0x808F97C8
    r3 = *(0 + r30); // lwz @ 0x808F97CC
    r0 = *(0xb74 + r3); // lwz @ 0x808F97D0
    if (==) goto 0x0x808f9830;
    if (==) goto 0x0x808f9830;
    /* li r29, 0 */ // 0x808F97E4
    /* b 0x808f9820 */ // 0x808F97E8
    /* clrlwi r4, r29, 0x18 */ // 0x808F97EC
    r5 = *(0 + r30); // lwz @ 0x808F97F0
    /* mulli r0, r4, 0xf0 */ // 0x808F97F4
    r3 = r31;
    /* li r6, 1 */ // 0x808F97FC
    /* li r7, 0 */ // 0x808F9800
    r5 = r5 + r0; // 0x808F9804
    /* li r8, 3 */ // 0x808F9808
    r0 = *(0xf4 + r5); // lwz @ 0x808F980C
    /* li r9, 0x14 */ // 0x808F9810
    /* clrlwi r5, r0, 0x18 */ // 0x808F9814
    FUN_808F9A64(r8, r9); // bl 0x808F9A64
    r29 = r29 + 1; // 0x808F981C
    r0 = *(0 + r31); // lbz @ 0x808F9820
    /* clrlwi r3, r29, 0x18 */ // 0x808F9824
    if (<) goto 0x0x808f97ec;
    /* li r29, 0 */ // 0x808F9830
    /* lis r30, 0 */ // 0x808F9834
    /* b 0x808f988c */ // 0x808F9838
    r3 = *(0 + r30); // lwz @ 0x808F983C
    r0 = r29 rlwinm 2; // rlwinm
    r3 = *(0xc + r3); // lwz @ 0x808F9844
    /* lwzx r3, r3, r0 */ // 0x808F9848
    r0 = *(0x38 + r3); // lwz @ 0x808F984C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x808F9850
    if (==) goto 0x0x808f9888;
    /* clrlwi r4, r29, 0x18 */ // 0x808F9858
    /* mulli r0, r4, 0x18 */ // 0x808F985C
    r3 = r31 + r0; // 0x808F9860
    r8 = *(0x3c4 + r3); // lbz @ 0x808F9864
    if (==) goto 0x0x808f9888;
    r3 = r31;
    /* li r5, 1 */ // 0x808F9874
    /* li r6, 1 */ // 0x808F9878
    /* li r7, 0 */ // 0x808F987C
    /* li r9, 0 */ // 0x808F9880
    FUN_808F9C40(r3, r5, r6, r7, r9); // bl 0x808F9C40
    r29 = r29 + 1; // 0x808F9888
    r0 = *(0 + r31); // lbz @ 0x808F988C
    /* clrlwi r3, r29, 0x18 */ // 0x808F9890
    if (<) goto 0x0x808f983c;
    r0 = *(0x24 + r1); // lwz @ 0x808F989C
    r31 = *(0x1c + r1); // lwz @ 0x808F98A0
    r30 = *(0x18 + r1); // lwz @ 0x808F98A4
    r29 = *(0x14 + r1); // lwz @ 0x808F98A8
    return;
}