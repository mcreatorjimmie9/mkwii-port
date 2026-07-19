/* Function at 0x808D0F28, size=372 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 11 function(s) */

int FUN_808D0F28(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x808D0F30
    *(0x14 + r1) = r29; // stw @ 0x808D0F40
    *(0x10 + r1) = r28; // stw @ 0x808D0F44
    r28 = r3;
    r3 = *(0 + r4); // lwz @ 0x808D0F4C
    r3 = *(0 + r3); // lwz @ 0x808D0F50
    r3 = *(0x400 + r3); // lwz @ 0x808D0F54
    FUN_806709C8(); // bl 0x806709C8
    r30 = r3;
    /* li r3, 0x78 */ // 0x808D0F60
    FUN_808E4258(r3); // bl 0x808E4258
    r4 = *(0x424 + r3); // lwz @ 0x808D0F68
    if (!=) goto 0x0x808d0f7c;
    /* li r0, -1 */ // 0x808D0F74
    /* b 0x808d0f84 */ // 0x808D0F78
    r0 = *(0x20 + r3); // lwz @ 0x808D0F7C
    /* subf r0, r4, r0 */ // 0x808D0F80
    if (<=) goto 0x0x808d0f9c;
    if (<) goto 0x0x808d0f9c;
    if (<) goto 0x0x808d0fd4;
    r29 = r28 + 0x174; // 0x808D0F9C
    /* li r30, 0 */ // 0x808D0FA0
    /* lis r31, 0 */ // 0x808D0FA4
    r3 = r29 + 0x98; // 0x808D0FA8
    /* li r4, 1 */ // 0x808D0FAC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x808D0FB4
    /* li r4, 0 */ // 0x808D0FB8
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r30 = r30 + 1; // 0x808D0FC0
    r29 = r29 + 0x174; // 0x808D0FC4
    if (<) goto 0x0x808d0fa8;
    /* b 0x808d107c */ // 0x808D0FD0
    /* mulli r0, r30, 0x174 */ // 0x808D0FD4
    /* li r4, 1 */ // 0x808D0FD8
    r3 = r28 + r0; // 0x808D0FDC
    r29 = r3 + 0x20c; // 0x808D0FE0
    r3 = r29;
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x808D0FEC
    if (!=) goto 0x0x808d107c;
    r3 = r29;
    /* li r4, 1 */ // 0x808D0FFC
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x808D1004
    /* li r4, 1 */ // 0x808D1008
    /* lfs f1, 0(r31) */ // 0x808D100C
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r29 = r28 + 0x174; // 0x808D1014
    /* li r28, 0 */ // 0x808D1018
    if (==) goto 0x0x808d106c;
    r3 = r29 + 0x98; // 0x808D1024
    /* li r4, 1 */ // 0x808D1028
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x808D1030
    if (==) goto 0x0x808d1054;
    r3 = r29 + 0x98; // 0x808D103C
    /* li r4, 1 */ // 0x808D1040
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x808D1048
    if (!=) goto 0x0x808d106c;
    r3 = r29 + 0x98; // 0x808D1054
    /* li r4, 1 */ // 0x808D1058
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x808D1060
    /* li r4, 3 */ // 0x808D1064
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r28 = r28 + 1; // 0x808D106C
    r29 = r29 + 0x174; // 0x808D1070
    if (<) goto 0x0x808d101c;
    r0 = *(0x24 + r1); // lwz @ 0x808D107C
    r31 = *(0x1c + r1); // lwz @ 0x808D1080
    r30 = *(0x18 + r1); // lwz @ 0x808D1084
    r29 = *(0x14 + r1); // lwz @ 0x808D1088
    r28 = *(0x10 + r1); // lwz @ 0x808D108C
    return;
}