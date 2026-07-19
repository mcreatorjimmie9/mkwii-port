/* Function at 0x80683958, size=260 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 10 function(s) */

int FUN_80683958(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 1 */ // 0x80683960
    /* li r5, 0 */ // 0x80683964
    *(0x14 + r1) = r0; // stw @ 0x80683968
    *(0xc + r1) = r31; // stw @ 0x8068396C
    *(8 + r1) = r30; // stw @ 0x80683970
    r30 = r3;
    r12 = *(0x58 + r3); // lwz @ 0x80683978
    r12 = *(0x10 + r12); // lwz @ 0x8068397C
    /* mtctr r12 */ // 0x80683980
    r3 = r3 + 0x58; // 0x80683984
    /* bctrl  */ // 0x80683988
    r3 = r30;
    r4 = r30 + 0x58; // 0x80683990
    FUN_80671C34(r3, r3, r4); // bl 0x80671C34
    r3 = r30;
    /* li r4, 2 */ // 0x8068399C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r30;
    r5 = r30 + 0x4d0; // 0x806839A8
    /* li r4, 0 */ // 0x806839AC
    /* li r6, 0 */ // 0x806839B0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    /* lis r31, 0 */ // 0x806839B8
    r3 = r30 + 0x4d0; // 0x806839BC
    r31 = r31 + 0; // 0x806839C0
    r4 = r31 + 0x2b; // 0x806839C4
    r5 = r31 + 0x3a; // 0x806839C8
    r6 = r31 + 0x4c; // 0x806839CC
    FUN_8066CF50(r3, r4, r5, r6); // bl 0x8066CF50
    r3 = r30 + 0x4d0; // 0x806839D4
    /* li r4, 0x812 */ // 0x806839D8
    /* li r5, 0 */ // 0x806839DC
    FUN_806A0A34(r6, r3, r4, r5); // bl 0x806A0A34
    r3 = r30;
    r5 = r30 + 0x27c; // 0x806839E8
    /* li r4, 1 */ // 0x806839EC
    /* li r6, 0 */ // 0x806839F0
    FUN_80671C2C(r3, r5, r4, r6); // bl 0x80671C2C
    r3 = r30 + 0x27c; // 0x806839F8
    r4 = r31 + 0x5e; // 0x806839FC
    r5 = r31 + 0x6d; // 0x80683A00
    r6 = r31 + 0x77; // 0x80683A04
    /* li r7, 1 */ // 0x80683A08
    /* li r8, 0 */ // 0x80683A0C
    /* li r9, 0 */ // 0x80683A10
    FUN_80649914(r5, r6, r7, r8, r9); // bl 0x80649914
    r3 = r30 + 0x27c; // 0x80683A18
    /* li r4, 0x80c */ // 0x80683A1C
    /* li r5, 0 */ // 0x80683A20
    FUN_806A0A34(r9, r3, r4, r5); // bl 0x806A0A34
    r3 = r30 + 0x27c; // 0x80683A28
    r4 = r30 + 0x44; // 0x80683A2C
    /* li r5, 0 */ // 0x80683A30
    FUN_80649EC4(r5, r3, r4, r5); // bl 0x80649EC4
    r3 = r30 + 0x27c; // 0x80683A38
    /* li r4, 0 */ // 0x80683A3C
    FUN_80649EEC(r4, r5, r3, r4); // bl 0x80649EEC
    r0 = *(0x14 + r1); // lwz @ 0x80683A44
    r31 = *(0xc + r1); // lwz @ 0x80683A48
    r30 = *(8 + r1); // lwz @ 0x80683A4C
    return;
}