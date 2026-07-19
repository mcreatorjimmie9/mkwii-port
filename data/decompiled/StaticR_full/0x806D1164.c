/* Function at 0x806D1164, size=104 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806D1164(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806D1174
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806D117C
    r30 = r3;
    if (==) goto 0x0x806d11f4;
    /* addic. r3, r3, 0xc74 */ // 0x806D1188
    if (==) goto 0x0x806d1198;
    /* li r4, 0 */ // 0x806D1190
    FUN_806498AC(r4); // bl 0x806498AC
    /* lis r4, 0 */ // 0x806D1198
    r3 = r30 + 0x578; // 0x806D119C
    r4 = r4 + 0; // 0x806D11A0
    /* li r5, 0x254 */ // 0x806D11A4
    /* li r6, 3 */ // 0x806D11A8
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r30 + 0x404; // 0x806D11B0
    /* li r4, -1 */ // 0x806D11B4
    FUN_8066CEF8(r5, r6, r3, r4); // bl 0x8066CEF8
    /* addic. r3, r30, 0x290 */ // 0x806D11BC
    if (==) goto 0x0x806d11cc;
    /* li r4, 0 */ // 0x806D11C4
    FUN_806A0540(r4, r4); // bl 0x806A0540
}