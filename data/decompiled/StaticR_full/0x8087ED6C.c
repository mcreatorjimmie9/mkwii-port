/* Function at 0x8087ED6C, size=332 bytes */
/* Stack frame: 224 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_8087ED6C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -224(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(0xd8 + r1) = r30; // stw @ 0x8087ED80
    r30 = r3;
    FUN_80654ECC(r3); // bl 0x80654ECC
    /* lis r3, 0 */ // 0x8087ED90
    /* lis r4, 0 */ // 0x8087ED94
    r7 = *(0 + r3); // lwz @ 0x8087ED98
    /* mulli r0, r31, 0xf0 */ // 0x8087ED9C
    r5 = *(0 + r4); // lwz @ 0x8087EDA0
    /* li r3, 2 */ // 0x8087EDA4
    r6 = r7 + 0x28; // 0x8087EDA8
    r4 = *(0x26 + r7); // lbz @ 0x8087EDAC
    r8 = r6 + r0; // 0x8087EDB0
    r6 = *(0xc + r8); // lwz @ 0x8087EDB4
    r0 = r4 + -2; // 0x8087EDB8
    r5 = *(0x98 + r5); // lwz @ 0x8087EDBC
    /* orc r3, r4, r3 */ // 0x8087EDC0
    /* srwi r0, r0, 1 */ // 0x8087EDC4
    /* subf r0, r0, r3 */ // 0x8087EDCC
    r8 = *(0x10 + r8); // lwz @ 0x8087EDD0
    r3 = r5 + 0x188; // 0x8087EDD4
    /* srwi r5, r0, 0x1f */ // 0x8087EDD8
    if (<) goto 0x0x8087ee08;
    r4 = r31;
    FUN_8066E0EC(r3, r4); // bl 0x8066E0EC
    *(0x50 + r1) = r3; // stw @ 0x8087EDE8
    /* lis r4, 0 */ // 0x8087EDEC
    r3 = r30;
    r4 = r4 + 0; // 0x8087EDF8
    /* li r5, 0x251d */ // 0x8087EDFC
    FUN_806A093C(r4, r3, r6, r4, r5); // bl 0x806A093C
    /* b 0x8087ee8c */ // 0x8087EE04
    r0 = *(0xb70 + r7); // lwz @ 0x8087EE08
    /* li r4, 0 */ // 0x8087EE0C
    if (<) goto 0x0x8087ee24;
    if (>) goto 0x0x8087ee24;
    /* li r4, 1 */ // 0x8087EE20
    if (!=) goto 0x0x8087ee34;
    if (!=) goto 0x0x8087ee3c;
    if (!=) goto 0x0x8087ee68;
    r3 = r6;
    /* li r4, 1 */ // 0x8087EE40
    FUN_808AF914(r3, r4); // bl 0x808AF914
    /* lis r4, 0 */ // 0x8087EE48
    r5 = r3;
    r4 = r4 + 0; // 0x8087EE50
    r3 = r30;
    r4 = r4 + 0x9b; // 0x8087EE58
    /* li r6, 0 */ // 0x8087EE5C
    FUN_806A093C(r5, r4, r3, r4, r6); // bl 0x806A093C
    /* b 0x8087ee8c */ // 0x8087EE64
    r4 = r31;
    FUN_8066E0EC(r4, r6, r4); // bl 0x8066E0EC
    *(0x50 + r1) = r3; // stw @ 0x8087EE70
    /* lis r4, 0 */ // 0x8087EE74
    r3 = r30;
    r4 = r4 + 0; // 0x8087EE80
    /* li r5, 0x251d */ // 0x8087EE84
    FUN_806A093C(r4, r3, r6, r4, r5); // bl 0x806A093C
    /* lis r4, 0 */ // 0x8087EE8C
    r3 = r30;
    r4 = r4 + 0; // 0x8087EE94
    r4 = r4 + 0xa7; // 0x8087EE98
    FUN_806A0B6C(r4, r3, r4, r4); // bl 0x806A0B6C
    r0 = *(0xe4 + r1); // lwz @ 0x8087EEA0
    r31 = *(0xdc + r1); // lwz @ 0x8087EEA4
    r30 = *(0xd8 + r1); // lwz @ 0x8087EEA8
    return;
}