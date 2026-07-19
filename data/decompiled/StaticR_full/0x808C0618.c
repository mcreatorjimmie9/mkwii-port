/* Function at 0x808C0618, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808C0618(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808C0628
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808C0630
    r30 = r3;
    if (==) goto 0x0x808c06a4;
    /* addic. r3, r3, 0xda8 */ // 0x808C063C
    if (==) goto 0x0x808c064c;
    /* li r4, 0 */ // 0x808C0644
    FUN_806A0540(r4); // bl 0x806A0540
    r3 = r30 + 0xbfc; // 0x808C064C
    /* li r4, -1 */ // 0x808C0650
    FUN_8069A82C(r4, r3, r4); // bl 0x8069A82C
    r3 = r30 + 0x6c4; // 0x808C0658
    /* li r4, -1 */ // 0x808C065C
    FUN_80699284(r3, r4, r3, r4); // bl 0x80699284
    r3 = r30 + 0x430; // 0x808C0664
    /* li r4, -1 */ // 0x808C0668
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808c0694;
    /* addic. r3, r30, 0x54 */ // 0x808C0678
    if (==) goto 0x0x808c0688;
    /* li r4, 0 */ // 0x808C0680
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808C068C
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808c06a4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808C06A8
    r30 = *(8 + r1); // lwz @ 0x808C06AC
    r0 = *(0x14 + r1); // lwz @ 0x808C06B0
    return;
}