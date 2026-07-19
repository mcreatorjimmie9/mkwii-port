/* Function at 0x806C9F80, size=192 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_806C9F80(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* li r0, 0 */ // 0x806C9F8C
    *(0x4c + r1) = r31; // stw @ 0x806C9F90
    r31 = r3;
    r4 = r31;
    *(0x17e + r3) = r0; // stb @ 0x806C9F9C
    *(0x17c + r3) = r0; // sth @ 0x806C9FA0
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r10, 0 */ // 0x806C9FAC
    r7 = *(0 + r10); // lwzu @ 0x806C9FB0
    /* lis r6, 0 */ // 0x806C9FB4
    *(8 + r1) = r7; // stw @ 0x806C9FB8
    r9 = *(4 + r10); // lwz @ 0x806C9FBC
    r6 = r6 + 0; // 0x806C9FC0
    r8 = *(8 + r10); // lwz @ 0x806C9FC4
    r0 = *(0xc + r10); // lwz @ 0x806C9FCC
    r4 = r6 + 0x17; // 0x806C9FD0
    r5 = r6 + 0x1d; // 0x806C9FD4
    *(0xc + r1) = r9; // stw @ 0x806C9FD8
    r6 = r6 + 0x2d; // 0x806C9FDC
    *(0x10 + r1) = r8; // stw @ 0x806C9FE4
    *(0x14 + r1) = r0; // stw @ 0x806C9FE8
    FUN_8064E36C(r6, r7); // bl 0x8064E36C
    r3 = r31 + 0x98; // 0x806C9FF0
    /* li r4, 0 */ // 0x806C9FF4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806C9FFC
    /* li r4, 0 */ // 0x806CA000
    /* lfs f1, 0(r5) */ // 0x806CA004
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    /* li r5, -1 */ // 0x806CA00C
    /* li r0, 1 */ // 0x806CA010
    *(0x174 + r31) = r5; // stw @ 0x806CA014
    /* li r4, -1 */ // 0x806CA01C
    *(0x178 + r31) = r5; // stw @ 0x806CA020
    *(0x80 + r31) = r0; // stb @ 0x806CA024
    FUN_8064E32C(r3, r4); // bl 0x8064E32C
    r0 = *(0x54 + r1); // lwz @ 0x806CA02C
    r31 = *(0x4c + r1); // lwz @ 0x806CA030
    return;
}