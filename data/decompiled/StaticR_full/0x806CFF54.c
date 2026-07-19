/* Function at 0x806CFF54, size=288 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_806CFF54(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x28 + r1) = r30; // stw @ 0x806CFF68
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x806CFF70
    /* lis r5, 0 */ // 0x806CFF74
    r4 = r4 + 0; // 0x806CFF78
    *(0 + r31) = r4; // stw @ 0x806CFF7C
    /* lis r3, 0 */ // 0x806CFF80
    r5 = r5 + 0; // 0x806CFF84
    r10 = *(0 + r3); // lwzu @ 0x806CFF88
    /* lis r4, 0 */ // 0x806CFF8C
    /* lis r7, 0 */ // 0x806CFF90
    *(0x14 + r1) = r10; // stw @ 0x806CFF94
    r9 = *(4 + r3); // lwz @ 0x806CFF98
    r4 = r4 + 0; // 0x806CFF9C
    r8 = *(8 + r3); // lwz @ 0x806CFFA0
    r3 = r31 + 0x6c; // 0x806CFFA4
    *(0x54 + r31) = r8; // stw @ 0x806CFFA8
    *(0x44 + r31) = r5; // stw @ 0x806CFFAC
    *(0x48 + r31) = r31; // stw @ 0x806CFFB0
    *(0x4c + r31) = r10; // stw @ 0x806CFFB4
    *(0x50 + r31) = r9; // stw @ 0x806CFFB8
    r6 = *(0 + r7); // lwzu @ 0x806CFFBC
    *(0x18 + r1) = r9; // stw @ 0x806CFFC0
    r5 = *(4 + r7); // lwz @ 0x806CFFC4
    r0 = *(8 + r7); // lwz @ 0x806CFFC8
    *(0x1c + r1) = r8; // stw @ 0x806CFFCC
    *(8 + r1) = r6; // stw @ 0x806CFFD0
    *(0xc + r1) = r5; // stw @ 0x806CFFD4
    *(0x10 + r1) = r0; // stw @ 0x806CFFD8
    *(0x58 + r31) = r4; // stw @ 0x806CFFDC
    *(0x5c + r31) = r31; // stw @ 0x806CFFE0
    *(0x60 + r31) = r6; // stw @ 0x806CFFE4
    *(0x64 + r31) = r5; // stw @ 0x806CFFE8
    *(0x68 + r31) = r0; // stw @ 0x806CFFEC
    FUN_80669F74(); // bl 0x80669F74
    r30 = r31 + 0x290; // 0x806CFFF4
    r3 = r30;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x806D0000
    r3 = r31 + 0x404; // 0x806D0004
    r4 = r4 + 0; // 0x806D0008
    *(0 + r30) = r4; // stw @ 0x806D000C
    FUN_806497A4(r4, r3, r4); // bl 0x806497A4
    r3 = r31 + 0x658; // 0x806D0014
    FUN_806497A4(r3, r4, r3); // bl 0x806497A4
    r3 = r31 + 0x8ac; // 0x806D001C
    FUN_806497A4(r3, r3); // bl 0x806497A4
    r30 = r31 + 0xb00; // 0x806D0024
    r3 = r30;
    FUN_806497A4(r3, r3); // bl 0x806497A4
    /* lis r3, 0 */ // 0x806D0030
    /* lis r5, 0 */ // 0x806D0034
    /* lfs f0, 0(r3) */ // 0x806D0038
    r5 = r5 + 0; // 0x806D003C
    /* li r4, 0x7d1 */ // 0x806D0040
    /* li r0, 0 */ // 0x806D0044
    *(0 + r30) = r5; // stw @ 0x806D0048
    r3 = r31;
    *(0x254 + r30) = r4; // stw @ 0x806D0050
    *(0x258 + r30) = r0; // stw @ 0x806D0054
    /* stfs f0, 0x25c(r30) */ // 0x806D0058
    r31 = *(0x2c + r1); // lwz @ 0x806D005C
    r30 = *(0x28 + r1); // lwz @ 0x806D0060
    r0 = *(0x34 + r1); // lwz @ 0x806D0064
    return;
}