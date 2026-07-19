/* Function at 0x806E1010, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_806E1010(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x806E1020
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x806E102C
    /* lis r4, 0 */ // 0x806E1030
    r3 = r3 + 0; // 0x806E1034
    *(0 + r30) = r3; // stw @ 0x806E1038
    /* lis r7, 0 */ // 0x806E103C
    r4 = r4 + 0; // 0x806E1040
    r6 = *(0 + r7); // lwzu @ 0x806E1044
    r3 = r30 + 0x58; // 0x806E1048
    *(8 + r1) = r6; // stw @ 0x806E104C
    r5 = *(4 + r7); // lwz @ 0x806E1050
    r0 = *(8 + r7); // lwz @ 0x806E1054
    *(0xc + r1) = r5; // stw @ 0x806E1058
    *(0x10 + r1) = r0; // stw @ 0x806E105C
    *(0x44 + r30) = r4; // stw @ 0x806E1060
    *(0x48 + r30) = r30; // stw @ 0x806E1064
    *(0x4c + r30) = r6; // stw @ 0x806E1068
    *(0x50 + r30) = r5; // stw @ 0x806E106C
    *(0x54 + r30) = r0; // stw @ 0x806E1070
    FUN_8066880C(); // bl 0x8066880C
    r3 = r30 + 0x19c; // 0x806E1078
    FUN_806A0418(r3); // bl 0x806A0418
    r31 = r30 + 0x310; // 0x806E1080
    r3 = r31;
    FUN_806A0418(r3, r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x806E108C
    /* lis r4, 0 */ // 0x806E1090
    r3 = r3 + 0; // 0x806E1094
    /* lis r5, 0 */ // 0x806E1098
    *(0 + r31) = r3; // stw @ 0x806E109C
    r3 = r30 + 0x484; // 0x806E10A0
    r4 = r4 + 0; // 0x806E10A4
    r5 = r5 + 0; // 0x806E10A8
    /* li r6, 0x174 */ // 0x806E10AC
    /* li r7, 0xc */ // 0x806E10B0
    FUN_805E3430(r3, r4, r5, r6, r7); // bl 0x805E3430
}