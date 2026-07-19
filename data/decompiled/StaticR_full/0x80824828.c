/* Function at 0x80824828, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_80824828(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r31, 0 */ // 0x80824838
    r30 = r3 + 0x48; // 0x80824840
    *(0x14 + r1) = r29; // stw @ 0x80824844
    *(0x10 + r1) = r28; // stw @ 0x80824848
    r28 = r3;
    r3 = r30;
    FUN_80820E28(r3); // bl 0x80820E28
    r31 = r31 + 1; // 0x80824858
    r30 = r30 + 0x24; // 0x8082485C
    if (<) goto 0x0x80824850;
    /* lis r3, 0 */ // 0x80824868
    r0 = *(0 + r3); // lbz @ 0x8082486C
    if (==) goto 0x0x808248b4;
    /* li r29, 0 */ // 0x80824878
    /* li r30, 0 */ // 0x8082487C
    /* lis r31, 0 */ // 0x80824880
    /* b 0x808248a8 */ // 0x80824884
    r0 = *(0x14 + r28); // lwz @ 0x80824888
    /* li r4, 5 */ // 0x8082488C
    /* li r5, 0 */ // 0x80824890
    r3 = r0 + r30; // 0x80824894
    r3 = r3 + 0x88; // 0x80824898
    FUN_80841F80(r4, r5, r3); // bl 0x80841F80
    r30 = r30 + 0x248; // 0x808248A0
    r29 = r29 + 1; // 0x808248A4
    r0 = *(0 + r31); // lbz @ 0x808248A8
    if (<) goto 0x0x80824888;
    r3 = r28;
    FUN_80824EE4(r3); // bl 0x80824EE4
    FUN_80869E38(r3); // bl 0x80869E38
    FUN_8086D79C(r3); // bl 0x8086D79C
    r0 = *(0x24 + r1); // lwz @ 0x808248C4
    r31 = *(0x1c + r1); // lwz @ 0x808248C8
    r30 = *(0x18 + r1); // lwz @ 0x808248CC
    r29 = *(0x14 + r1); // lwz @ 0x808248D0
    r28 = *(0x10 + r1); // lwz @ 0x808248D4
    return;
}