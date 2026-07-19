/* Function at 0x806A5DE8, size=516 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r26 */
/* Calls: 14 function(s) */

int FUN_806A5DE8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -224(r1) */
    /* saved r26 */
    /* lis r4, 0 */ // 0x806A5DF0
    *(0xe4 + r1) = r0; // stw @ 0x806A5DF4
    /* stmw r26, 0xc8(r1) */ // 0x806A5DF8
    r31 = r3;
    r4 = *(0 + r4); // lwz @ 0x806A5E00
    r4 = *(0 + r4); // lwz @ 0x806A5E04
    r0 = *(0 + r4); // lwz @ 0x806A5E08
    if (>=) goto 0x0x806a5e34;
    if (>=) goto 0x0x806a5e28;
    if (>=) goto 0x0x806a5e44;
    /* b 0x806a5e58 */ // 0x806A5E24
    if (>=) goto 0x0x806a5e50;
    /* b 0x806a5e58 */ // 0x806A5E30
    if (>=) goto 0x0x806a5e58;
    if (>=) goto 0x0x806a5e50;
    /* li r0, 1 */ // 0x806A5E44
    *(0x16a4 + r3) = r0; // stw @ 0x806A5E48
    /* b 0x806a5e58 */ // 0x806A5E4C
    /* li r0, 2 */ // 0x806A5E50
    *(0x16a4 + r3) = r0; // stw @ 0x806A5E54
    /* lis r4, 0 */ // 0x806A5E58
    r4 = *(0 + r4); // lwz @ 0x806A5E5C
    r4 = *(0 + r4); // lwz @ 0x806A5E60
    r4 = *(0 + r4); // lwz @ 0x806A5E64
    r0 = r4 + -0x58; // 0x806A5E68
    if (>) goto 0x0x806a5ea0;
    /* lis r4, 0 */ // 0x806A5E74
    /* slwi r0, r0, 2 */ // 0x806A5E78
    r4 = r4 + 0; // 0x806A5E7C
    /* lwzx r4, r4, r0 */ // 0x806A5E80
    /* mtctr r4 */ // 0x806A5E84
    /* bctr  */ // 0x806A5E88
    /* li r0, 0 */ // 0x806A5E8C
    *(0x169c + r3) = r0; // stw @ 0x806A5E90
    /* b 0x806a5ea0 */ // 0x806A5E94
    /* li r0, 1 */ // 0x806A5E98
    *(0x169c + r3) = r0; // stw @ 0x806A5E9C
    r12 = *(0x58 + r3); // lwzu @ 0x806A5EA0
    /* li r4, 0 */ // 0x806A5EA4
    /* li r5, 0 */ // 0x806A5EA8
    r12 = *(0x10 + r12); // lwz @ 0x806A5EAC
    /* mtctr r12 */ // 0x806A5EB0
    /* bctrl  */ // 0x806A5EB4
    r3 = r31;
    r4 = r31 + 0x58; // 0x806A5EBC
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0xf */ // 0x806A5EC8
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31;
    r5 = r31 + 0x6c; // 0x806A5ED4
    /* li r4, 0xc */ // 0x806A5ED8
    /* li r6, 0 */ // 0x806A5EDC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x6c; // 0x806A5EE4
    /* li r4, 0 */ // 0x806A5EE8
    FUN_808D5444(r4, r6, r3, r4); // bl 0x808D5444
    r0 = *(0x169c + r31); // lwz @ 0x806A5EF0
    if (==) goto 0x0x806a5f08;
    if (==) goto 0x0x806a5f1c;
    /* b 0x806a5f2c */ // 0x806A5F04
    r3 = r31 + 0x6c; // 0x806A5F08
    /* li r4, 0x1102 */ // 0x806A5F0C
    /* li r5, 0 */ // 0x806A5F10
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    /* b 0x806a5f2c */ // 0x806A5F18
    r3 = r31 + 0x6c; // 0x806A5F1C
    /* li r4, 0x1103 */ // 0x806A5F20
    /* li r5, 0 */ // 0x806A5F24
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    r3 = r31;
    r5 = r31 + 0x1e0; // 0x806A5F30
    /* li r4, 0xd */ // 0x806A5F34
    /* li r6, 0 */ // 0x806A5F38
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r31 + 0x1e0; // 0x806A5F40
    FUN_808D58CC(r5, r4, r6, r3); // bl 0x808D58CC
    r3 = r31;
    r5 = r31 + 0x354; // 0x806A5F4C
    /* li r4, 0xe */ // 0x806A5F50
    /* li r6, 0 */ // 0x806A5F54
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r31 + 0x354; // 0x806A5F60
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r4, 0 */ // 0x806A5F68
    r28 = r4 + 0; // 0x806A5F70
    /* li r7, 0 */ // 0x806A5F74
    r4 = r28 + 0x3c; // 0x806A5F78
    r5 = r28 + 0x44; // 0x806A5F7C
    r6 = r28 + 0x4c; // 0x806A5F80
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806A5F8C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    /* lis r29, 0 */ // 0x806A5F94
    r27 = r31 + 0x4c8; // 0x806A5F98
    /* li r26, 0 */ // 0x806A5F9C
    /* li r30, 0xc */ // 0x806A5FA0
    r29 = r29 + 0; // 0x806A5FA4
    r3 = r31;
    r4 = r26;
    r5 = r27;
    /* li r6, 0 */ // 0x806A5FB4
    FUN_80671C2C(r3, r4, r5, r6); // bl 0x80671C2C
    r4 = r27;
    FUN_8064E324(r5, r6, r4, r3); // bl 0x8064E324
    r4 = r29 + -4; // 0x806A5FCC
    /* mtctr r30 */ // 0x806A5FD0
    r3 = *(4 + r4); // lwz @ 0x806A5FD4
    r0 = *(8 + r4); // lwzu @ 0x806A5FD8
    *(4 + r5) = r3; // stw @ 0x806A5FDC
    *(8 + r5) = r0; // stwu @ 0x806A5FE0
    if (counter-- != 0) goto 0x0x806a5fd4;
    r6 = r26;
}