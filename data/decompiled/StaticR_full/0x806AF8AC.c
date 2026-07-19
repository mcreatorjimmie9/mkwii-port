/* Function at 0x806AF8AC, size=404 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30 */
/* Calls: 14 function(s) */

int FUN_806AF8AC(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x806AF8B4
    /* li r5, 0 */ // 0x806AF8B8
    *(0x44 + r1) = r0; // stw @ 0x806AF8BC
    /* li r0, -1 */ // 0x806AF8C0
    *(0x3c + r1) = r31; // stw @ 0x806AF8C4
    *(0x38 + r1) = r30; // stw @ 0x806AF8C8
    r30 = r3;
    *(0x6c + r3) = r0; // stw @ 0x806AF8D0
    r4 = *(0 + r4); // lwz @ 0x806AF8D4
    r4 = *(0 + r4); // lwz @ 0x806AF8D8
    r0 = *(0 + r4); // lwz @ 0x806AF8DC
    if (==) goto 0x0x806af904;
    if (==) goto 0x0x806af904;
    if (==) goto 0x0x806af90c;
    if (==) goto 0x0x806af90c;
    /* b 0x806af910 */ // 0x806AF900
    /* li r5, 0 */ // 0x806AF904
    /* b 0x806af910 */ // 0x806AF908
    /* li r5, 1 */ // 0x806AF90C
    r12 = *(0x70 + r3); // lwzu @ 0x806AF910
    /* li r4, 1 */ // 0x806AF914
    r12 = *(0x10 + r12); // lwz @ 0x806AF918
    /* mtctr r12 */ // 0x806AF91C
    /* bctrl  */ // 0x806AF920
    r3 = r30 + 0x70; // 0x806AF924
    /* li r4, 2 */ // 0x806AF928
    FUN_8066A380(r3, r4); // bl 0x8066A380
    r3 = r30;
    r4 = r30 + 0x70; // 0x806AF934
    FUN_80671C34(r3, r4, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 3 */ // 0x806AF940
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x294; // 0x806AF94C
    /* li r4, 0 */ // 0x806AF950
    /* li r6, 0 */ // 0x806AF954
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r4 = r30 + 0x294; // 0x806AF960
    FUN_8064E324(r4, r6, r3, r4); // bl 0x8064E324
    /* lis r31, 0 */ // 0x806AF968
    r31 = r31 + 0; // 0x806AF970
    /* li r7, 0 */ // 0x806AF974
    r4 = r31 + 0x17e; // 0x806AF978
    r5 = r31 + 0x189; // 0x806AF97C
    r6 = r31 + 0x19b; // 0x806AF980
    FUN_8064E36C(r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x806AF98C
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r30;
    r5 = r30 + 0x408; // 0x806AF998
    /* li r4, 1 */ // 0x806AF99C
    /* li r6, 0 */ // 0x806AF9A0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x408; // 0x806AF9A8
    r4 = r31 + 0x1a9; // 0x806AF9AC
    r5 = r31 + 0x1b0; // 0x806AF9B0
    r6 = r31 + 0x1c4; // 0x806AF9B4
    /* li r7, 1 */ // 0x806AF9B8
    /* li r8, 0 */ // 0x806AF9BC
    /* li r9, 0 */ // 0x806AF9C0
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x408; // 0x806AF9C8
    r4 = r30 + 0x44; // 0x806AF9CC
    /* li r5, 0 */ // 0x806AF9D0
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30;
    r5 = r30 + 0x65c; // 0x806AF9DC
    /* li r4, 2 */ // 0x806AF9E0
    /* li r6, 0 */ // 0x806AF9E4
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x65c; // 0x806AF9EC
    r4 = r31 + 0x1d6; // 0x806AF9F0
    r5 = r31 + 0x1dd; // 0x806AF9F4
    r6 = r31 + 0x1f1; // 0x806AF9F8
    /* li r7, 1 */ // 0x806AF9FC
    /* li r8, 0 */ // 0x806AFA00
    /* li r9, 0 */ // 0x806AFA04
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x65c; // 0x806AFA0C
    r4 = r30 + 0x58; // 0x806AFA10
    /* li r5, 0 */ // 0x806AFA14
    FUN_80649EC4(r9, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x65c; // 0x806AFA1C
    /* li r4, 0 */ // 0x806AFA20
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x44 + r1); // lwz @ 0x806AFA28
    r31 = *(0x3c + r1); // lwz @ 0x806AFA2C
    r30 = *(0x38 + r1); // lwz @ 0x806AFA30
    return;
}