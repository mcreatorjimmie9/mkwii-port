/* Function at 0x80699F10, size=636 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 10 function(s) */

int FUN_80699F10(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    /* li r4, 1 */ // 0x80699F24
    *(0x18 + r1) = r30; // stw @ 0x80699F28
    r30 = r3;
    r3 = r3 + 0x98; // 0x80699F30
    *(0x14 + r1) = r29; // stw @ 0x80699F34
    *(0x10 + r1) = r28; // stw @ 0x80699F38
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x80699F40
    r28 = r3;
    if (==) goto 0x0x80699f5c;
    if (==) goto 0x0x80699f70;
    /* b 0x80699fc0 */ // 0x80699F58
    /* lis r5, 0 */ // 0x80699F5C
    /* li r4, 1 */ // 0x80699F60
    /* lfs f1, 0(r5) */ // 0x80699F64
    FUN_8069F59C(r5, r4); // bl 0x8069F59C
    /* b 0x80699fc0 */ // 0x80699F6C
    r3 = *(0 + r3); // lwz @ 0x80699F70
    /* slwi r0, r0, 4 */ // 0x80699F74
    /* lwzx r3, r3, r0 */ // 0x80699F78
    FUN_805E3430(); // bl 0x805E3430
    /* clrlwi r4, r3, 0x10 */ // 0x80699F80
    /* lis r0, 0x4330 */ // 0x80699F84
    *(0xc + r1) = r4; // stw @ 0x80699F88
    /* lis r3, 0 */ // 0x80699F8C
    /* lfd f3, 0(r3) */ // 0x80699F90
    /* lis r5, 0 */ // 0x80699F94
    *(8 + r1) = r0; // stw @ 0x80699F98
    r3 = r28;
    /* lfs f1, 0x3c(r28) */ // 0x80699FA0
    /* li r4, 1 */ // 0x80699FA4
    /* lfd f2, 8(r1) */ // 0x80699FA8
    /* lfs f0, 0(r5) */ // 0x80699FAC
    /* fsubs f2, f2, f3 */ // 0x80699FB0
    /* fdivs f1, f1, f2 */ // 0x80699FB4
    /* fsubs f1, f0, f1 */ // 0x80699FB8
    FUN_8069F718(); // bl 0x8069F718
    r3 = r30 + 0x98; // 0x80699FC0
    /* li r4, 2 */ // 0x80699FC4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80699FCC
    /* li r4, 0 */ // 0x80699FD0
    /* lfs f1, 0(r5) */ // 0x80699FD4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = *(0x64 + r30); // lwz @ 0x80699FDC
    r3 = *(0xc + r3); // lwz @ 0x80699FE0
    r28 = *(0x38 + r3); // lwz @ 0x80699FE4
    if (!=) goto 0x0x80699ff8;
    /* li r28, 0 */ // 0x80699FF0
    /* b 0x8069a04c */ // 0x80699FF4
    /* lis r29, 0 */ // 0x80699FF8
    r29 = r29 + 0; // 0x80699FFC
    if (==) goto 0x0x8069a048;
    r12 = *(0 + r28); // lwz @ 0x8069A004
    r3 = r28;
    r12 = *(8 + r12); // lwz @ 0x8069A00C
    /* mtctr r12 */ // 0x8069A010
    /* bctrl  */ // 0x8069A014
    /* b 0x8069a030 */ // 0x8069A018
    if (!=) goto 0x0x8069a02c;
    /* li r0, 1 */ // 0x8069A024
    /* b 0x8069a03c */ // 0x8069A028
    r3 = *(0 + r3); // lwz @ 0x8069A02C
    if (!=) goto 0x0x8069a01c;
    /* li r0, 0 */ // 0x8069A038
    if (==) goto 0x0x8069a048;
    /* b 0x8069a04c */ // 0x8069A044
    /* li r28, 0 */ // 0x8069A048
    r3 = r28;
    r4 = r31;
    FUN_8066B700(r3, r4); // bl 0x8066B700
    if (==) goto 0x0x8069a19c;
    r3 = r30 + 0x98; // 0x8069A060
    /* li r4, 3 */ // 0x8069A064
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x8069A06C
    /* li r4, 0 */ // 0x8069A070
    /* lfs f1, 0(r5) */ // 0x8069A074
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r3 = *(0x64 + r30); // lwz @ 0x8069A07C
    r28 = *(8 + r3); // lwz @ 0x8069A080
    if (!=) goto 0x0x8069a094;
    /* li r28, 0 */ // 0x8069A08C
    /* b 0x8069a0e8 */ // 0x8069A090
    /* lis r29, 0 */ // 0x8069A094
    r29 = r29 + 0; // 0x8069A098
    if (==) goto 0x0x8069a0e4;
    r12 = *(0 + r28); // lwz @ 0x8069A0A0
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x8069A0A8
    /* mtctr r12 */ // 0x8069A0AC
    /* bctrl  */ // 0x8069A0B0
    /* b 0x8069a0cc */ // 0x8069A0B4
    if (!=) goto 0x0x8069a0c8;
    /* li r0, 1 */ // 0x8069A0C0
    /* b 0x8069a0d8 */ // 0x8069A0C4
    r3 = *(0 + r3); // lwz @ 0x8069A0C8
    if (!=) goto 0x0x8069a0b8;
    /* li r0, 0 */ // 0x8069A0D4
    if (==) goto 0x0x8069a0e4;
    /* b 0x8069a0e8 */ // 0x8069A0E0
    /* li r28, 0 */ // 0x8069A0E4
    r0 = *(0x234 + r30); // lwz @ 0x8069A0E8
    if (==) goto 0x0x8069a100;
    if (==) goto 0x0x8069a150;
    /* b 0x8069a19c */ // 0x8069A0FC
    r3 = *(0x98 + r28); // lwz @ 0x8069A100
    if (==) goto 0x0x8069a124;
    r12 = *(0 + r3); // lwz @ 0x8069A10C
    r4 = r28;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x8069A118
    /* mtctr r12 */ // 0x8069A11C
    /* bctrl  */ // 0x8069A120
    r12 = *(0 + r28); // lwz @ 0x8069A124
    r3 = r28;
    r4 = r31;
    r12 = *(0x3c + r12); // lwz @ 0x8069A130
    /* mtctr r12 */ // 0x8069A134
    /* bctrl  */ // 0x8069A138
    r3 = r28;
    r5 = r31;
    /* li r4, 0x15 */ // 0x8069A144
    FUN_806A03CC(r3, r5, r4); // bl 0x806A03CC
    /* b 0x8069a19c */ // 0x8069A14C
    r3 = *(0x9c + r28); // lwz @ 0x8069A150
    if (==) goto 0x0x8069a174;
    r12 = *(0 + r3); // lwz @ 0x8069A15C
    r4 = r28;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x8069A168
    /* mtctr r12 */ // 0x8069A16C
    /* bctrl  */ // 0x8069A170
    r12 = *(0 + r28); // lwz @ 0x8069A174
    r3 = r28;
    r4 = r31;
    r12 = *(0x40 + r12); // lwz @ 0x8069A180
    /* mtctr r12 */ // 0x8069A184
    /* bctrl  */ // 0x8069A188
}