/* Function at 0x808E912C, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808E912C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808E9140
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808E9148
    r29 = r3;
    if (==) goto 0x0x808e91f8;
    /* addic. r31, r3, 0x149c */ // 0x808E9154
    if (==) goto 0x0x808e918c;
    r3 = r31 + 0x14d4; // 0x808E915C
    /* li r4, -1 */ // 0x808E9160
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808E9168
    r3 = r31 + 0x174; // 0x808E916C
    r4 = r4 + 0; // 0x808E9170
    /* li r5, 0x26c */ // 0x808E9174
    /* li r6, 8 */ // 0x808E9178
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E9184
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0x6c4 */ // 0x808E918C
    if (==) goto 0x0x808e91b8;
    /* lis r4, 0 */ // 0x808E9194
    r3 = r31 + 0x174; // 0x808E9198
    r4 = r4 + 0; // 0x808E919C
    /* li r5, 0x18c */ // 0x808E91A0
    /* li r6, 8 */ // 0x808E91A4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808E91B0
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    r3 = r29 + 0x430; // 0x808E91B8
    /* li r4, -1 */ // 0x808E91BC
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e91e8;
    /* addic. r3, r29, 0x54 */ // 0x808E91CC
    if (==) goto 0x0x808e91dc;
    /* li r4, 0 */ // 0x808E91D4
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r29;
    /* li r4, 0 */ // 0x808E91E0
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e91f8;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808E91F8
    r3 = r29;
}