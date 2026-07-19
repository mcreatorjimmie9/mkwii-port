/* Function at 0x808BA320, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_808BA320(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808BA334
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808BA33C
    r29 = r3;
    if (==) goto 0x0x808ba3ec;
    /* addic. r31, r3, 0x149c */ // 0x808BA348
    if (==) goto 0x0x808ba380;
    r3 = r31 + 0xb24; // 0x808BA350
    /* li r4, -1 */ // 0x808BA354
    FUN_806A0540(r3, r4); // bl 0x806A0540
    /* lis r4, 0 */ // 0x808BA35C
    r3 = r31 + 0x174; // 0x808BA360
    r4 = r4 + 0; // 0x808BA364
    /* li r5, 0x26c */ // 0x808BA368
    /* li r6, 4 */ // 0x808BA36C
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808BA378
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    /* addic. r31, r29, 0x6c8 */ // 0x808BA380
    if (==) goto 0x0x808ba3ac;
    /* lis r4, 0 */ // 0x808BA388
    r3 = r31 + 0x174; // 0x808BA38C
    r4 = r4 + 0; // 0x808BA390
    /* li r5, 0x18c */ // 0x808BA394
    /* li r6, 8 */ // 0x808BA398
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* li r4, 0 */ // 0x808BA3A4
    FUN_806A0540(r5, r6, r3, r4); // bl 0x806A0540
    r3 = r29 + 0x430; // 0x808BA3AC
    /* li r4, -1 */ // 0x808BA3B0
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808ba3dc;
    /* addic. r3, r29, 0x54 */ // 0x808BA3C0
    if (==) goto 0x0x808ba3d0;
    /* li r4, 0 */ // 0x808BA3C8
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r29;
    /* li r4, 0 */ // 0x808BA3D4
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808ba3ec;
    r3 = r29;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x808BA3EC
    r3 = r29;
}