/* Function at 0x808EDD20, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_808EDD20(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808EDD30
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808EDD38
    r30 = r3;
    if (==) goto 0x0x808eddb4;
    /* li r4, -1 */ // 0x808EDD44
    r3 = r3 + 0xb4c; // 0x808EDD48
    FUN_806A0540(r4, r3); // bl 0x806A0540
    r3 = r30 + 0x9c0; // 0x808EDD50
    /* li r4, -1 */ // 0x808EDD54
    FUN_806CABB4(r4, r3, r3, r4); // bl 0x806CABB4
    r3 = r30 + 0x838; // 0x808EDD5C
    /* li r4, -1 */ // 0x808EDD60
    FUN_806CA440(r3, r4, r3, r4); // bl 0x806CA440
    r3 = r30 + 0x6c4; // 0x808EDD68
    /* li r4, -1 */ // 0x808EDD6C
    FUN_8066CEF8(r3, r4, r3, r4); // bl 0x8066CEF8
    r3 = r30 + 0x430; // 0x808EDD74
    /* li r4, -1 */ // 0x808EDD78
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808edda4;
    /* addic. r3, r30, 0x54 */ // 0x808EDD88
    if (==) goto 0x0x808edd98;
    /* li r4, 0 */ // 0x808EDD90
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808EDD9C
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808eddb4;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808EDDB8
    r30 = *(8 + r1); // lwz @ 0x808EDDBC
    r0 = *(0x14 + r1); // lwz @ 0x808EDDC0
    return;
}