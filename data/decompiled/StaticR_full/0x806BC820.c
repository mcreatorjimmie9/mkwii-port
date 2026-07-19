/* Function at 0x806BC820, size=568 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 25 function(s) */

int FUN_806BC820(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x806BC828
    /* li r5, 0 */ // 0x806BC82C
    *(0x14 + r1) = r0; // stw @ 0x806BC830
    *(0xc + r1) = r31; // stw @ 0x806BC834
    *(8 + r1) = r30; // stw @ 0x806BC838
    r30 = r3;
    r12 = *(0xbc + r3); // lwz @ 0x806BC840
    r12 = *(0x10 + r12); // lwz @ 0x806BC844
    /* mtctr r12 */ // 0x806BC848
    r3 = r3 + 0xbc; // 0x806BC84C
    /* bctrl  */ // 0x806BC850
    r3 = r30;
    r4 = r30 + 0xbc; // 0x806BC858
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30 + 0xbc; // 0x806BC860
    /* li r4, 2 */ // 0x806BC864
    FUN_8066A380(r3, r4, r3, r4); // bl 0x8066A380
    r3 = r30;
    /* li r4, 5 */ // 0x806BC870
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x2e0; // 0x806BC87C
    /* li r4, 0 */ // 0x806BC880
    /* li r6, 0 */ // 0x806BC884
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806BC88C
    r3 = r30 + 0x2e0; // 0x806BC890
    r4 = r31 + 0; // 0x806BC894
    /* li r7, 1 */ // 0x806BC898
    r5 = r4 + 7; // 0x806BC89C
    /* li r8, 0 */ // 0x806BC8A0
    r6 = r4 + 0x12; // 0x806BC8A4
    /* li r9, 0 */ // 0x806BC8A8
    FUN_80649914(r7, r5, r8, r6, r9); // bl 0x80649914
    /* li r0, 0 */ // 0x806BC8B0
    *(0x520 + r30) = r0; // stw @ 0x806BC8B4
    r3 = r30 + 0x2e0; // 0x806BC8B8
    r4 = r30 + 0x44; // 0x806BC8BC
    /* li r5, 0 */ // 0x806BC8C0
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x2e0; // 0x806BC8C8
    r4 = r30 + 0x94; // 0x806BC8CC
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0x534; // 0x806BC8D8
    /* li r4, 1 */ // 0x806BC8DC
    /* li r6, 0 */ // 0x806BC8E0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r31 = r31 + 0; // 0x806BC8E8
    r3 = r30 + 0x534; // 0x806BC8EC
    r4 = r31 + 0x1a; // 0x806BC8F0
    /* li r7, 1 */ // 0x806BC8F4
    r5 = r31 + 0x21; // 0x806BC8F8
    r6 = r31 + 0x2c; // 0x806BC8FC
    /* li r8, 0 */ // 0x806BC900
    /* li r9, 0 */ // 0x806BC904
    FUN_80649914(r7, r5, r6, r8, r9); // bl 0x80649914
    /* li r0, 1 */ // 0x806BC90C
    *(0x774 + r30) = r0; // stw @ 0x806BC910
    r3 = r30 + 0x534; // 0x806BC914
    r4 = r30 + 0x58; // 0x806BC918
    /* li r5, 0 */ // 0x806BC91C
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x534; // 0x806BC924
    r4 = r30 + 0x94; // 0x806BC928
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0x788; // 0x806BC934
    /* li r4, 2 */ // 0x806BC938
    /* li r6, 0 */ // 0x806BC93C
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x788; // 0x806BC944
    r4 = r31 + 0x32; // 0x806BC948
    r5 = r31 + 0x39; // 0x806BC94C
    r6 = r31 + 0x44; // 0x806BC950
    /* li r7, 1 */ // 0x806BC954
    /* li r8, 0 */ // 0x806BC958
    /* li r9, 0 */ // 0x806BC95C
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 2 */ // 0x806BC964
    *(0x9c8 + r30) = r0; // stw @ 0x806BC968
    r3 = r30 + 0x788; // 0x806BC96C
    r4 = r30 + 0x6c; // 0x806BC970
    /* li r5, 0 */ // 0x806BC974
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x788; // 0x806BC97C
    r4 = r30 + 0x94; // 0x806BC980
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0x9dc; // 0x806BC98C
    /* li r4, 3 */ // 0x806BC990
    /* li r6, 0 */ // 0x806BC994
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x9dc; // 0x806BC99C
    r4 = r31 + 0x4d; // 0x806BC9A0
    r5 = r31 + 0x54; // 0x806BC9A4
    r6 = r31 + 0x59; // 0x806BC9A8
    /* li r7, 1 */ // 0x806BC9AC
    /* li r8, 0 */ // 0x806BC9B0
    /* li r9, 1 */ // 0x806BC9B4
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    /* li r0, 3 */ // 0x806BC9BC
    *(0xc1c + r30) = r0; // stw @ 0x806BC9C0
    r3 = r30 + 0x9dc; // 0x806BC9C4
    r4 = r30 + 0x80; // 0x806BC9C8
    /* li r5, 0 */ // 0x806BC9CC
    FUN_80649EC4(r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x9dc; // 0x806BC9D4
    r4 = r30 + 0x94; // 0x806BC9D8
    FUN_80649EDC(r4, r5, r3, r4); // bl 0x80649EDC
    r3 = r30;
    r5 = r30 + 0xc40; // 0x806BC9E4
    /* li r4, 4 */ // 0x806BC9E8
    /* li r6, 0 */ // 0x806BC9EC
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0xc40; // 0x806BC9F4
    FUN_808D58CC(r5, r4, r6, r3); // bl 0x808D58CC
    r3 = r30 + 0xbc; // 0x806BC9FC
    r5 = r30 + 0xa8; // 0x806BCA00
    /* li r4, 1 */ // 0x806BCA04
    /* li r6, 0 */ // 0x806BCA08
    /* li r7, 0 */ // 0x806BCA0C
    FUN_8066A350(r3, r5, r4, r6, r7); // bl 0x8066A350
    r3 = r30 + 0x2e0; // 0x806BCA14
    /* li r4, 0 */ // 0x806BCA18
    FUN_80649EEC(r6, r7, r3, r4); // bl 0x80649EEC
    r3 = r30 + 0xc40; // 0x806BCA20
    /* li r4, 0x1112 */ // 0x806BCA24
    /* li r5, 0 */ // 0x806BCA28
    FUN_808D5A00(r4, r3, r4, r5); // bl 0x808D5A00
    /* lis r3, 0 */ // 0x806BCA30
    r3 = *(0 + r3); // lwz @ 0x806BCA34
    r3 = *(0 + r3); // lwz @ 0x806BCA38
    FUN_80685EA4(r5, r3); // bl 0x80685EA4
    r0 = *(0x14 + r1); // lwz @ 0x806BCA40
    r31 = *(0xc + r1); // lwz @ 0x806BCA44
    r30 = *(8 + r1); // lwz @ 0x806BCA48
    return;
}