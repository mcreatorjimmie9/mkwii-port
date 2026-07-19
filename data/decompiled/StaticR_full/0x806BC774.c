/* Function at 0x806BC774, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_806BC774(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806BC784
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806BC78C
    r30 = r3;
    if (==) goto 0x0x806bc804;
    /* addic. r3, r3, 0xc40 */ // 0x806BC798
    if (==) goto 0x0x806bc7a8;
    /* li r4, 0 */ // 0x806BC7A0
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x9dc */ // 0x806BC7A8
    if (==) goto 0x0x806bc7b8;
    /* li r4, 0 */ // 0x806BC7B0
    FUN_806498AC(r4, r4); // bl 0x806498AC
    r3 = r30 + 0x788; // 0x806BC7B8
    /* li r4, -1 */ // 0x806BC7BC
    FUN_806498AC(r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x534; // 0x806BC7C4
    /* li r4, -1 */ // 0x806BC7C8
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0x2e0; // 0x806BC7D0
    /* li r4, -1 */ // 0x806BC7D4
    FUN_806498AC(r3, r4, r3, r4); // bl 0x806498AC
    r3 = r30 + 0xbc; // 0x806BC7DC
    /* li r4, -1 */ // 0x806BC7E0
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    r3 = r30;
    /* li r4, 0 */ // 0x806BC7EC
    FUN_806711C4(r3, r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x806bc804;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806BC808
    r30 = *(8 + r1); // lwz @ 0x806BC80C
    r0 = *(0x14 + r1); // lwz @ 0x806BC810
    return;
}