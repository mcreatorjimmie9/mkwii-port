/* Function at 0x808F0F0C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808F0F0C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808F0F1C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808F0F24
    r30 = r3;
    if (==) goto 0x0x808f0f70;
    /* li r4, -1 */ // 0x808F0F30
    r3 = r3 + 0x430; // 0x808F0F34
    FUN_8066A1A0(r4, r3); // bl 0x8066A1A0
    if (==) goto 0x0x808f0f60;
    /* addic. r3, r30, 0x54 */ // 0x808F0F44
    if (==) goto 0x0x808f0f54;
    /* li r4, 0 */ // 0x808F0F4C
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808F0F58
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808f0f70;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808F0F74
    r30 = *(8 + r1); // lwz @ 0x808F0F78
    r0 = *(0x14 + r1); // lwz @ 0x808F0F7C
    return;
}