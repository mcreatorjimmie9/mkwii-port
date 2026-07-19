/* Function at 0x80672F24, size=220 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_80672F24(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x24 + r1) = r29; // stw @ 0x80672F38
    r29 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80672F44
    /* lis r7, 0 */ // 0x80672F48
    r4 = r4 + 0; // 0x80672F4C
    *(0 + r29) = r4; // stw @ 0x80672F50
    /* lis r3, 0 */ // 0x80672F54
    r7 = r7 + 0; // 0x80672F58
    r10 = *(0 + r3); // lwzu @ 0x80672F5C
    /* lis r6, 0 */ // 0x80672F60
    *(0x14 + r1) = r10; // stw @ 0x80672F64
    r9 = *(4 + r3); // lwz @ 0x80672F68
    r8 = *(8 + r3); // lwz @ 0x80672F6C
    r3 = r29 + 0x6c; // 0x80672F70
    *(0x54 + r29) = r8; // stw @ 0x80672F74
    *(0x44 + r29) = r7; // stw @ 0x80672F78
    *(0x48 + r29) = r29; // stw @ 0x80672F7C
    *(0x4c + r29) = r10; // stw @ 0x80672F80
    *(0x50 + r29) = r9; // stw @ 0x80672F84
    r5 = *(0 + r6); // lwzu @ 0x80672F88
    *(0x18 + r1) = r9; // stw @ 0x80672F8C
    r4 = *(4 + r6); // lwz @ 0x80672F90
    r0 = *(8 + r6); // lwz @ 0x80672F94
    *(0x1c + r1) = r8; // stw @ 0x80672F98
    *(8 + r1) = r5; // stw @ 0x80672F9C
    *(0xc + r1) = r4; // stw @ 0x80672FA0
    *(0x10 + r1) = r0; // stw @ 0x80672FA4
    *(0x58 + r29) = r7; // stw @ 0x80672FA8
    *(0x5c + r29) = r29; // stw @ 0x80672FAC
    *(0x60 + r29) = r5; // stw @ 0x80672FB0
    *(0x64 + r29) = r4; // stw @ 0x80672FB4
    *(0x68 + r29) = r0; // stw @ 0x80672FB8
    FUN_8066880C(); // bl 0x8066880C
    r31 = r29 + 0x1b0; // 0x80672FC0
    r3 = r31;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80672FCC
    r3 = r29 + 0x324; // 0x80672FD0
    r4 = r4 + 0; // 0x80672FD4
    *(0 + r31) = r4; // stw @ 0x80672FD8
    FUN_806A0418(r4, r3, r4); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80672FE0
    /* lis r5, 0 */ // 0x80672FE4
    r3 = r29 + 0x498; // 0x80672FE8
    /* li r6, 0x178 */ // 0x80672FEC
    r4 = r4 + 0; // 0x80672FF0
    r5 = r5 + 0; // 0x80672FF4
    /* li r7, 4 */ // 0x80672FF8
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}