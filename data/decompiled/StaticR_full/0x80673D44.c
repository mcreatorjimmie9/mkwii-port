/* Function at 0x80673D44, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 6 function(s) */

int FUN_80673D44(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80673D50
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80673D5C
    /* lis r4, 0 */ // 0x80673D60
    r3 = r3 + 0; // 0x80673D64
    *(0 + r31) = r3; // stw @ 0x80673D68
    /* lis r7, 0 */ // 0x80673D6C
    r4 = r4 + 0; // 0x80673D70
    r6 = *(0 + r7); // lwzu @ 0x80673D74
    r3 = r31 + 0x58; // 0x80673D78
    *(8 + r1) = r6; // stw @ 0x80673D7C
    r5 = *(4 + r7); // lwz @ 0x80673D80
    r0 = *(8 + r7); // lwz @ 0x80673D84
    *(0xc + r1) = r5; // stw @ 0x80673D88
    *(0x10 + r1) = r0; // stw @ 0x80673D8C
    *(0x44 + r31) = r4; // stw @ 0x80673D90
    *(0x48 + r31) = r31; // stw @ 0x80673D94
    *(0x4c + r31) = r6; // stw @ 0x80673D98
    *(0x50 + r31) = r5; // stw @ 0x80673D9C
    *(0x54 + r31) = r0; // stw @ 0x80673DA0
    FUN_8066880C(); // bl 0x8066880C
    r3 = r31 + 0x19c; // 0x80673DA8
    FUN_806A0418(r3); // bl 0x806A0418
    r3 = r31 + 0x310; // 0x80673DB0
    FUN_806A0418(r3, r3); // bl 0x806A0418
    r3 = r31 + 0x484; // 0x80673DB8
    FUN_806A0418(r3, r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80673DC0
    /* lis r5, 0 */ // 0x80673DC4
    r3 = r31 + 0x5f8; // 0x80673DC8
    /* li r6, 0x17c */ // 0x80673DCC
    r4 = r4 + 0; // 0x80673DD0
    r5 = r5 + 0; // 0x80673DD4
    /* li r7, 4 */ // 0x80673DD8
    FUN_805E3430(r3, r6, r4, r5, r7); // bl 0x805E3430
}