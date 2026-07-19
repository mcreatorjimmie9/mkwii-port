/* Function at 0x8065DA88, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_8065DA88(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8065DA98
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8065DAA0
    r30 = r3;
    if (==) goto 0x0x8065db0c;
    /* addic. r3, r3, 0x8c0 */ // 0x8065DAAC
    if (==) goto 0x0x8065dabc;
    /* li r4, 0 */ // 0x8065DAB4
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30 + 0x66c; // 0x8065DABC
    /* li r4, -1 */ // 0x8065DAC0
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x418; // 0x8065DAC8
    /* li r4, -1 */ // 0x8065DACC
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    /* addic. r3, r30, 0x2a4 */ // 0x8065DAD4
    if (==) goto 0x0x8065dae4;
    /* li r4, 0 */ // 0x8065DADC
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x80; // 0x8065DAE4
    /* li r4, -1 */ // 0x8065DAE8
    FUN_8066A1A0(r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x8065DAF4
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x8065db0c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8065DB10
    r30 = *(8 + r1); // lwz @ 0x8065DB14
    r0 = *(0x14 + r1); // lwz @ 0x8065DB18
    return;
}